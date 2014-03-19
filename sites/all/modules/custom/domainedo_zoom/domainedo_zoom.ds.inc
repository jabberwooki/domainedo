<?php
/**
 * @file
 * domainedo_zoom.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function domainedo_zoom_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news|zoom';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news';
  $ds_fieldsetting->view_mode = 'zoom';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'exclude node title settings' => '0',
      ),
    ),
  );
  $export['node|news|zoom'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|show|zoom';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'show';
  $ds_fieldsetting->view_mode = 'zoom';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'exclude node title settings' => '0',
      ),
    ),
  );
  $export['node|show|zoom'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function domainedo_zoom_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|zoom';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'zoom';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_date',
        2 => 'field_scald_image',
        3 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_date' => 'ds_content',
      'field_scald_image' => 'ds_content',
      'body' => 'ds_content',
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
  $export['node|news|zoom'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|show|zoom';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'show';
  $ds_layout->view_mode = 'zoom';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_show_dates',
        2 => 'field_scald_image',
        3 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_show_dates' => 'ds_content',
      'field_scald_image' => 'ds_content',
      'body' => 'ds_content',
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
  $export['node|show|zoom'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function domainedo_zoom_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'zoom';
  $ds_view_mode->label = 'Zoom';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['zoom'] = $ds_view_mode;

  return $export;
}
