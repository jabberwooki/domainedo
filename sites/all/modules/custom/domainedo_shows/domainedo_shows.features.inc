<?php
/**
 * @file
 * domainedo_shows.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function domainedo_shows_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "cer" && $api == "default_cer_presets") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function domainedo_shows_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_features_date_format_default().
 */
function domainedo_shows_features_date_format_default() {
  $fdf_config = array();

  $fdf_config[] = array(
    'dfid' => 39,
    'format' => 'l d M - H\\hi',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 40,
    'format' => 'D d M H\\hi',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 41,
    'format' => 'F Y',
    'type' => 'custom',
    'locked' => 0,
  );
  return $fdf_config;
}

/**
 * Implements hook_features_date_type_default().
 */
function domainedo_shows_features_date_type_default() {
  $fdt_config = array();

  $fdt_config[] = array(
    'is_new' => FALSE,
    'module' => '',
    'type' => 'shows_block',
    'title' => 'Bloc spectacles',
    'locked' => 0,
  );
  $fdt_config[] = array(
    'is_new' => FALSE,
    'module' => '',
    'type' => 'shows_block_mobile',
    'title' => 'Bloc spectacles (mobile)',
    'locked' => 0,
  );
  $fdt_config[] = array(
    'is_new' => FALSE,
    'module' => '',
    'type' => 'shows_list',
    'title' => 'Liste spectacles',
    'locked' => 0,
  );
  return $fdt_config;
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
