<?php
/**
 * @file
 * domaine_d_o_retours_sur.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function domaine_d_o_retours_sur_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_critiques-field_prenom_critique'.
  $field_instances['field_collection_item-field_critiques-field_prenom_critique'] = array(
    'bundle' => 'field_critiques',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_prenom_critique',
    'label' => 'Prénom',
    'required' => 1,
    'settings' => array(
      'context' => 'title',
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
      'weight' => 31,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_critiques-field_summary_critique'.
  $field_instances['field_collection_item-field_critiques-field_summary_critique'] = array(
    'bundle' => 'field_critiques',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_summary_critique',
    'label' => 'Résumé',
    'required' => 1,
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
      'weight' => 32,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_critiques-field_text_critique'.
  $field_instances['field_collection_item-field_critiques-field_text_critique'] = array(
    'bundle' => 'field_critiques',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_text_critique',
    'label' => 'Critique complète',
    'required' => 1,
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
      'weight' => 33,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_retour_comments-field_prenom_comments'.
  $field_instances['field_collection_item-field_retour_comments-field_prenom_comments'] = array(
    'bundle' => 'field_retour_comments',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_prenom_comments',
    'label' => 'Prénom',
    'required' => 1,
    'settings' => array(
      'context' => 'title',
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
      'weight' => 31,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_retour_comments-field_summary_comment'.
  $field_instances['field_collection_item-field_retour_comments-field_summary_comment'] = array(
    'bundle' => 'field_retour_comments',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_summary_comment',
    'label' => 'Résumé',
    'required' => 1,
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
      'weight' => 32,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_retour_comments-field_text_comment'.
  $field_instances['field_collection_item-field_retour_comments-field_text_comment'] = array(
    'bundle' => 'field_retour_comments',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_text_comment',
    'label' => 'Commentaire complet',
    'required' => 1,
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
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-retour_sur-body'.
  $field_instances['node-retour_sur-body'] = array(
    'bundle' => 'retour_sur',
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
      'full' => array(
        'label' => 'above',
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
    'label' => 'Les élèves ont participé',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'display_summary' => 1,
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-retour_sur-field_critiques'.
  $field_instances['node-retour_sur-field_critiques'] = array(
    'bundle' => 'retour_sur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Ajouter',
          'delete' => 'Supprimer',
          'description' => TRUE,
          'edit' => 'Modifier',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Ajouter',
          'delete' => 'Supprimer',
          'description' => TRUE,
          'edit' => 'Modifier',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_critiques',
    'label' => 'Les élèves ont écrit',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-retour_sur-field_edu_contact'.
  $field_instances['node-retour_sur-field_edu_contact'] = array(
    'bundle' => 'retour_sur',
    'default_value' => array(
      0 => array(
        'mee' => array(
          'resource_manager' => array(
            0 => array(
              'weight' => 0,
            ),
          ),
        ),
        'value' => '<h3>Contact</h3>

<p>Service éducatif Marion Blanchaud mblanchaud@domaine-do-34.eu Jessica Ramassamy jramassamy@domaine-do-34.eu</p>
',
        'format' => 'full_html',
      ),
    ),
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
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_edu_contact',
    'label' => 'Contact - Service éducatif',
    'required' => 0,
    'settings' => array(
      'context' => 'full',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-retour_sur-field_retour_comments'.
  $field_instances['node-retour_sur-field_retour_comments'] = array(
    'bundle' => 'retour_sur',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Ajouter',
          'delete' => 'Supprimer',
          'description' => TRUE,
          'edit' => 'Modifier',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Ajouter',
          'delete' => 'Supprimer',
          'description' => TRUE,
          'edit' => 'Modifier',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_retour_comments',
    'label' => 'les élèves ont commenté',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-retour_sur-field_scald_gallery'.
  $field_instances['node-retour_sur-field_scald_gallery'] = array(
    'bundle' => 'retour_sur',
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
      'full' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 0,
        ),
        'type' => 'full',
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
    'field_name' => 'field_scald_gallery',
    'label' => 'Galerie multimédia',
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

  // Exported field_instance: 'node-retour_sur-field_scald_image'.
  $field_instances['node-retour_sur-field_scald_image'] = array(
    'bundle' => 'retour_sur',
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
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_scald_image',
    'label' => 'Vignette',
    'required' => 0,
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
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Commentaire complet');
  t('Contact - Service éducatif');
  t('Critique complète');
  t('Galerie multimédia');
  t('Les élèves ont participé');
  t('Les élèves ont écrit');
  t('Prénom');
  t('Résumé');
  t('Vignette');
  t('les élèves ont commenté');

  return $field_instances;
}
