<?php
/**
 * @file
 * news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "scald" && $api == "context_config") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_custom_breadcrumb_features_default_settings().
 */
function news_custom_breadcrumb_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: fiche_v_nement.
  $custom_breadcrumbs['fiche_v_nement'] = array(
    'name' => 'Fiche événement',
    'titles' => 'Autres événements
[current-page:page-title]',
    'paths' => 'evenements
<none>',
    'visibility_php' => '',
    'node_type' => 'news',
    'language' => '',
    'machine_name' => 'fiche_v_nement',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_custom_breadcrumbs_views_features_default_settings().
 */
function news_custom_breadcrumbs_views_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: liste_v_nements.
  $custom_breadcrumbs['liste_v_nements'] = array(
    'name' => 'Liste événements',
    'titles' => '[current-page:page-title]',
    'paths' => '<none>',
    'visibility_php' => '',
    'views_path' => 'evenements',
    'language' => '',
    'machine_name' => 'liste_v_nements',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_image_default_styles().
 */
function news_image_default_styles() {
  $styles = array();

  // Exported image style: home_event.
  $styles['home_event'] = array(
    'name' => 'home_event',
    'label' => 'home_event',
    'effects' => array(
      17 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 325,
          'height' => 136,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('Evénement'),
      'base' => 'node_content',
      'description' => t('News pour le domaine d\'o'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  return $items;
}
