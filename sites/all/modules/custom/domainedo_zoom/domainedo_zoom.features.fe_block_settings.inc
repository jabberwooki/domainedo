<?php
/**
 * @file
 * domainedo_zoom.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function domainedo_zoom_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-zoom-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'zoom-block',
    'module' => 'views',
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
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
