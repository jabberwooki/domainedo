<?php

/**
 * @file
 * domaine_d_o_page_complexe.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function domaine_d_o_page_complexe_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page_complexe|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page_complexe';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|page_complexe|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|page|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|titre3_txt_summary_option|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'titre3_txt_summary_option';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_summary_page_complexe' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field-name-field-summary-page-complexe',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_titre_niveau_3' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'title-open-close',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|titre3_txt_summary_option|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|titre4_txt_summary_option|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'titre4_txt_summary_option';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_image_page_complexe_4' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'left gauche',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_titre_niveau_4' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h4',
          'fi-cl' => 'title-open-close',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|titre4_txt_summary_option|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function domaine_d_o_page_complexe_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page_complexe|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page_complexe';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        2 => 'comments',
        3 => 'field_paragraphe_complexe',
      ),
      'top_complex_page' => array(
        1 => 'field_image_page_complexe',
        4 => 'group_img_wrapper',
      ),
      'left_block_page' => array(
        5 => 'field_red_frame_left',
        6 => 'field_white_frame_left',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_image_page_complexe' => 'top_complex_page',
      'comments' => 'ds_content',
      'field_paragraphe_complexe' => 'ds_content',
      'group_img_wrapper' => 'top_complex_page',
      'field_red_frame_left' => 'left_block_page',
      'field_white_frame_left' => 'left_block_page',
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
  $export['node|page_complexe|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_scald_gallery',
        2 => 'field_image_page_complexe',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_scald_gallery' => 'ds_content',
      'field_image_page_complexe' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'comments',
        2 => 'field_scald_gallery',
      ),
      'top_classic_page' => array(
        3 => 'field_image_page_complexe',
        4 => 'group_img_wrapper',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'comments' => 'ds_content',
      'field_scald_gallery' => 'ds_content',
      'field_image_page_complexe' => 'top_classic_page',
      'group_img_wrapper' => 'top_classic_page',
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
  $export['node|page|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|titre3_txt_summary_option|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'titre3_txt_summary_option';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_img_txt',
        1 => 'field_image_page_complexe',
        2 => 'field_summary_page_complexe',
        3 => 'field_titre_niveau_3',
        4 => 'field_link_more_info',
      ),
    ),
    'fields' => array(
      'group_img_txt' => 'ds_content',
      'field_image_page_complexe' => 'ds_content',
      'field_summary_page_complexe' => 'ds_content',
      'field_titre_niveau_3' => 'ds_content',
      'field_link_more_info' => 'ds_content',
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
  $export['paragraphs_item|titre3_txt_summary_option|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|titre4_txt_summary_option|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'titre4_txt_summary_option';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_titre_niveau_4',
        1 => 'field_image_page_complexe_4',
        2 => 'field_summary_page_complexe',
        3 => 'field_texte_page_complexe',
      ),
    ),
    'fields' => array(
      'field_titre_niveau_4' => 'ds_content',
      'field_image_page_complexe_4' => 'ds_content',
      'field_summary_page_complexe' => 'ds_content',
      'field_texte_page_complexe' => 'ds_content',
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
  $export['paragraphs_item|titre4_txt_summary_option|default'] = $ds_layout;

  return $export;
}
