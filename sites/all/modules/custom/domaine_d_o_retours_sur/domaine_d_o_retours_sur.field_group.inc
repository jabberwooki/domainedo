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
  t('group retour critiques');

  return $field_groups;
}
