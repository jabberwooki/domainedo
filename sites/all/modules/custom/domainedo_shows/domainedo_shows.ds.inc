<?php
/**
 * @file
 * domainedo_shows.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function domainedo_shows_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|show|frontpage_block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'show';
  $ds_fieldsetting->view_mode = 'frontpage_block';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|show|frontpage_block'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|show|frontpage_block_mobile';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'show';
  $ds_fieldsetting->view_mode = 'frontpage_block_mobile';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|show|frontpage_block_mobile'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|show|list';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'show';
  $ds_fieldsetting->view_mode = 'list';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|show|list'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function domainedo_shows_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|festival|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'festival';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_scald_image',
        1 => 'field_logo',
        2 => 'field_festival_poster',
        3 => 'body',
        4 => 'field_scald_gallery',
        5 => 'field_scald_video',
        6 => 'field_scald_sound',
      ),
    ),
    'fields' => array(
      'field_scald_image' => 'ds_content',
      'field_logo' => 'ds_content',
      'field_festival_poster' => 'ds_content',
      'body' => 'ds_content',
      'field_scald_gallery' => 'ds_content',
      'field_scald_video' => 'ds_content',
      'field_scald_sound' => 'ds_content',
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
  $export['node|festival|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|programmer|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'programmer';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'comments',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'comments' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|programmer|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|show|frontpage_block';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'show';
  $ds_layout->view_mode = 'frontpage_block';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_show_dates',
        2 => 'field_thumbnail',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_show_dates' => 'ds_content',
      'field_thumbnail' => 'ds_content',
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
  $export['node|show|frontpage_block'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|show|frontpage_block_mobile';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'show';
  $ds_layout->view_mode = 'frontpage_block_mobile';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_show_dates',
        2 => 'field_thumbnail',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_show_dates' => 'ds_content',
      'field_thumbnail' => 'ds_content',
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
  $export['node|show|frontpage_block_mobile'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|show|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'show';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_subtitle',
        2 => 'field_festival',
        3 => 'field_show_type',
        4 => 'field_from',
        5 => 'field_by',
        6 => 'field_proposed_by',
        7 => 'field_casting_link',
        8 => 'field_scald_image',
        9 => 'body',
        10 => 'field_casting',
        11 => 'field_production',
        12 => 'field_coproduction',
        13 => 'field_scald_gallery',
        14 => 'field_scald_video',
        15 => 'field_scald_sound',
      ),
      'right' => array(
        16 => 'field_show_dates',
        17 => 'field_location',
        18 => 'field_entrance',
        19 => 'field_duration',
        20 => 'field_minimum_age',
        21 => 'field_price',
        22 => 'field_coming_soon',
        23 => 'field_boxoffice_url',
        24 => 'field_full',
        25 => 'field_reimbursement',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_subtitle' => 'left',
      'field_festival' => 'left',
      'field_show_type' => 'left',
      'field_from' => 'left',
      'field_by' => 'left',
      'field_proposed_by' => 'left',
      'field_casting_link' => 'left',
      'field_scald_image' => 'left',
      'body' => 'left',
      'field_casting' => 'left',
      'field_production' => 'left',
      'field_coproduction' => 'left',
      'field_scald_gallery' => 'left',
      'field_scald_video' => 'left',
      'field_scald_sound' => 'left',
      'field_show_dates' => 'right',
      'field_location' => 'right',
      'field_entrance' => 'right',
      'field_duration' => 'right',
      'field_minimum_age' => 'right',
      'field_price' => 'right',
      'field_coming_soon' => 'right',
      'field_boxoffice_url' => 'right',
      'field_full' => 'right',
      'field_reimbursement' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|show|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|show|list';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'show';
  $ds_layout->view_mode = 'list';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title',
        1 => 'field_subtitle',
      ),
      'left' => array(
        2 => 'field_thumbnail',
      ),
      'right' => array(
        3 => 'field_show_dates',
        4 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'field_subtitle' => 'header',
      'field_thumbnail' => 'left',
      'field_show_dates' => 'right',
      'body' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|show|list'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|structure|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'structure';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_logo',
        1 => 'field_scald_image',
        2 => 'body',
        3 => 'field_site_web',
        4 => 'field_scald_gallery',
        5 => 'field_scald_video',
        6 => 'field_scald_sound',
      ),
    ),
    'fields' => array(
      'field_logo' => 'ds_content',
      'field_scald_image' => 'ds_content',
      'body' => 'ds_content',
      'field_site_web' => 'ds_content',
      'field_scald_gallery' => 'ds_content',
      'field_scald_video' => 'ds_content',
      'field_scald_sound' => 'ds_content',
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
  $export['node|structure|full'] = $ds_layout;

  return $export;
}
