<?php

/**
 * @file
 * domainedo_webpush.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function domainedo_webpush_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_webpush_topics|node|news|form';
  $field_group->group_name = 'group_webpush_topics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Thématiques',
    'weight' => '1',
    'children' => array(
      0 => 'field_send_notification',
      1 => 'field_topic_mode',
      2 => 'field_topics',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-webpush-topics field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Thématiques');

  return $field_groups;
}
