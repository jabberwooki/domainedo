<?php
/**
 * @file
 * domainedo_documents.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function domainedo_documents_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_autres|node|tech_document|form';
  $field_group->group_name = 'group_autres';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tech_document';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_onglets';
  $field_group->data = array(
    'label' => 'Autres',
    'weight' => '17',
    'children' => array(
      0 => 'field_described_location',
      1 => 'field_doc_section',
      2 => 'field_tech_document_type',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-autres field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_autres|node|tech_document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blueprint_files|node|tech_document|full';
  $field_group->group_name = 'group_blueprint_files';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tech_document';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_download_zone';
  $field_group->data = array(
    'label' => 'Plans',
    'weight' => '31',
    'children' => array(
      0 => 'field_download_col_2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Plans',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-blueprint-files field-group-div tech-open-close',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_blueprint_files|node|tech_document|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description|node|tech_document|form';
  $field_group->group_name = 'group_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tech_document';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_onglets';
  $field_group->data = array(
    'label' => 'Description et galerie',
    'weight' => '14',
    'children' => array(
      0 => 'body',
      1 => 'field_scald_image',
      2 => 'field_scald_gallery',
      3 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-description field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_description|node|tech_document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_download_files|node|tech_document|form';
  $field_group->group_name = 'group_download_files';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tech_document';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_onglets';
  $field_group->data = array(
    'label' => 'Fichiers en téléchargement',
    'weight' => '15',
    'children' => array(
      0 => 'field_download_col_1',
      1 => 'field_download_col_2',
      2 => 'field_download_col_3',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Fichiers en téléchargement',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-download-files field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_download_files|node|tech_document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_download_zone|node|tech_document|full';
  $field_group->group_name = 'group_download_zone';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tech_document';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Zone téléchargement',
    'weight' => '3',
    'children' => array(
      0 => 'group_technic_files',
      1 => 'group_blueprint_files',
      2 => 'group_light_files',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Zone téléchargement',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-download-zone field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_download_zone|node|tech_document|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_img_wraper|node|tech_document|teaser';
  $field_group->group_name = 'group_img_wraper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tech_document';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Groupe image titre',
    'weight' => '0',
    'children' => array(
      0 => 'field_scald_image',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Groupe image titre',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-img-wraper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_img_wraper|node|tech_document|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_img_wrapper|node|tech_document|full';
  $field_group->group_name = 'group_img_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tech_document';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Entoure image',
    'weight' => '7',
    'children' => array(
      0 => 'field_scald_image',
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
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_img_wrapper|node|tech_document|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_img_wrapper|taxonomy_term|espace_pro|full';
  $field_group->group_name = 'group_img_wrapper';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'espace_pro';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Entoure image',
    'weight' => '1',
    'children' => array(
      0 => 'field_section_image',
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
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_img_wrapper|taxonomy_term|espace_pro|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_light_files|node|tech_document|full';
  $field_group->group_name = 'group_light_files';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tech_document';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_download_zone';
  $field_group->data = array(
    'label' => 'Lumières',
    'weight' => '32',
    'children' => array(
      0 => 'field_download_col_3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Lumières',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-light-files field-group-div tech-open-close',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_light_files|node|tech_document|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_onglets|node|tech_document|form';
  $field_group->group_name = 'group_onglets';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tech_document';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Onglets',
    'weight' => '3',
    'children' => array(
      0 => 'group_download_files',
      1 => 'group_description',
      2 => 'group_references',
      3 => 'group_autres',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-onglets field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_onglets|node|tech_document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_references|node|tech_document|form';
  $field_group->group_name = 'group_references';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tech_document';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_onglets';
  $field_group->data = array(
    'label' => 'Références',
    'weight' => '16',
    'children' => array(
      0 => 'field_references_techniques',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-references field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_references|node|tech_document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_technic_files|node|tech_document|full';
  $field_group->group_name = 'group_technic_files';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tech_document';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_download_zone';
  $field_group->data = array(
    'label' => 'Fiche technique',
    'weight' => '30',
    'children' => array(
      0 => 'field_download_col_1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Fiche technique',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-technic-files field-group-div tech-open-close',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_technic_files|node|tech_document|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_img_location|field_collection_item|field_references_techniques|default';
  $field_group->group_name = 'group_title_img_location';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_references_techniques';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Groupe Titre image',
    'weight' => '0',
    'children' => array(
      0 => 'field_image_ref_tec_doc',
      1 => 'field_summary_ref_tec_doc',
      2 => 'field_title_ref_tec_doc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Groupe Titre image',
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
  $field_groups['group_title_img_location|field_collection_item|field_references_techniques|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_zone_download|node|tech_document|default';
  $field_group->group_name = 'group_zone_download';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tech_document';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Zone de téléchargement',
    'weight' => '2',
    'children' => array(
      0 => 'field_download_col_1',
      1 => 'field_download_col_2',
      2 => 'field_download_col_3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Zone de téléchargement',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-zone-download field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_zone_download|node|tech_document|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Autres');
  t('Description et galerie');
  t('Entoure image');
  t('Fiche technique');
  t('Fichiers en téléchargement');
  t('Groupe Titre image');
  t('Groupe image titre');
  t('Lumières');
  t('Onglets');
  t('Plans');
  t('Références');
  t('Zone de téléchargement');
  t('Zone téléchargement');

  return $field_groups;
}
