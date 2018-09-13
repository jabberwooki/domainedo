<?php
/**
 * @file
 * domainedo_contexts.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function domainedo_contexts_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['bean-reseaux-sociaux-bas'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'reseaux-sociaux-bas',
    'module' => 'bean',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '<front>
spectacle*',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => -27,
      ),
      'ddobs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ddobs',
        'weight' => -27,
      ),
      'domainedo' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'domainedo',
        'weight' => -27,
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

  $export['menu_block-2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 2,
    'module' => 'menu_block',
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
