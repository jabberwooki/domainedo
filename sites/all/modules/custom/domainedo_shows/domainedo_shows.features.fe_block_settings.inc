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

  $export['ds_extras-image_full_show'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'image_full_show',
    'module' => 'ds_extras',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'ddobs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ddobs',
        'weight' => 0,
      ),
      'domainedo' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'domainedo',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['ds_extras-top_place_taxonomy'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'top_place_taxonomy',
    'module' => 'ds_extras',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'ddobs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ddobs',
        'weight' => 0,
      ),
      'domainedo' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'domainedo',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
