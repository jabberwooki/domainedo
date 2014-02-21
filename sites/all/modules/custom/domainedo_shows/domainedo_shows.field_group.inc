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

  return $export;
}
