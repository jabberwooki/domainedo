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
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'link_shows' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
        'exclude node title settings' => '0',
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_festival_shows' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Les spectacles du festival',
          'lb-el' => 'h3',
          'lb-cl' => 'show-festival-title',
          'lb-col' => TRUE,
          'lbw' => 1,
          'lbw-el' => 'div',
          'lbw-cl' => 'col-md-12',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'row',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'col-md-4 col-lg-3',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_scald_video' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
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
  $ds_fieldsetting->id = 'node|show|liste_aussi';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'show';
  $ds_fieldsetting->view_mode = 'liste_aussi';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h4',
        'class' => '',
        'exclude node title settings' => '1',
      ),
    ),
  );
  $export['node|show|liste_aussi'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|show|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'show';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '53',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'exclude node title settings' => '1',
        'ft' => array(),
      ),
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Détails',
        'link class' => '',
        'wrapper' => '',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_show_dates' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|show|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|show_locations|full';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'show_locations';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'ancre_geolocalisation' => array(
      'weight' => '6',
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
      'footer' => array(
        0 => 'anchor_shows',
        1 => 'field_scald_sound',
        3 => 'field_festival_shows',
      ),
      'headband_festival' => array(
        2 => 'title',
        4 => 'link_shows',
        5 => 'field_programme_pdf',
        6 => 'group_affiche_essential',
        7 => 'field_scald_file',
        8 => 'group_text_video',
        9 => 'group_text_left',
        10 => 'field_feuilleter_en_ligne',
        11 => 'field_calendar_archive',
        12 => 'group_multimedia_right',
        13 => 'field_festival_poster',
        14 => 'group_affiche_festival',
        15 => 'field_view_archives',
        16 => 'field_date_en_clair',
        17 => 'body',
        18 => 'group_essential_festival',
        19 => 'field_facebook',
        20 => 'field_scald_video',
        21 => 'field_scald_image',
        22 => 'field_scald_gallery',
      ),
    ),
    'fields' => array(
      'anchor_shows' => 'footer',
      'field_scald_sound' => 'footer',
      'title' => 'headband_festival',
      'field_festival_shows' => 'footer',
      'link_shows' => 'headband_festival',
      'field_programme_pdf' => 'headband_festival',
      'group_affiche_essential' => 'headband_festival',
      'field_scald_file' => 'headband_festival',
      'group_text_video' => 'headband_festival',
      'group_text_left' => 'headband_festival',
      'field_feuilleter_en_ligne' => 'headband_festival',
      'field_calendar_archive' => 'headband_festival',
      'group_multimedia_right' => 'headband_festival',
      'field_festival_poster' => 'headband_festival',
      'group_affiche_festival' => 'headband_festival',
      'field_view_archives' => 'headband_festival',
      'field_date_en_clair' => 'headband_festival',
      'body' => 'headband_festival',
      'group_essential_festival' => 'headband_festival',
      'field_facebook' => 'headband_festival',
      'field_scald_video' => 'headband_festival',
      'field_scald_image' => 'headband_festival',
      'field_scald_gallery' => 'headband_festival',
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
    'layout_disable_css' => 0,
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
  $ds_layout->layout = 'bootstrap_6_6_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_formulaire',
      ),
      'left' => array(
        1 => 'group_wrapper_distribution',
        2 => 'field_casting_link',
        4 => 'field_proposed_by',
        5 => 'field_from',
        6 => 'field_by',
        9 => 'body',
        10 => 'field_scald_video',
        11 => 'field_casting',
        12 => 'field_production',
        13 => 'field_coproduction',
        14 => 'field_partenariats',
        15 => 'field_scald_gallery',
        16 => 'field_scald_sound',
      ),
      'image_full_show' => array(
        3 => 'field_festival',
        7 => 'title',
        8 => 'field_subtitle',
        27 => 'field_scald_image',
        30 => 'group_text_over_img',
        37 => 'group_text_over_img_abs',
      ),
      'right' => array(
        17 => 'group_wrap_book',
        18 => 'field_full',
        19 => 'field_reimbursement',
        20 => 'field_offline',
        21 => 'field_boxoffice_url',
        22 => 'field_coming_soon',
        23 => 'field_reservation',
        24 => 'field_show_dates',
        25 => 'group_lieu',
        26 => 'field_additional_infos',
        28 => 'field_price',
        29 => 'field_lieu_generique',
        31 => 'field_location',
        32 => 'field_entrance',
        33 => 'field_duration',
        34 => 'field_minimum_age',
        35 => 'field_restauration',
      ),
      'bottom' => array(
        36 => 'field_linked_shows',
      ),
    ),
    'fields' => array(
      'field_formulaire' => 'top',
      'group_wrapper_distribution' => 'left',
      'field_casting_link' => 'left',
      'field_festival' => 'image_full_show',
      'field_proposed_by' => 'left',
      'field_from' => 'left',
      'field_by' => 'left',
      'title' => 'image_full_show',
      'field_subtitle' => 'image_full_show',
      'body' => 'left',
      'field_scald_video' => 'left',
      'field_casting' => 'left',
      'field_production' => 'left',
      'field_coproduction' => 'left',
      'field_partenariats' => 'left',
      'field_scald_gallery' => 'left',
      'field_scald_sound' => 'left',
      'group_wrap_book' => 'right',
      'field_full' => 'right',
      'field_reimbursement' => 'right',
      'field_offline' => 'right',
      'field_boxoffice_url' => 'right',
      'field_coming_soon' => 'right',
      'field_reservation' => 'right',
      'field_show_dates' => 'right',
      'group_lieu' => 'right',
      'field_additional_infos' => 'right',
      'field_scald_image' => 'image_full_show',
      'field_price' => 'right',
      'field_lieu_generique' => 'right',
      'group_text_over_img' => 'image_full_show',
      'field_location' => 'right',
      'field_entrance' => 'right',
      'field_duration' => 'right',
      'field_minimum_age' => 'right',
      'field_restauration' => 'right',
      'field_linked_shows' => 'bottom',
      'group_text_over_img_abs' => 'image_full_show',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
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
  $ds_layout->id = 'node|show|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'show';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_show_list',
        1 => 'field_scald_image',
        2 => 'field_festival',
        3 => 'group_tranparent_gradient',
        4 => 'node_link',
        5 => 'field_boxoffice_url',
        6 => 'group_black_bg',
        7 => 'group_date_title_desc',
        8 => 'field_show_dates',
        9 => 'title',
        10 => 'body',
      ),
    ),
    'fields' => array(
      'group_show_list' => 'ds_content',
      'field_scald_image' => 'ds_content',
      'field_festival' => 'ds_content',
      'group_tranparent_gradient' => 'ds_content',
      'node_link' => 'ds_content',
      'field_boxoffice_url' => 'ds_content',
      'group_black_bg' => 'ds_content',
      'group_date_title_desc' => 'ds_content',
      'field_show_dates' => 'ds_content',
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
    'layout_disable_css' => FALSE,
  );
  $export['node|show|teaser'] = $ds_layout;

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
        3 => 'field_scald_gallery',
        4 => 'field_scald_video',
        5 => 'field_scald_sound',
        6 => 'ancre_geolocalisation',
        7 => 'field_geolocalisation',
      ),
      'top_place_taxonomy' => array(
        8 => 'group_img_wrapper',
        9 => 'field_scald_image',
      ),
    ),
    'fields' => array(
      'field_ls_practical' => 'ds_content',
      'description' => 'ds_content',
      'field_seating' => 'ds_content',
      'field_scald_gallery' => 'ds_content',
      'field_scald_video' => 'ds_content',
      'field_scald_sound' => 'ds_content',
      'ancre_geolocalisation' => 'ds_content',
      'field_geolocalisation' => 'ds_content',
      'group_img_wrapper' => 'top_place_taxonomy',
      'field_scald_image' => 'top_place_taxonomy',
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
    'layout_disable_css' => FALSE,
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
