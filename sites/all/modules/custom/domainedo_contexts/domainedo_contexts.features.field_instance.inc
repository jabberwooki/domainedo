<?php

/**
 * @file
 * domainedo_contexts.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function domainedo_contexts_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-basic_block-field_block_body'.
  $field_instances['bean-basic_block-field_block_body'] = array(
    'bundle' => 'basic_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'bean',
    'field_name' => 'field_block_body',
    'label' => 'Contenu',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 1,
      'mee_enabled' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Contenu');

  return $field_instances;
}
