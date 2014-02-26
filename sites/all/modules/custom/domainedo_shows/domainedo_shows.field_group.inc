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
    'weight' => '8',
    'children' => array(
      0 => 'field_scald_image',
      1 => 'field_reservation',
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
    'weight' => '28',
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