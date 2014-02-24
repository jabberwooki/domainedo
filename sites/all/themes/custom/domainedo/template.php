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