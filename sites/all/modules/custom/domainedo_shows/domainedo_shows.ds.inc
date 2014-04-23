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
      'weight' => '1',
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
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'exclude node title settings' => '0',
      ),
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
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'exclude node title settings' => '0',
      ),
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
  $ds_layout->layout = 'ds_3col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'left' => array(
        1 => 'body',
      ),
      'right' => array(
        2 => 'field_festival_poster',
      ),
      'footer' => array(
        3 => 'field_scald_video',
        4 => 'field_scald_gallery',
        5 => 'field_scald_sound',
        6 => 'field_festival_shows',
      ),
      'middle' => array(
        7 => 'field_scald_file',
        8 => 'field_calendar_archive',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'body' => 'left',
      'field_festival_poster' => 'right',
      'field_scald_video' => 'footer',
      'field_scald_gallery' => 'footer',
      'field_scald_sound' => 'footer',
      'field_festival_shows' => 'footer',
      'field_scald_file' => 'middle',
      'field_calendar_archive' => 'middle',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
      'footer' => 'div',
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
        0 => 'field_logo',
        1 => 'title',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'field_logo' => 'ds_content',
      'title' => 'ds_content',
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
        0 => 'group_td',
        1 => 'group_vsr',
        2 => 'title',
        3 => 'field_show_dates',
        4 => 'field_thumbnail',
        5 => 'field_reservation',
      ),
    ),
    'fields' => array(
      'group_td' => 'ds_content',
      'group_vsr' => 'ds_content',
      'title' => 'ds_content',
      'field_show_dates' => 'ds_content',
      'field_thumbnail' => 'ds_content',
      'field_reservation' => 'ds_content',
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
        3 => 'field_reservation',
        4 => 'group_vsrm',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_show_dates' => 'ds_content',
      'field_thumbnail' => 'ds_content',
      'field_reservation' => 'ds_content',
      'group_vsrm' => 'ds_content',
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
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_subtitle',
        2 => 'field_festival',
        3 => 'field_proposed_by',
        4 => 'field_from',
        5 => 'field_by',
        6 => 'field_casting_link',
        7 => 'group_psr',
        8 => 'body',
        9 => 'field_scald_image',
        10 => 'field_casting',
        11 => 'field_production',
        12 => 'field_reservation',
        13 => 'field_coproduction',
        14 => 'field_scald_gallery',
        15 => 'field_scald_video',
        16 => 'field_scald_sound',
      ),
      'right' => array(
        17 => 'field_show_dates',
        18 => 'field_location',
        19 => 'field_entrance',
        20 => 'field_duration',
        21 => 'field_minimum_age',
        22 => 'field_price',
        23 => 'field_additional_infos',
        24 => 'field_coming_soon',
        25 => 'field_boxoffice_url',
        26 => 'field_full',
        27 => 'field_reimbursement',
        28 => 'group_shorts_links',
        29 => 'group_ul_short_links',
        31 => 'field_video_link',
        32 => 'field_photos_link',
        33 => 'field_sound_link',
        34 => 'field_comments_link',
        35 => 'field_back_to_top_link',
      ),
      'footer' => array(
        30 => 'comments',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_subtitle' => 'left',
      'field_festival' => 'left',
      'field_proposed_by' => 'left',
      'field_from' => 'left',
      'field_by' => 'left',
      'field_casting_link' => 'left',
      'group_psr' => 'left',
      'body' => 'left',
      'field_scald_image' => 'left',
      'field_casting' => 'left',
      'field_production' => 'left',
      'field_reservation' => 'left',
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
      'field_additional_infos' => 'right',
      'field_coming_soon' => 'right',
      'field_boxoffice_url' => 'right',
      'field_full' => 'right',
      'field_reimbursement' => 'right',
      'group_shorts_links' => 'right',
      'group_ul_short_links' => 'right',
      'comments' => 'footer',
      'field_video_link' => 'right',
      'field_photos_link' => 'right',
      'field_sound_link' => 'right',
      'field_comments_link' => 'right',
      'field_back_to_top_link' => 'right',
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
        5 => 'field_festival',
        6 => 'field_reservation',
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
      'field_festival' => 'left',
      'field_reservation' => 'left',
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
