<?php
/**
 * @file
 * domainedo_multimedia.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function domainedo_multimedia_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|audio|list';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'audio';
  $ds_layout->view_mode = 'list';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'atom',
      ),
    ),
    'fields' => array(
      'atom' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|audio|list'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|gallery|list';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'gallery';
  $ds_layout->view_mode = 'list';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'atom',
      ),
    ),
    'fields' => array(
      'atom' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|gallery|list'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|video|list';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'video';
  $ds_layout->view_mode = 'list';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'atom',
      ),
    ),
    'fields' => array(
      'atom' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|video|list'] = $ds_layout;

  return $export;
}
