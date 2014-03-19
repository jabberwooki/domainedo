<?php
/**
 * @file
 * domainedo_config.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function domainedo_config_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'frontpage_block';
  $ds_view_mode->label = 'Bloc accueil';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['frontpage_block'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'frontpage_block_mobile';
  $ds_view_mode->label = 'Bloc accueil mobile';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['frontpage_block_mobile'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'list';
  $ds_view_mode->label = 'Liste';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['list'] = $ds_view_mode;

  return $export;
}
