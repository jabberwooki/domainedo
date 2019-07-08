<?php

/**
 * @file
 * The primary PHP file for this theme.
 */

use phpbrowscap\Browscap;

function ddobs_menu_tree($variables) {
  $menu_type = str_replace('menu_tree__menu_', '', $variables['theme_hook_original']);
  return '<ul class="menu ' . str_replace(array('_', ' '), '-', strtolower($menu_type)) . '-menu">' . $variables['tree'] . '</ul>';
}

/*
 * This function allow to use specific tpl for each content type or node id
 */
function ddobs_preprocess_page(&$variables, $hook) {
  if (isset($variables['node'])) {
    $variables['theme_hook_suggestions'][] = 'page__type__'. $variables['node']->type;
    $variables['theme_hook_suggestions'][] = "page__node__" . $variables['node']->nid;
  }
  if(drupal_is_front_page()) {
    drupal_add_js(drupal_get_path('theme', 'ddobs') . '/js/festivals_front.js');
  }

  $cache_path = drupal_get_path('module', 'domainedo_webpush') . '/cache/';
  $bc = new Browscap($cache_path);
  $bc->remoteIniUrl = 'http://browscap.org/stream?q=Lite_PHP_BrowsCapINI';
  $current_browser = $bc->getBrowser();

  $webpush_compatibility = TRUE;
  if ($current_browser->Platform == 'iOS') {
    $webpush_compatibility = FALSE;
  }
  $variables['webpush_compatibility'] = $webpush_compatibility;
}
