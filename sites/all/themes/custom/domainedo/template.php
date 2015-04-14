<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 *
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

/**
 * Theme the calendar title.
 * Copied from modules/contrib/date/date_views/theme/theme.inc.
 */
function domainedo_date_nav_title($params) {
	$granularity = $params['granularity'];
	$view = $params['view'];
	$date_info = $view->date_info;
	$link = !empty($params['link']) ? $params['link'] : FALSE;
	$format = !empty($params['format']) ? $params['format'] : NULL;
	switch ($granularity) {
		case 'year':
			$title = $date_info->year;
			$date_arg = $date_info->year;
			break;
		case 'month':
			$format = !empty($format) ? $format : (empty($date_info->mini) ? 'F Y' : 'F');
			$title = date_format_date($date_info->min_date, 'custom', $format);
			$date_arg = $date_info->year . '-' . date_pad($date_info->month);
			break;
		case 'day':
			//$format = !empty($format) ? $format : (empty($date_info->mini) ? 'l, F j, Y' : 'l, F j');
			$format = !empty($format) ? $format : (empty($date_info->mini) ? 'l j F  Y' : 'l j F');
			$title = date_format_date($date_info->min_date, 'custom', $format);
			$date_arg = $date_info->year . '-' . date_pad($date_info->month) . '-' . date_pad($date_info->day);
			break;
		case 'week':
			//$format = !empty($format) ? $format : (empty($date_info->mini) ? 'F j, Y' : 'F j');
			$format = !empty($format) ? $format : (empty($date_info->mini) ? 'j F Y' : 'j F');
			$title = t('Week of @date', array('@date' => date_format_date($date_info->min_date, 'custom', $format)));
			$date_arg = $date_info->year . '-W' . date_pad($date_info->week);
			break;
	}
	if (!empty($date_info->mini) || $link) {
		// Month navigation titles are used as links in the mini view.
		$attributes = array('title' => t('View full page month'));
		$url = date_pager_url($view, $granularity, $date_arg, TRUE);
		return l($title, $url, array('attributes' => $attributes));
	}
	else {
		return $title;
	}
}
/**
 * Add a google font and load slideshow on frontpage
 */
function omega_preprocess_html(&$variables) {
  drupal_add_css('http://fonts.googleapis.com/css?family=Lato',array('type' => 'external'));
  
   if ((in_array('front', $variables['classes_array']))){
    drupal_add_js(drupal_get_path('theme', 'domainedo'). '/js/domainedo_slideshow.js');//Chargement du fichier js.
  }
  
  $path = drupal_get_path_alias();
  $pattern = 'domaine-do/espaces/*';
  if (drupal_match_path($path, $pattern)) {
    drupal_add_js(drupal_get_path('theme', 'domainedo'). '/js/map.js');
  }
}


/**
 * Theme function to allow any menu tree to be themed as a Superfish menu.
 */
function domainedo_superfish($variables) {
  
  global $user, $language;

  $id = $variables['id'];
  $menu_name = $variables['menu_name'];
  $mlid = $variables['mlid'];
  $sfsettings = $variables['sfsettings'];

  $menu = menu_tree_all_data($menu_name);

  if (function_exists('i18n_menu_localize_tree')) {
    $menu = i18n_menu_localize_tree($menu);
  }

  // For custom $menus and menus built all the way from the top-level we
  // don't need to "create" the specific sub-menu and we need to get the title
  // from the $menu_name since there is no "parent item" array.
  // Create the specific menu if we have a mlid.
  if (!empty($mlid)) {
    // Load the parent menu item.
    $item = menu_link_load($mlid);
    $title = check_plain($item['title']);
    $parent_depth = $item['depth'];
    // Narrow down the full menu to the specific sub-tree we need.
    for ($p = 1; $p < 10; $p++) {
      if ($sub_mlid = $item["p$p"]) {
        $subitem = menu_link_load($sub_mlid);
        $key = (50000 + $subitem['weight']) . ' ' . $subitem['title'] . ' ' . $subitem['mlid'];
        $menu = (isset($menu[$key]['below'])) ? $menu[$key]['below'] : $menu;
      }
    }
  }
  else {
    $result = db_query("SELECT title FROM {menu_custom} WHERE menu_name = :a", array(':a' => $menu_name))->fetchField();
    $title = check_plain($result);
  }

  $output['content'] = '';
  $output['subject'] = $title;
  if ($menu) {
    // Set the total menu depth counting from this parent if we need it.
    $depth = $sfsettings['depth'];
    $depth = ($sfsettings['depth'] > 0 && isset($parent_depth)) ? $parent_depth + $depth : $depth;

    $var = array(
      'id' => $id,
      'menu' => $menu,
      'depth' => $depth,
      'trail' => superfish_build_page_trail(menu_tree_page_data($menu_name)),
      'sfsettings' => $sfsettings
    );
    if ($menu_tree = theme('superfish_build', $var)) {
      if ($menu_tree['content']) {
        // Add custom HTML codes around the main menu.
        if ($sfsettings['wrapmul'] && strpos($sfsettings['wrapmul'], ',') !== FALSE) {
          $wmul = explode(',', $sfsettings['wrapmul']);
          // In case you just wanted to add something after the element.
          if (drupal_substr($sfsettings['wrapmul'], 0) == ',') {
            array_unshift($wmul, '');
          }
        }
        else {
          $wmul = array();
        }
        $output['content'] = isset($wmul[0]) ? $wmul[0] : '';
        $output['content'] .= '<nav id="nav-superfish-' . $id .'><ul id="superfish-' . $id . '"';
        $output['content'] .= ' class="menu sf-menu sf-' . $menu_name . ' sf-' . $sfsettings['type'] . ' sf-style-' . $sfsettings['style'];
        $output['content'] .= ($sfsettings['itemcounter']) ? ' sf-total-items-' . $menu_tree['total_children'] : '';
        $output['content'] .= ($sfsettings['itemcounter']) ? ' sf-parent-items-' . $menu_tree['parent_children'] : '';
        $output['content'] .= ($sfsettings['itemcounter']) ? ' sf-single-items-' . $menu_tree['single_children'] : '';
        $output['content'] .= ($sfsettings['ulclass']) ? ' ' . $sfsettings['ulclass'] : '';
        $output['content'] .= ($language->direction == 1) ? ' rtl' : '';
        $output['content'] .= '">' . $menu_tree['content'] . '</ul></nav>';
        $output['content'] .= isset($wmul[1]) ? $wmul[1] : '';
      }
    }
  }
  
  return $output;
}

/*
 * Don't use this function. It dumps <nav> makup inside menus and so the accordion 
 * menu doesn't work any more on smartphones - Yvan Douënel
 * 
 * function domainedo_menu_tree($variables) {
  return '<nav><ul class="menu">' . $variables['tree'] . '</ul></nav>';
}*/

function domainedo_preprocess_image(&$variables) {
  foreach (array('width', 'height') as $key) {
  
   unset($variables[$key]);
   unset($variables[$key]);
 }
}
function domainedo_ds_field_expert($variables) {
  dpm($variables);
}
