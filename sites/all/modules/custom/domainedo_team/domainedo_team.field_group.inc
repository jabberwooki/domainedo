<?php
/**
 * @file
 * domainedo_team.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function domainedo_team_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_legend|node|personne|teaser';
  $field_group->group_name = 'group_person_legend';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'personne';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_pola_01';
  $field_group->data = array(
    'label' => 'Légende',
    'weight' => '22',
    'children' => array(
      0 => 'field_person_txt_1',
      1 => 'field_person_txt_2',
      2 => 'field_person_txt_3',
      3 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Légende',
      'instance_settings' => array(
        'classes' => 'group-person-legend field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'id' => 'node_personne_teaser_group_person_legend',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_person_legend|node|personne|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pola_01|node|personne|teaser';
  $field_group->group_name = 'group_pola_01';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'personne';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'polaroid 1',
    'weight' => '0',
    'children' => array(
      0 => 'group_person_legend',
      1 => 'group_pola_imgs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'polaroid 1',
      'instance_settings' => array(
        'classes' => 'group-pola-01 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'id' => 'node_personne_teaser_group_pola_01',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pola_01|node|personne|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pola_imgs|node|personne|teaser';
  $field_group->group_name = 'group_pola_imgs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'personne';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_pola_01';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '19',
    'children' => array(
      0 => 'field_person_img_1',
      1 => 'field_person_img_2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Images',
      'instance_settings' => array(
        'classes' => 'group-pola-imgs field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'id' => 'node_personne_teaser_group_pola_imgs',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pola_imgs|node|personne|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Images');
  t('Légende');
  t('polaroid 1');

  return $field_groups;
}
