<?php
/**
 * @file
 * domaine_d_o_page_complexe.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function domaine_d_o_page_complexe_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['ds_extras-top_classic_page'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'top_classic_page',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['ds_extras-top_complex_page'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'top_complex_page',
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
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
