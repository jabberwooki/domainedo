<?php
/**
 * @file
 * domainedo_team.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function domainedo_team_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-personne-field_person_dpt'
  $field_instances['node-personne-field_person_dpt'] = array(
    'bundle' => 'personne',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_person_dpt',
    'label' => 'Service',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-personne-field_person_img_1'
  $field_instances['node-personne-field_person_img_1'] = array(
    'bundle' => 'personne',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'domainedo_media',
        'settings' => array(),
        'type' => 'title',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(),
        'type' => 'polaroid',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_person_img_1',
    'label' => 'Image 1',
    'required' => 0,
    'settings' => array(
      'referencable_types' => array(
        'audio' => 0,
        'file' => 0,
        'gallery' => 0,
        'image' => 'image',
        'twitter' => 0,
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'petit_100',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-personne-field_person_img_2'
  $field_instances['node-personne-field_person_img_2'] = array(
    'bundle' => 'personne',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'domainedo_media',
        'settings' => array(),
        'type' => 'title',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(),
        'type' => 'polaroid',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_person_img_2',
    'label' => 'Image 2',
    'required' => 0,
    'settings' => array(
      'referencable_types' => array(
        'audio' => 0,
        'file' => 0,
        'gallery' => 0,
        'image' => 'image',
        'twitter' => 0,
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'petit_100',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-personne-field_person_txt_1'
  $field_instances['node-personne-field_person_txt_1'] = array(
    'bundle' => 'personne',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_person_txt_1',
    'label' => 'Texte 1',
    'required' => 0,
    'settings' => array(
      'context' => 'debug',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-personne-field_person_txt_2'
  $field_instances['node-personne-field_person_txt_2'] = array(
    'bundle' => 'personne',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_person_txt_2',
    'label' => 'Texte 2',
    'required' => 0,
    'settings' => array(
      'context' => 'debug',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-personne-field_person_txt_3'
  $field_instances['node-personne-field_person_txt_3'] = array(
    'bundle' => 'personne',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_person_txt_3',
    'label' => 'Texte 3',
    'required' => 0,
    'settings' => array(
      'context' => 'debug',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image 1');
  t('Image 2');
  t('Service');
  t('Texte 1');
  t('Texte 2');
  t('Texte 3');

  return $field_instances;
}
