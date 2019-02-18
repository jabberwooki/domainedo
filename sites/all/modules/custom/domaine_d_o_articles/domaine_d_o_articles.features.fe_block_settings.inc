<?php

/**
 * @file
 * domaine_d_o_articles.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function domaine_d_o_articles_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['ds_extras-top_article'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'top_article',
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

  return $export;
}
