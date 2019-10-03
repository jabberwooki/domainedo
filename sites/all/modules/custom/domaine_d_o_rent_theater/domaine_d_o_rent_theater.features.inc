<?php

/**
 * @file
 * domaine_d_o_rent_theater.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function domaine_d_o_rent_theater_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function domaine_d_o_rent_theater_node_info() {
  $items = array(
    'lieu_location' => array(
      'name' => t('Lieu à la location'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
    'presentation_location_salles' => array(
      'name' => t('Présentation location'),
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
