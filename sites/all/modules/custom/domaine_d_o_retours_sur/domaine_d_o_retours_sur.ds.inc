<?php
/**
 * @file
 * domaine_d_o_retours_sur.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function domaine_d_o_retours_sur_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_critiques|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_critiques';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_retour_critiques',
        1 => 'field_prenom_critique',
        2 => 'field_summary_critique',
        3 => 'field_text_critique',
      ),
    ),
    'fields' => array(
      'group_retour_critiques' => 'ds_content',
      'field_prenom_critique' => 'ds_content',
      'field_summary_critique' => 'ds_content',
      'field_text_critique' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['field_collection_item|field_critiques|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_retour_comments|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_retour_comments';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_retour_comments',
        1 => 'field_prenom_comments',
        2 => 'field_summary_comment',
        3 => 'field_text_comment',
      ),
    ),
    'fields' => array(
      'group_retour_comments' => 'ds_content',
      'field_prenom_comments' => 'ds_content',
      'field_summary_comment' => 'ds_content',
      'field_text_comment' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['field_collection_item|field_retour_comments|default'] = $ds_layout;

  return $export;
}
