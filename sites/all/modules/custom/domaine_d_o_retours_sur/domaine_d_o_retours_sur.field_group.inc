<?php
/**
 * @file
 * domaine_d_o_retours_sur.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function domaine_d_o_retours_sur_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_retour|node|retour_sur|full';
  $field_group->group_name = 'group_contact_retour';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'retour_sur';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '1',
    'children' => array(
      0 => 'field_edu_contact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'id' => 'group-contact-retour',
        'classes' => 'group-contact-retour field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_contact_retour|node|retour_sur|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_retour_comments|field_collection_item|field_retour_comments|default';
  $field_group->group_name = 'group_retour_comments';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_retour_comments';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group retour commentaires',
    'weight' => '0',
    'children' => array(
      0 => 'field_prenom_comments',
      1 => 'field_summary_comment',
      2 => 'field_text_comment',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group retour commentaires',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-retour-comments field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_retour_comments|field_collection_item|field_retour_comments|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_retour_critiques|field_collection_item|field_critiques|default';
  $field_group->group_name = 'group_retour_critiques';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_critiques';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group retour critiques',
    'weight' => '0',
    'children' => array(
      0 => 'field_prenom_critique',
      1 => 'field_summary_critique',
      2 => 'field_text_critique',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group retour critiques',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-retour-critiques field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_retour_critiques|field_collection_item|field_critiques|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');
  t('group retour commentaires');
  t('group retour critiques');

  return $field_groups;
}
