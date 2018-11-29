<?php
/**
 * @file
 * domainedo_shows.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function domainedo_shows_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_affiche_essential|node|festival|full';
  $field_group->group_name = 'group_affiche_essential';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'festival';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'affiche et essentiel',
    'weight' => '4',
    'children' => array(
      0 => 'group_essential_festival',
      1 => 'group_affiche_festival',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'affiche et essentiel',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-affiche-essential field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_affiche_essential|node|festival|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_affiche_festival|node|festival|full';
  $field_group->group_name = 'group_affiche_festival';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'festival';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_affiche_essential';
  $field_group->data = array(
    'label' => 'Affiche festival',
    'weight' => '9',
    'children' => array(
      0 => 'field_festival_poster',
      1 => 'field_date_en_clair',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Affiche festival',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-affiche-festival field-group-div col-md-8',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_affiche_festival|node|festival|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_black_bg|node|show|teaser';
  $field_group->group_name = 'group_black_bg';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'show';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_show_list';
  $field_group->data = array(
    'label' => 'fond noir',
    'weight' => '6',
    'children' => array(
      0 => 'field_boxoffice_url',
      1 => 'node_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'fond noir',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-black-bg field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_black_bg|node|show|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_title_desc|node|show|teaser';
  $field_group->group_name = 'group_date_title_desc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'show';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_tranparent_gradient';
  $field_group->data = array(
    'label' => 'Date titre description',
    'weight' => '51',
    'children' => array(
      0 => 'body',
      1 => 'field_show_dates',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Date titre description',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-date-title-desc field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_date_title_desc|node|show|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_essential_festival|node|festival|full';
  $field_group->group_name = 'group_essential_festival';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'festival';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_affiche_essential';
  $field_group->data = array(
    'label' => 'Essentiel Festival',
    'weight' => '10',
    'children' => array(
      0 => 'field_calendar_archive',
      1 => 'field_scald_file',
      2 => 'field_feuilleter_en_ligne',
      3 => 'field_programme_pdf',
      4 => 'field_view_archives',
      5 => 'field_facebook',
      6 => 'link_shows',
      7 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Essentiel Festival',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-essential-festival field-group-div col-md-4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_essential_festival|node|festival|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_img_wrapper|taxonomy_term|show_locations|full';
  $field_group->group_name = 'group_img_wrapper';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'show_locations';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Entoure image',
    'weight' => '8',
    'children' => array(
      0 => 'field_scald_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Entoure image',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-img-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lieu|node|show|full';
  $field_group->group_name = 'group_lieu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'show';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '19',
    'children' => array(
      0 => 'field_duration',
      1 => 'field_entrance',
      2 => 'field_location',
      3 => 'field_minimum_age',
      4 => 'field_price',
      5 => 'field_restauration',
      6 => 'field_lieu_generique',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'group-lieu field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'id' => 'node_show_full_group_lieu',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_lieu|node|show|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_multimedia_right|node|festival|full';
  $field_group->group_name = 'group_multimedia_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'festival';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_text_video';
  $field_group->data = array(
    'label' => 'Group right',
    'weight' => '7',
    'children' => array(
      0 => 'field_scald_gallery',
      1 => 'field_scald_image',
      2 => 'field_scald_video',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group right',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-multimedia-right col-md-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_multimedia_right|node|festival|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_psr|node|show|full';
  $field_group->group_name = 'group_psr';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'show';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Photo et statut réservation',
    'weight' => '36',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Photo et statut réservation',
      'instance_settings' => array(
        'id' => 'node_show_full_group_psr',
        'classes' => 'group-psr field-group-div container',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_psr|node|show|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shorts_links|node|show|full';
  $field_group->group_name = 'group_shorts_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'show';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Groupe short links',
    'weight' => '34',
    'children' => array(
      0 => 'group_ul_short_links',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Groupe short links',
      'instance_settings' => array(
        'classes' => 'group-shorts-links-show',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_show_full_group_shorts_links',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_shorts_links|node|show|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_icons_bottom|node|show|full';
  $field_group->group_name = 'group_show_icons_bottom';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'show';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_ul_short_links';
  $field_group->data = array(
    'label' => 'group show icons bottom',
    'weight' => '48',
    'children' => array(
      0 => 'field_back_to_top_link',
      1 => 'field_comments_link',
      2 => 'field_photos_link',
      3 => 'field_sound_link',
      4 => 'field_video_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group show icons bottom',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-show-icons-bottom field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_show_icons_bottom|node|show|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_list|node|show|teaser';
  $field_group->group_name = 'group_show_list';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'show';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group show',
    'weight' => '0',
    'children' => array(
      0 => 'field_festival',
      1 => 'field_scald_image',
      2 => 'group_tranparent_gradient',
      3 => 'group_black_bg',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group show',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-show-list field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_show_list|node|show|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_technical_fiels|node|festival|form';
  $field_group->group_name = 'group_technical_fiels';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'festival';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Liens et résultats',
    'weight' => '17',
    'children' => array(
      0 => 'field_calendar_archive',
      1 => 'field_no_result',
      2 => 'field_feuilleter_en_ligne',
      3 => 'field_programme_pdf',
      4 => 'field_view_archives',
      5 => 'field_facebook',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Liens et résultats',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-technical-fiels field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_technical_fiels|node|festival|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_left|node|festival|full';
  $field_group->group_name = 'group_text_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'festival';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_text_video';
  $field_group->data = array(
    'label' => 'Group left',
    'weight' => '6',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group left',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-text-left col-md-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_text_left|node|festival|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_over_img_abs|node|show|full';
  $field_group->group_name = 'group_text_over_img_abs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'show';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_text_over_img';
  $field_group->data = array(
    'label' => 'Texte sur image absolute',
    'weight' => '52',
    'children' => array(
      0 => 'field_festival',
      1 => 'field_subtitle',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Texte sur image absolute',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-text-over-img-abs field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_text_over_img_abs|node|show|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_over_img|node|show|full';
  $field_group->group_name = 'group_text_over_img';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'show';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Textes sur image fixe',
    'weight' => '22',
    'children' => array(
      0 => 'group_text_over_img_abs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Textes sur image fixe',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-text-over-img field-group-div container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_text_over_img|node|show|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_video|node|festival|full';
  $field_group->group_name = 'group_text_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'festival';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Texte et Vidéo',
    'weight' => '5',
    'children' => array(
      0 => 'group_text_left',
      1 => 'group_multimedia_right',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Texte et Vidéo',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-text-video field-group-div row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_text_video|node|festival|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tranparent_gradient|node|show|teaser';
  $field_group->group_name = 'group_tranparent_gradient';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'show';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_show_list';
  $field_group->data = array(
    'label' => 'Degradé transparent',
    'weight' => '3',
    'children' => array(
      0 => 'group_date_title_desc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Degradé transparent',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-tranparent-gradient field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_tranparent_gradient|node|show|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ul_short_links|node|show|full';
  $field_group->group_name = 'group_ul_short_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'show';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_shorts_links';
  $field_group->data = array(
    'label' => 'Group UL short links',
    'weight' => '27',
    'children' => array(
      0 => 'partage',
      1 => 'group_show_icons_bottom',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Group UL short links',
      'instance_settings' => array(
        'classes' => 'group-ul-short-links field-group-html-element',
        'element' => 'ul',
        'attributes' => '',
        'id' => 'node_show_full_group_ul_short_links',
      ),
    ),
  );
  $field_groups['group_ul_short_links|node|show|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrap_book|node|show|full';
  $field_group->group_name = 'group_wrap_book';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'show';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contour réserver',
    'weight' => '13',
    'children' => array(
      0 => 'field_boxoffice_url',
      1 => 'field_reservation',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contour réserver',
      'instance_settings' => array(
        'id' => 'group-wrap-book',
        'classes' => 'group-wrap-book field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrap_book|node|show|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_distribution|node|show|full';
  $field_group->group_name = 'group_wrapper_distribution';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'show';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contour distribution',
    'weight' => '0',
    'children' => array(
      0 => 'field_casting_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contour distribution',
      'instance_settings' => array(
        'id' => 'group-wrapper-distribution',
        'classes' => 'group-wrapper-distribution field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_distribution|node|show|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Affiche festival');
  t('Contour distribution');
  t('Contour réserver');
  t('Date titre description');
  t('Degradé transparent');
  t('Entoure image');
  t('Essentiel Festival');
  t('Group UL short links');
  t('Group left');
  t('Group right');
  t('Groupe short links');
  t('Liens et résultats');
  t('Photo et statut réservation');
  t('Texte et Vidéo');
  t('Texte sur image absolute');
  t('Textes sur image fixe');
  t('affiche et essentiel');
  t('fond noir');
  t('group show');
  t('group show icons bottom');

  return $field_groups;
}
