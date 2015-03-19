<?php
/**
 * @file
 * domaine_d_o_entrees.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function domaine_d_o_entrees_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function domaine_d_o_entrees_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function domaine_d_o_entrees_node_info() {
  $items = array(
    'entree' => array(
      'name' => t('Entrée'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  return $items;
}
