<?php
/**
 * @file
 * domainedo_documents.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function domainedo_documents_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|tech_document|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'tech_document';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|tech_document|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|tech_document|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'tech_document';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'exclude node title settings' => '1',
        'ft' => array(),
      ),
    ),
    'node_link' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Plus d\'infos',
        'link class' => 'button-link-more',
        'wrapper' => '',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['node|tech_document|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|espace_pro|section';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'espace_pro';
  $ds_fieldsetting->view_mode = 'section';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['taxonomy_term|espace_pro|section'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function domainedo_documents_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|tech_document|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'tech_document';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'body',
      ),
      'right' => array(
        1 => 'field_scald_gallery',
      ),
      'footer' => array(
        2 => 'group_zone_download',
        3 => 'field_download_col_1',
        4 => 'field_download_col_2',
        5 => 'field_references_techniques',
        6 => 'field_download_col_3',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'field_scald_gallery' => 'right',
      'group_zone_download' => 'footer',
      'field_download_col_1' => 'footer',
      'field_download_col_2' => 'footer',
      'field_references_techniques' => 'footer',
      'field_download_col_3' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|tech_document|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|tech_document|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'tech_document';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_6_6_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'body',
      ),
      'right' => array(
        1 => 'field_scald_gallery',
      ),
      'bottom' => array(
        2 => 'group_download_zone',
        3 => 'field_download_col_1',
        4 => 'field_download_col_2',
        5 => 'field_references_techniques',
        8 => 'group_technic_files',
        9 => 'group_blueprint_files',
        10 => 'group_light_files',
        11 => 'field_download_col_3',
      ),
      'top_technic_space' => array(
        6 => 'group_img_wrapper',
        7 => 'field_scald_image',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'field_scald_gallery' => 'right',
      'group_download_zone' => 'bottom',
      'field_download_col_1' => 'bottom',
      'field_download_col_2' => 'bottom',
      'field_references_techniques' => 'bottom',
      'group_img_wrapper' => 'top_technic_space',
      'field_scald_image' => 'top_technic_space',
      'group_technic_files' => 'bottom',
      'group_blueprint_files' => 'bottom',
      'group_light_files' => 'bottom',
      'field_download_col_3' => 'bottom',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|tech_document|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|tech_document|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'tech_document';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_img_wraper',
        1 => 'body',
        2 => 'node_link',
        3 => 'title',
        4 => 'field_scald_image',
      ),
    ),
    'fields' => array(
      'group_img_wraper' => 'ds_content',
      'body' => 'ds_content',
      'node_link' => 'ds_content',
      'title' => 'ds_content',
      'field_scald_image' => 'ds_content',
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
  $export['node|tech_document|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|espace_pro|full';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'espace_pro';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'description',
      ),
      'top_technic' => array(
        1 => 'field_section_image',
        2 => 'group_img_wrapper',
      ),
    ),
    'fields' => array(
      'description' => 'left',
      'field_section_image' => 'top_technic',
      'group_img_wrapper' => 'top_technic',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['taxonomy_term|espace_pro|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|espace_pro|section';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'espace_pro';
  $ds_layout->view_mode = 'section';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_section_image',
        1 => 'title',
        2 => 'description',
      ),
    ),
    'fields' => array(
      'field_section_image' => 'ds_content',
      'title' => 'ds_content',
      'description' => 'ds_content',
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
  );
  $export['taxonomy_term|espace_pro|section'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function domainedo_documents_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'section';
  $ds_view_mode->label = 'Rubrique';
  $ds_view_mode->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['section'] = $ds_view_mode;

  return $export;
}
