<?php
/**
 * @file
 * feature_lettre_info.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_lettre_info_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_lettre_info_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_features_date_format_default().
 */
function feature_lettre_info_features_date_format_default() {
  $fdf_config = array();

  $fdf_config[] = array(
    'dfid' => 43,
    'format' => 'd/m/Y',
    'type' => 'custom',
    'locked' => 0,
  );
  return $fdf_config;
}

/**
 * Implements hook_features_date_type_default().
 */
function feature_lettre_info_features_date_type_default() {
  $fdt_config = array();

  $fdt_config[] = array(
    'is_new' => FALSE,
    'module' => '',
    'type' => 'court_sans_heure',
    'title' => 'Court sans heure',
    'locked' => 0,
  );
  return $fdt_config;
}

/**
 * Implements hook_node_info().
 */
function feature_lettre_info_node_info() {
  $items = array(
    'lettre_info' => array(
      'name' => t('Lettre info'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
