<?php

/**
 * @file
 * domaine_d_o_rent_theater.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function domaine_d_o_rent_theater_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_fixed|node|lieu_location|default';
  $field_group->group_name = 'group_contact_fixed';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lieu_location';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group contact fixed',
    'weight' => '2',
    'children' => array(
      0 => 'contact_location',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group contact fixed',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-contact-fixed field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_contact_fixed|node|lieu_location|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_fixed|node|presentation_location_salles|default';
  $field_group->group_name = 'group_contact_fixed';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'presentation_location_salles';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group contact fixed',
    'weight' => '6',
    'children' => array(
      0 => 'contact_location',
      1 => 'menu_location',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group contact fixed',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-contact-fixed field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_contact_fixed|node|presentation_location_salles|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lieux|node|presentation_location_salles|default';
  $field_group->group_name = 'group_lieux';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'presentation_location_salles';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Des lieux adaptés à vos besoins',
    'weight' => '2',
    'children' => array(
      0 => 'field_vente_salle',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Des lieux adaptés à vos besoins',
      'instance_settings' => array(
        'id' => 'lieux-location',
        'classes' => 'group-lieux field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_lieux|node|presentation_location_salles|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_references_location|node|presentation_location_salles|default';
  $field_group->group_name = 'group_references_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'presentation_location_salles';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Références',
    'weight' => '5',
    'children' => array(
      0 => 'field_vente_references',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Références',
      'instance_settings' => array(
        'id' => 'lieux-references',
        'classes' => 'group-references-location field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_references_location|node|presentation_location_salles|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_services_location|node|presentation_location_salles|default';
  $field_group->group_name = 'group_services_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'presentation_location_salles';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Services',
    'weight' => '4',
    'children' => array(
      0 => 'field_vente_services',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Services',
      'instance_settings' => array(
        'id' => 'lieux-services',
        'classes' => 'group-services-location field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_services_location|node|presentation_location_salles|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_img_location|field_collection_item|field_vente_services|default';
  $field_group->group_name = 'group_title_img_location';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_vente_services';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group titre image',
    'weight' => '0',
    'children' => array(
      0 => 'field_vente_services_titre',
      1 => 'field_vente_services_summary',
      2 => 'field_vente_services_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group titre image',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-title-img-location field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_title_img_location|field_collection_item|field_vente_services|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Des lieux adaptés à vos besoins');
  t('Références');
  t('Services');
  t('group contact fixed');
  t('group titre image');

  return $field_groups;
}
