<?php
/**
 * @file
 * domainedo_shows.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function domainedo_shows_field_group_info() {
  $export = array();

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
    'weight' => '33',
    'children' => array(
      0 => 'field_casting_link',
      1 => 'field_video_link',
      2 => 'field_sound_link',
      3 => 'field_photos_link',
      4 => 'field_comments_link',
      5 => 'field_back_to_top_link',
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
  $export['group_casting|node|show|form'] = $field_group;

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
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_psr|node|show|full'] = $field_group;

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
    'weight' => '26',
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
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_shorts_links|node|show|full'] = $field_group;

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
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_summary_dates|node|show|zoom'] = $field_group;

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
      0 => 'field_show_dates',
      1 => 'title',
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
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_td|node|show|frontpage_block'] = $field_group;

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
    'label' => 'Champs domaine d\'O',
    'weight' => '18',
    'children' => array(
      0 => 'field_calendar_archive',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-technical-fiels field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_technical_fiels|node|festival|form'] = $field_group;

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
      0 => 'field_back_to_top_link',
      1 => 'field_comments_link',
      2 => 'field_photos_link',
      3 => 'field_sound_link',
      4 => 'field_video_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Group UL short links',
      'instance_settings' => array(
        'classes' => 'group-ul-short-links field-group-html-element',
        'element' => 'ul',
        'attributes' => '',
      ),
    ),
  );
  $export['group_ul_short_links|node|show|full'] = $field_group;

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
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_vsrm|node|show|frontpage_block_mobile'] = $field_group;

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
      0 => 'field_thumbnail',
      1 => 'field_reservation',
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
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_vsr|node|show|frontpage_block'] = $field_group;

  return $export;
}
