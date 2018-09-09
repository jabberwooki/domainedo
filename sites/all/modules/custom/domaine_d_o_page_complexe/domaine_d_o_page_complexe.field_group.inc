<?php
/**
 * @file
 * domaine_d_o_page_complexe.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function domaine_d_o_page_complexe_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_img_txt|paragraphs_item|titre3_txt_summary_option|default';
  $field_group->group_name = 'group_img_txt';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'titre3_txt_summary_option';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'image et texte',
    'weight' => '1',
    'children' => array(
      0 => 'field_image_page_complexe',
      1 => 'field_titre_niveau_3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'image et texte',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-img-txt field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_img_txt|paragraphs_item|titre3_txt_summary_option|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_img_wrapper|node|page_complexe|full';
  $field_group->group_name = 'group_img_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page_complexe';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Entoure image',
    'weight' => '3',
    'children' => array(
      0 => 'field_image_page_complexe',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Entoure image',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-img-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_img_wrapper|node|page_complexe|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Entoure image');
  t('image et texte');

  return $field_groups;
}
