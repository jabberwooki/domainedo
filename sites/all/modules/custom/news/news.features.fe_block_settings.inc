<?php

/**
 * @file
 * news.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function news_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['ds_extras-top_event'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'top_event',
    'module' => 'ds_extras',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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

  $export['views-zoom-block_right_now'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'zoom-block_right_now',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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
