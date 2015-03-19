<?php
/**
 * @file
 * domainedo_shows.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function domainedo_shows_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu_block-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'domainedo' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'domainedo',
        'weight' => 0,
      ),
    ),
    'title' => 'Onglets Spectacles',
    'visibility' => 0,
  );

  return $export;
}
