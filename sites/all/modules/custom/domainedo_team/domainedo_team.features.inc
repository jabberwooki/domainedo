<?php

/**
 * @file
 * domainedo_team.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function domainedo_team_ctools_plugin_api($module = NULL, $api = NULL) {
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
function domainedo_team_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function domainedo_team_image_default_styles() {
  $styles = array();

  // Exported image style: polaroid.
  $styles['polaroid'] = array(
    'label' => 'polaroid',
    'effects' => array(
      17 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 174,
          'height' => 276,
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
function domainedo_team_node_info() {
  $items = array(
    'personne' => array(
      'name' => t('Personne'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
