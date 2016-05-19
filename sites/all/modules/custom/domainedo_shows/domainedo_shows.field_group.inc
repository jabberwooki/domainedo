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
  $field_group->identifier = 'group_casting|node|show|form';
  $field_group->group_name = 'group_casting';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'show';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Distribution',
    'weight' => '38',
    'children' => array(
      0 => 'field_back_to_top_link',
      1 => 'field_casting_link',
      2 => 'field_comments_link',
      3 => 'field_photos_link',
      4 => 'field_sound_link',
      5 => 'field_video_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Distribution',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-casting field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_casting|node|show|form'] = $field_group;

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
    'weight' => '17',
    'children' => array(
      0 => 'field_location',
      1 => 'field_lieu_generique',
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
  $field_group->identifier = 'group_psr|node|show|full';
  $field_group->group_name = 'group_psr';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'show';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Photo et statut réservation',
    'weight' => '7',
    'children' => array(
      0 => 'field_reservation',
      1 => 'field_scald_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Photo et statut réservation',
      'instance_settings' => array(
        'classes' => 'group-psr field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_show_full_group_psr',
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
    'weight' => '29',
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
  $field_group->identifier = 'group_summary_dates|node|show|zoom';
  $field_group->group_name = 'group_summary_dates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'show';
  $field_group->mode = 'zoom';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Résumé et dates',
    'weight' => '45',
    'children' => array(
      0 => 'body',
      1 => 'field_show_dates',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Résumé et dates',
      'instance_settings' => array(
        'classes' => 'group-summary-dates field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_show_zoom_group_summary_dates',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_summary_dates|node|show|zoom'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_td|node|show|frontpage_block';
  $field_group->group_name = 'group_td';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'show';
  $field_group->mode = 'frontpage_block';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Titre et dates',
    'weight' => '0',
    'children' => array(
      0 => 'field_festival',
      1 => 'field_show_dates',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Titre et dates',
      'instance_settings' => array(
        'classes' => 'group-td field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_show_frontpage_block_group_td',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_td|node|show|frontpage_block'] = $field_group;

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
    'weight' => '18',
    'children' => array(
      0 => 'field_calendar_archive',
      1 => 'field_no_result',
      2 => 'field_feuilleter_en_ligne',
      3 => 'field_programme_pdf',
      4 => 'field_view_archives',
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
      0 => 'sharethis',
      1 => 'partage',
      2 => 'group_show_icons_bottom',
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
  $field_group->identifier = 'group_vsrm|node|show|frontpage_block_mobile';
  $field_group->group_name = 'group_vsrm';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'show';
  $field_group->mode = 'frontpage_block_mobile';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vignette et statu réservation',
    'weight' => '28',
    'children' => array(
      0 => 'field_thumbnail',
      1 => 'field_reservation',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Vignette et statu réservation',
      'instance_settings' => array(
        'classes' => 'group-vsrm field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'id' => 'node_show_frontpage_block_mobile_group_vsrm',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_vsrm|node|show|frontpage_block_mobile'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vsr|node|show|frontpage_block';
  $field_group->group_name = 'group_vsr';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'show';
  $field_group->mode = 'frontpage_block';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vignette et statut réservation',
    'weight' => '1',
    'children' => array(
      0 => 'field_reservation',
      1 => 'field_thumbnail',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Vignette et statut réservation',
      'instance_settings' => array(
        'classes' => 'group-vsr field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'id' => 'node_show_frontpage_block_group_vsr',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_vsr|node|show|frontpage_block'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Distribution');
  t('Group UL short links');
  t('Groupe short links');
  t('Liens et résultats');
  t('Photo et statut réservation');
  t('Résumé et dates');
  t('Titre et dates');
  t('Vignette et statu réservation');
  t('Vignette et statut réservation');
  t('group show icons bottom');

  return $field_groups;
}
