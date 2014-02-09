<?php
/**
 * @file
 * domainedo_shows.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function domainedo_shows_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function domainedo_shows_node_info() {
  $items = array(
    'festival' => array(
      'name' => t('Festival'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nom'),
      'help' => '',
    ),
    'programmer' => array(
      'name' => t('Programmateur'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nom'),
      'help' => '',
    ),
    'show' => array(
      'name' => t('Spectacle'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
    'structure' => array(
      'name' => t('Structure'),
      'base' => 'node_content',
      'description' => t('Une structure est une association de professionnels du spectacle. Cela peut être une compagnie, un groupe, un ensemble, un artiste seul.'),
      'has_title' => '1',
      'title_label' => t('Nom'),
      'help' => '',
    ),
  );
  return $items;
}
