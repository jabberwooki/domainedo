<?php
/**
 * @file
 * domainedo_mapado.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function domainedo_mapado_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mapado|node|show|form';
  $field_group->group_name = 'group_mapado';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'show';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Mapado',
    'weight' => '42',
    'children' => array(
      0 => 'field_mapado_apislug',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-mapado field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Mapado');

  return $field_groups;
}
