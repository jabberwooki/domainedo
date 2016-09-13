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
  $ds_fieldsetting->id = 'node|festival|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'festival';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'anchor_shows' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'link_shows' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
        'exclude node title settings' => '0',
      ),
    ),
  );
  $export['node|festival|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|show|frontpage_block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'show';
  $ds_fieldsetting->view_mode = 'frontpage_block';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '4',
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

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|show_locations|full';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'show_locations';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'ancre_geolocalisation' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['taxonomy_term|show_locations|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function domainedo_shows_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'anchor_shows';
  $ds_field->label = 'anchor_shows';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a id="listshows" name="listshows"></a>',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['anchor_shows'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ancre_geolocalisation';
  $ds_field->label = 'ancre géolocalisation';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a name="geolocalisation" id="geolocalisation"></a>',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['ancre_geolocalisation'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'link_shows';
  $ds_field->label = 'link_shows';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p><a href="#listshows" id="link-listshows">Voir les spectacles et réserver</a></p>
',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['link_shows'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'partage';
  $ds_field->label = 'Partage';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p>Vous y allez ? Vous avez aimé ? Faites le savoir :</p>
',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['partage'] = $ds_field;

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
        1 => 'link_shows',
        2 => 'field_programme_pdf',
        3 => 'field_feuilleter_en_ligne',
        4 => 'field_calendar_archive',
        5 => 'field_view_archives',
        6 => 'body',
        7 => 'field_scald_file',
      ),
      'right' => array(
        8 => 'field_festival_poster',
      ),
      'footer' => array(
        9 => 'field_scald_video',
        10 => 'field_scald_gallery',
        11 => 'field_scald_sound',
        12 => 'anchor_shows',
        13 => 'field_festival_shows',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'link_shows' => 'left',
      'field_programme_pdf' => 'left',
      'field_feuilleter_en_ligne' => 'left',
      'field_calendar_archive' => 'left',
      'field_view_archives' => 'left',
      'body' => 'left',
      'field_scald_file' => 'left',
      'field_festival_poster' => 'right',
      'field_scald_video' => 'footer',
      'field_scald_gallery' => 'footer',
      'field_scald_sound' => 'footer',
      'anchor_shows' => 'footer',
      'field_festival_shows' => 'footer',
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
        2 => 'field_festival',
        3 => 'title',
        4 => 'field_show_dates',
        5 => 'field_thumbnail',
        6 => 'field_reservation',
      ),
    ),
    'fields' => array(
      'group_td' => 'ds_content',
      'group_vsr' => 'ds_content',
      'field_festival' => 'ds_content',
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
        11 => 'field_reservation',
        12 => 'field_production',
        13 => 'field_coproduction',
        14 => 'field_partenariats',
        15 => 'field_scald_gallery',
        16 => 'field_scald_video',
        17 => 'field_scald_sound',
      ),
      'right' => array(
        18 => 'field_show_dates',
        19 => 'group_lieu',
        20 => 'field_entrance',
        21 => 'field_duration',
        22 => 'field_lieu_generique',
        23 => 'field_location',
        24 => 'field_minimum_age',
        25 => 'field_price',
        26 => 'field_restauration',
        27 => 'field_additional_infos',
        28 => 'field_coming_soon',
        29 => 'field_boxoffice_url',
        30 => 'field_full',
        31 => 'field_reimbursement',
        32 => 'group_ul_short_links',
        33 => 'field_offline',
        35 => 'group_shorts_links',
        37 => 'group_show_icons_bottom',
        38 => 'field_video_link',
        39 => 'field_photos_link',
        40 => 'field_sound_link',
        41 => 'field_comments_link',
        42 => 'field_back_to_top_link',
        43 => 'partage',
        44 => 'sharethis',
      ),
      'footer' => array(
        34 => 'comments',
        36 => 'field_linked_shows',
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
      'field_reservation' => 'left',
      'field_production' => 'left',
      'field_coproduction' => 'left',
      'field_partenariats' => 'left',
      'field_scald_gallery' => 'left',
      'field_scald_video' => 'left',
      'field_scald_sound' => 'left',
      'field_show_dates' => 'right',
      'group_lieu' => 'right',
      'field_entrance' => 'right',
      'field_duration' => 'right',
      'field_lieu_generique' => 'right',
      'field_location' => 'right',
      'field_minimum_age' => 'right',
      'field_price' => 'right',
      'field_restauration' => 'right',
      'field_additional_infos' => 'right',
      'field_coming_soon' => 'right',
      'field_boxoffice_url' => 'right',
      'field_full' => 'right',
      'field_reimbursement' => 'right',
      'group_ul_short_links' => 'right',
      'field_offline' => 'right',
      'comments' => 'footer',
      'group_shorts_links' => 'right',
      'field_linked_shows' => 'footer',
      'group_show_icons_bottom' => 'right',
      'field_video_link' => 'right',
      'field_photos_link' => 'right',
      'field_sound_link' => 'right',
      'field_comments_link' => 'right',
      'field_back_to_top_link' => 'right',
      'partage' => 'right',
      'sharethis' => 'right',
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
    'layout_disable_css' => 0,
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
  $ds_layout->id = 'node|show|liste_aussi';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'show';
  $ds_layout->view_mode = 'liste_aussi';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_thumbnail',
        2 => 'field_show_dates',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_thumbnail' => 'ds_content',
      'field_show_dates' => 'ds_content',
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
  $export['node|show|liste_aussi'] = $ds_layout;

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

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|show_locations|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'show_locations';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_seating',
        1 => 'description',
        2 => 'field_scald_image',
        3 => 'field_scald_gallery',
        4 => 'field_scald_video',
        5 => 'field_scald_sound',
      ),
    ),
    'fields' => array(
      'field_seating' => 'ds_content',
      'description' => 'ds_content',
      'field_scald_image' => 'ds_content',
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
  $export['taxonomy_term|show_locations|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|show_locations|full';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'show_locations';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_ls_practical',
        1 => 'description',
        2 => 'field_seating',
        3 => 'field_scald_image',
        4 => 'field_scald_gallery',
        5 => 'field_scald_video',
        6 => 'field_scald_sound',
        7 => 'ancre_geolocalisation',
        8 => 'field_geolocalisation',
      ),
    ),
    'fields' => array(
      'field_ls_practical' => 'ds_content',
      'description' => 'ds_content',
      'field_seating' => 'ds_content',
      'field_scald_image' => 'ds_content',
      'field_scald_gallery' => 'ds_content',
      'field_scald_video' => 'ds_content',
      'field_scald_sound' => 'ds_content',
      'ancre_geolocalisation' => 'ds_content',
      'field_geolocalisation' => 'ds_content',
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
  $export['taxonomy_term|show_locations|full'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function domainedo_shows_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'liste_aussi';
  $ds_view_mode->label = 'liste aussi';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['liste_aussi'] = $ds_view_mode;

  return $export;
}
