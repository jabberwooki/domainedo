<?php
/**
 * @file
 * domaine_d_o_rent_theater.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function domaine_d_o_rent_theater_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-lieu_location-body'
  $field_instances['node-lieu_location-body'] = array(
    'bundle' => 'lieu_location',
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
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'context' => '',
      'display_summary' => TRUE,
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-lieu_location-field_loc_gallerie'
  $field_instances['node-lieu_location-field_loc_gallerie'] = array(
    'bundle' => 'lieu_location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 0,
        ),
        'type' => 'full',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_loc_gallerie',
    'label' => 'Galerie',
    'required' => 0,
    'settings' => array(
      'allow_override' => 0,
      'referencable_types' => array(
        'audio' => 0,
        'file' => 0,
        'gallery' => 'gallery',
        'image' => 0,
        'twitter' => 0,
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-lieu_location-field_loc_vignette'
  $field_instances['node-lieu_location-field_loc_vignette'] = array(
    'bundle' => 'lieu_location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'list',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_loc_vignette',
    'label' => 'Vignette',
    'required' => 1,
    'settings' => array(
      'allow_override' => 0,
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
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-presentation_location_salles-body'
  $field_instances['node-presentation_location_salles-body'] = array(
    'bundle' => 'presentation_location_salles',
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
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'context' => '',
      'display_summary' => TRUE,
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-presentation_location_salles-field_vente_salle'
  $field_instances['node-presentation_location_salles-field_vente_salle'] = array(
    'bundle' => 'presentation_location_salles',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 1,
          'view_mode' => 'teaser',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_vente_salle',
    'label' => 'Salles',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-presentation_location_salles-field_vente_video'
  $field_instances['node-presentation_location_salles-field_vente_video'] = array(
    'bundle' => 'presentation_location_salles',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 0,
        ),
        'type' => 'full',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_vente_video',
    'label' => 'Vidéo',
    'required' => 0,
    'settings' => array(
      'allow_override' => 0,
      'referencable_types' => array(
        'audio' => 0,
        'file' => 0,
        'gallery' => 0,
        'image' => 0,
        'twitter' => 0,
        'video' => 'video',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Galerie');
  t('Salles');
  t('Vidéo');
  t('Vignette');

  return $field_instances;
}
