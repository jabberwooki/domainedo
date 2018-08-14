<?php
/**
 * @file
 * domainedo_shows.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function domainedo_shows_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-festival-body'.
  $field_instances['node-festival-body'] = array(
    'bundle' => 'festival',
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
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
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
    'label' => 'Description',
    'required' => 1,
    'settings' => array(
      'context' => 'sdl_editor_representation',
      'display_summary' => 1,
      'dnd_enabled' => 1,
      'mee_enabled' => 1,
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-festival-field_calendar_archive'.
  $field_instances['node-festival-field_calendar_archive'] = array(
    'bundle' => 'festival',
    'default_value' => array(
      0 => array(
        'value' => '<a href="/calendrier">Voir le calendrier</a>',
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
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_calendar_archive',
    'label' => 'Voir le calendrier',
    'required' => 0,
    'settings' => array(
      'context' => 'debug',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-festival-field_facebook'.
  $field_instances['node-festival-field_facebook'] = array(
    'bundle' => 'festival',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 19,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_facebook',
    'label' => 'Facebook',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'glyphicon-facebook',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_maxlength' => 255,
      'title_value' => 'Facebook',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-festival-field_festival_name'.
  $field_instances['node-festival-field_festival_name'] = array(
    'bundle' => 'festival',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_festival_name',
    'label' => 'Nom du festival',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-festival-field_festival_poster'.
  $field_instances['node-festival-field_festival_poster'] = array(
    'bundle' => 'festival',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'domainedo_media',
        'settings' => array(),
        'type' => 'title',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 0,
        ),
        'type' => 'full',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_festival_poster',
    'label' => 'Affiche du festival',
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
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-festival-field_festival_shows'.
  $field_instances['node-festival-field_festival_shows'] = array(
    'bundle' => 'festival',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 1,
          'use_content_language' => TRUE,
          'view_mode' => 'list',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_festival_shows',
    'label' => 'Spectacles',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'hide_ids' => FALSE,
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-festival-field_feuilleter_en_ligne'.
  $field_instances['node-festival-field_feuilleter_en_ligne'] = array(
    'bundle' => 'festival',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 17,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
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
    'field_name' => 'field_feuilleter_en_ligne',
    'label' => 'Feuilleter en ligne',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'Feuilleter le programme',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-festival-field_logo'.
  $field_instances['node-festival-field_logo'] = array(
    'bundle' => 'festival',
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
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_logo',
    'label' => 'Logo',
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
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-festival-field_no_result'.
  $field_instances['node-festival-field_no_result'] = array(
    'bundle' => 'festival',
    'default_value' => array(
      0 => array(
        'value' => '<div class="views-row views-row-2 views-row-even">
<div class="views-field views-field-field-no-result">
<div class="field-content">&nbsp;</div>
</div>
</div>
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
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_no_result',
    'label' => 'Pas de résultat',
    'required' => 1,
    'settings' => array(
      'context' => '',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
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
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-festival-field_programme_pdf'.
  $field_instances['node-festival-field_programme_pdf'] = array(
    'bundle' => 'festival',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'domainedo_media',
        'settings' => array(),
        'type' => 'title',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(),
        'type' => 'sdl_editor_representation',
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
    'field_name' => 'field_programme_pdf',
    'label' => 'Programme pdf',
    'required' => 0,
    'settings' => array(
      'referencable_types' => array(
        'audio' => 0,
        'file' => 'file',
        'gallery' => 0,
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
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-festival-field_scald_file'.
  $field_instances['node-festival-field_scald_file'] = array(
    'bundle' => 'festival',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'domainedo_media',
        'settings' => array(),
        'type' => 'title',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(),
        'type' => 'sdl_editor_representation',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_scald_file',
    'label' => 'Téléchargements',
    'required' => 0,
    'settings' => array(
      'referencable_types' => array(
        'audio' => 0,
        'file' => 'file',
        'gallery' => 0,
        'image' => 0,
        'twitter' => 0,
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-festival-field_scald_gallery'.
  $field_instances['node-festival-field_scald_gallery'] = array(
    'bundle' => 'festival',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'domainedo_media',
        'settings' => array(),
        'type' => 'title',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 0,
        ),
        'type' => 'full',
        'weight' => 11,
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
    'label' => 'Galerie',
    'required' => 0,
    'settings' => array(
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
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-festival-field_scald_image'.
  $field_instances['node-festival-field_scald_image'] = array(
    'bundle' => 'festival',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Image en surimpression.',
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
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
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
    'label' => 'Image en surimpression',
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
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-festival-field_scald_sound'.
  $field_instances['node-festival-field_scald_sound'] = array(
    'bundle' => 'festival',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'domainedo_media',
        'settings' => array(),
        'type' => 'title',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 0,
        ),
        'type' => 'full',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_scald_sound',
    'label' => 'Son',
    'required' => 0,
    'settings' => array(
      'referencable_types' => array(
        'audio' => 'audio',
        'file' => 0,
        'gallery' => 0,
        'image' => 0,
        'twitter' => 0,
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-festival-field_scald_video'.
  $field_instances['node-festival-field_scald_video'] = array(
    'bundle' => 'festival',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'domainedo_media',
        'settings' => array(),
        'type' => 'title',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 0,
        ),
        'type' => 'full',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_scald_video',
    'label' => 'Vidéo',
    'required' => 0,
    'settings' => array(
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
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-festival-field_season'.
  $field_instances['node-festival-field_season'] = array(
    'bundle' => 'festival',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Saisir l\'année du festival. Un festival d\'hiver étant à cheval sur 2 années, ne saisir que la première année. Par exemple, pour le festival d\'hiver 2013/2014, saisir "2013".',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_season',
    'label' => 'Saison',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-festival-field_useful_links'.
  $field_instances['node-festival-field_useful_links'] = array(
    'bundle' => 'festival',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_useful_links',
    'label' => 'Liens utiles',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-festival-field_view_archives'.
  $field_instances['node-festival-field_view_archives'] = array(
    'bundle' => 'festival',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 18,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
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
    'field_name' => 'field_view_archives',
    'label' => 'Voir les archives',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'Voir les archives',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-programmer-body'.
  $field_instances['node-programmer-body'] = array(
    'bundle' => 'programmer',
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
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'context' => 'debug',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-programmer-field_logo'.
  $field_instances['node-programmer-field_logo'] = array(
    'bundle' => 'programmer',
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
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 0,
        ),
        'type' => 'block',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 0,
        ),
        'type' => 'block',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_logo',
    'label' => 'Logo',
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
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-show-body'.
  $field_instances['node-show-body'] = array(
    'bundle' => 'show',
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
      'frontpage_block' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'list' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 4,
      ),
      'liste_aussi' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 80,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 54,
      ),
      'zoom' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 255,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 1,
    'settings' => array(
      'context' => 'sdl_editor_representation',
      'display_summary' => 1,
      'dnd_enabled' => 1,
      'mee_enabled' => 1,
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
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-show-field_additional_infos'.
  $field_instances['node-show-field_additional_infos'] = array(
    'bundle' => 'show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 34,
      ),
      'frontpage_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'liste_aussi' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'zoom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_additional_infos',
    'label' => 'Infos supplémentaires',
    'required' => 0,
    'settings' => array(
      'context' => '',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
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
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-show-field_back_to_top_link'.
  $field_instances['node-show-field_back_to_top_link'] = array(
    'bundle' => 'show',
    'default_value' => array(
      0 => array(
        'value' => '<a href="#block-system-main">Haut</a>',
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
        'weight' => 33,
      ),
      'frontpage_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'liste_aussi' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'zoom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_back_to_top_link',
    'label' => 'Lien retour haut',
    'required' => 0,
    'settings' => array(
      'context' => '',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-show-field_boxoffice_url'.
  $field_instances['node-show-field_boxoffice_url'] = array(
    'bundle' => 'show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 20,
      ),
      'frontpage_block' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 12,
      ),
      'list' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'liste_aussi' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'zoom' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_boxoffice_url',
    'label' => 'Url billetterie',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'colorbox-load',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'Réserver',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'node-show-field_by'.
  $field_instances['node-show-field_by'] = array(
    'bundle' => 'show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'frontpage_block' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'list' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'liste_aussi' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'zoom' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_by',
    'label' => 'Par',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'hide_ids' => FALSE,
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-show-field_casting'.
  $field_instances['node-show-field_casting'] = array(
    'bundle' => 'show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'frontpage_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'liste_aussi' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'zoom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_casting',
    'label' => 'Distribution',
    'required' => 0,
    'settings' => array(
      'context' => 'debug',
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
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-show-field_casting_link'.
  $field_instances['node-show-field_casting_link'] = array(
    'bundle' => 'show',
    'default_value' => array(
      0 => array(
        'value' => '<a href="#casting">Distribution</a>',
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
      'frontpage_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'liste_aussi' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'zoom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_casting_link',
    'label' => 'Lien distribution',
    'required' => 0,
    'settings' => array(
      'context' => '',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-show-field_coming_soon'.
  $field_instances['node-show-field_coming_soon'] = array(
    'bundle' => 'show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Texte à afficher lorsque le spectacle n\'est pas encore en vente.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'frontpage_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'liste_aussi' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'zoom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_coming_soon',
    'label' => 'Prochainement en vente',
    'required' => 0,
    'settings' => array(
      'context' => '',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
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
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'node-show-field_comments_link'.
  $field_instances['node-show-field_comments_link'] = array(
    'bundle' => 'show',
    'default_value' => array(
      0 => array(
        'value' => '<a href="#block-disqus-disqus-comments">Commentaires</a>',
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
        'weight' => 32,
      ),
      'frontpage_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 36,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'liste_aussi' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'zoom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comments_link',
    'label' => 'Lien commentaires',
    'required' => 0,
    'settings' => array(
      'context' => '',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'node-show-field_coproduction'.
  $field_instances['node-show-field_coproduction'] = array(
    'bundle' => 'show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'frontpage_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'liste_aussi' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'zoom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_coproduction',
    'label' => 'Coproducteurs',
    'required' => 0,
    'settings' => array(
      'context' => 'debug',
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
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-show-field_duration'.
  $field_instances['node-show-field_duration'] = array(
    'bundle' => 'show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'frontpage_block' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'list' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'liste_aussi' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'zoom' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_duration',
    'label' => 'Durée',
    'required' => 0,
    'settings' => array(
      'context' => '',
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
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-show-field_entrance'.
  $field_instances['node-show-field_entrance'] = array(
    'bundle' => 'show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 24,
      ),
      'frontpage_block' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 16,
      ),
      'list' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'liste_aussi' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'zoom' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_entrance',
    'label' => 'Entrée',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-show-field_festival'.
  $field_instances['node-show-field_festival'] = array(
    'bundle' => 'show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 7,
      ),
      'frontpage_block' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => 0,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'list' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(),
        'type' => 'entityreference_entity_id',
        'weight' => 14,
      ),
      'liste_aussi' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => 0,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'zoom' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_festival',
    'label' => 'Festival',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'hide_ids' => FALSE,
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-show-field_from'.
  $field_instances['node-show-field_from'] = array(
    'bundle' => 'show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'frontpage_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'liste_aussi' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'zoom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_from',
    'label' => 'De',
    'required' => 0,
    'settings' => array(
      'context' => '',
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

  // Exported field_instance: 'node-show-field_full'.
  $field_instances['node-show-field_full'] = array(
    'bundle' => 'show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Texte à afficher lorsque le spectacle est complet.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'frontpage_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 23,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'liste_aussi' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'zoom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_full',
    'label' => 'Non disponible',
    'required' => 0,
    'settings' => array(
      'context' => 'debug',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
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
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'node-show-field_lieu_generique'.
  $field_instances['node-show-field_lieu_generique'] = array(
    'bundle' => 'show',
    'default_value' => array(
      0 => array(
        'value' => 'Montpellier > domaine d\'O',
      ),
    ),
    'deleted' => 0,
    'description' => 'Montpellier > domaine d\'O',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'frontpage_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'liste_aussi' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 49,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'zoom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_lieu_generique',
    'label' => 'Lieu',
    'required' => 0,
    'settings' => array(
      'context' => '',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-show-field_linked_shows'.
  $field_instances['node-show-field_linked_shows'] = array(
    'bundle' => 'show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 38,
      ),
      'frontpage_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'liste_aussi' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'zoom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_linked_shows',
    'label' => 'Vous aimerez aussi',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'hide_ids' => FALSE,
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'node-show-field_location'.
  $field_instances['node-show-field_location'] = array(
    'bundle' => 'show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 8,
      ),
      'frontpage_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 20,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'liste_aussi' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'zoom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location',
    'label' => 'Lieu',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-show-field_minimum_age'.
  $field_instances['node-show-field_minimum_age'] = array(
    'bundle' => 'show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 10,
      ),
      'frontpage_block' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 18,
      ),
      'list' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'liste_aussi' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
      ),
      'zoom' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_minimum_age',
    'label' => 'A partir de',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' ans',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-show-field_offline'.
  $field_instances['node-show-field_offline'] = array(
    'bundle' => 'show',
    'default_value' => array(
      0 => array(
        'value' => '<p>Billetterie momentanément indisponible. Veuillez recharger la page.</p>
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
        'weight' => 41,
      ),
      'frontpage_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 25,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'liste_aussi' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'zoom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_offline',
    'label' => 'Billetterie indisponible',
    'required' => 0,
    'settings' => array(
      'context' => 'debug',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
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

  // Exported field_instance: 'node-show-field_partenariats'.
  $field_instances['node-show-field_partenariats'] = array(
    'bundle' => 'show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 35,
      ),
      'frontpage_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'liste_aussi' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'zoom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_partenariats',
    'label' => 'Partenariats',
    'required' => 0,
    'settings' => array(
      'context' => 'debug',
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
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-show-field_photos_link'.
  $field_instances['node-show-field_photos_link'] = array(
    'bundle' => 'show',
    'default_value' => array(
      0 => array(
        'value' => '<a href="#scald-gallery">Photos</a>',
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
        'weight' => 31,
      ),
      'frontpage_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 34,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'liste_aussi' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
      ),
      'zoom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_photos_link',
    'label' => 'Lien photos',
    'required' => 0,
    'settings' => array(
      'context' => '',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-show-field_price'.
  $field_instances['node-show-field_price'] = array(
    'bundle' => 'show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'frontpage_block' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'list' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'liste_aussi' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
      'zoom' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_price',
    'label' => 'Tarif',
    'required' => 0,
    'settings' => array(
      'context' => '',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 255,
      ),
      'type' => 'text_textfield',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-show-field_production'.
  $field_instances['node-show-field_production'] = array(
    'bundle' => 'show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'frontpage_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'liste_aussi' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
      'zoom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_production',
    'label' => 'Production',
    'required' => 0,
    'settings' => array(
      'context' => 'debug',
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
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-show-field_promoted'.
  $field_instances['node-show-field_promoted'] = array(
    'bundle' => 'show',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'frontpage_block' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
      ),
      'list' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'liste_aussi' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'zoom' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_promoted',
    'label' => 'Promu en page d\'accueil',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-show-field_proposed_by'.
  $field_instances['node-show-field_proposed_by'] = array(
    'bundle' => 'show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      'frontpage_block' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'list' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'liste_aussi' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'zoom' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_proposed_by',
    'label' => 'Sur proposition de',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'hide_ids' => FALSE,
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-show-field_reimbursement'.
  $field_instances['node-show-field_reimbursement'] = array(
    'bundle' => 'show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Texte d\'explication des modalités de remboursement en cas d\'annulation de spectacle.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 23,
      ),
      'frontpage_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 24,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'liste_aussi' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'zoom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_reimbursement',
    'label' => 'Remboursement',
    'required' => 0,
    'settings' => array(
      'context' => '',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
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
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'node-show-field_reservation'.
  $field_instances['node-show-field_reservation'] = array(
    'bundle' => 'show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 19,
      ),
      'frontpage_block' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 13,
      ),
      'list' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 24,
      ),
      'liste_aussi' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'zoom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_reservation',
    'label' => 'Réservation',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-show-field_restauration'.
  $field_instances['node-show-field_restauration'] = array(
    'bundle' => 'show',
    'default_value' => array(
      0 => array(
        'mee' => array(
          'resource_manager' => array(
            0 => array(
              'weight' => 0,
            ),
          ),
        ),
        'value' => '<!--

<p>Une restauration légère est proposée tous les soirs de spectacle une heure avant la représentation et une heure après la représentation.</p>

-->
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
        'weight' => 36,
      ),
      'frontpage_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 20,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'liste_aussi' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'zoom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_restauration',
    'label' => 'Restauration',
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
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-show-field_rsi_id'.
  $field_instances['node-show-field_rsi_id'] = array(
    'bundle' => 'show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 40,
      ),
      'frontpage_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'liste_aussi' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'zoom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_rsi_id',
    'label' => 'Identifiant billetterie',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-show-field_scald_gallery'.
  $field_instances['node-show-field_scald_gallery'] = array(
    'bundle' => 'show',
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
        'weight' => 25,
      ),
      'frontpage_block' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 0,
        ),
        'type' => 'full',
        'weight' => 10,
      ),
      'list' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'liste_aussi' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
      'zoom' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_scald_gallery',
    'label' => 'Galerie',
    'required' => 0,
    'settings' => array(
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
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-show-field_scald_image'.
  $field_instances['node-show-field_scald_image'] = array(
    'bundle' => 'show',
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
        'weight' => 14,
      ),
      'frontpage_block' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(),
        'type' => 'full_show',
        'weight' => 27,
      ),
      'list' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'liste_aussi' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'list',
        'weight' => 1,
      ),
      'zoom' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_scald_image',
    'label' => 'Photo du spectacle',
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-show-field_scald_sound'.
  $field_instances['node-show-field_scald_sound'] = array(
    'bundle' => 'show',
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
        'weight' => 27,
      ),
      'frontpage_block' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 0,
        ),
        'type' => 'full',
        'weight' => 11,
      ),
      'list' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'liste_aussi' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
      'zoom' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_scald_sound',
    'label' => 'Son',
    'required' => 0,
    'settings' => array(
      'referencable_types' => array(
        'audio' => 'audio',
        'file' => 0,
        'gallery' => 0,
        'image' => 0,
        'twitter' => 0,
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-show-field_scald_video'.
  $field_instances['node-show-field_scald_video'] = array(
    'bundle' => 'show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(),
        'type' => 'title',
        'weight' => 26,
      ),
      'frontpage_block' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 0,
        ),
        'type' => 'full',
        'weight' => 5,
      ),
      'list' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'liste_aussi' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'zoom' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_scald_video',
    'label' => 'Vidéo',
    'required' => 0,
    'settings' => array(
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
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-show-field_show_dates'.
  $field_instances['node-show-field_show_dates'] = array(
    'bundle' => 'show',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 11,
      ),
      'frontpage_block' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'shows_block',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 5,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'shows_block_mobile',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 14,
      ),
      'list' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'shows_list',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'liste_aussi' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'shows_block_mobile',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => 1,
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 52,
      ),
      'zoom' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'shows_block',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_show_dates',
    'label' => 'Date(s)',
    'required' => 1,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-show-field_show_type'.
  $field_instances['node-show-field_show_type'] = array(
    'bundle' => 'show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 28,
      ),
      'frontpage_block' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'list' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'liste_aussi' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'zoom' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_show_type',
    'label' => 'Type de spectacle',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-show-field_sound_link'.
  $field_instances['node-show-field_sound_link'] = array(
    'bundle' => 'show',
    'default_value' => array(
      0 => array(
        'value' => '<a href="#scald-sound">Son</a>',
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
        'weight' => 30,
      ),
      'frontpage_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 35,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'liste_aussi' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'zoom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sound_link',
    'label' => 'Lien son',
    'required' => 0,
    'settings' => array(
      'context' => '',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-show-field_subtitle'.
  $field_instances['node-show-field_subtitle'] = array(
    'bundle' => 'show',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'frontpage_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'list' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'liste_aussi' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'zoom' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_subtitle',
    'label' => 'Sous-titre',
    'required' => 0,
    'settings' => array(
      'context' => '',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-show-field_thumbnail'.
  $field_instances['node-show-field_thumbnail'] = array(
    'bundle' => 'show',
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
        'weight' => 13,
      ),
      'frontpage_block' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'slideshow_home',
        'weight' => 10,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'block',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'list' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'list',
        'weight' => 2,
      ),
      'liste_aussi' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'slideshow_home',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'zoom' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'zoom',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_thumbnail',
    'label' => 'Vignette du spectacle',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-show-field_video_link'.
  $field_instances['node-show-field_video_link'] = array(
    'bundle' => 'show',
    'default_value' => array(
      0 => array(
        'value' => '<a href="#scald-video">Vidéo</a>',
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
        'weight' => 29,
      ),
      'frontpage_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 33,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'liste_aussi' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'zoom' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_video_link',
    'label' => 'Lien vidéo',
    'required' => 0,
    'settings' => array(
      'context' => '',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-show-field_zoom'.
  $field_instances['node-show-field_zoom'] = array(
    'bundle' => 'show',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 16,
      ),
      'frontpage_block' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'frontpage_block_mobile' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
      ),
      'list' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'liste_aussi' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'zoom' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_zoom',
    'label' => 'Zoom sur',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-structure-body'.
  $field_instances['node-structure-body'] = array(
    'bundle' => 'structure',
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
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
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
    'label' => 'Description',
    'required' => 1,
    'settings' => array(
      'context' => 'full',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-structure-field_associate_artist'.
  $field_instances['node-structure-field_associate_artist'] = array(
    'bundle' => 'structure',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'field_associate_artist',
    'label' => 'Artiste associé',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-structure-field_logo'.
  $field_instances['node-structure-field_logo'] = array(
    'bundle' => 'structure',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'domainedo_media',
        'settings' => array(),
        'type' => 'title',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(),
        'type' => 'title',
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
    'field_name' => 'field_logo',
    'label' => 'Logo',
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
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-structure-field_scald_gallery'.
  $field_instances['node-structure-field_scald_gallery'] = array(
    'bundle' => 'structure',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'domainedo_media',
        'settings' => array(),
        'type' => 'title',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 0,
        ),
        'type' => 'full',
        'weight' => 6,
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
    'label' => 'Galerie',
    'required' => 0,
    'settings' => array(
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
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-structure-field_scald_image'.
  $field_instances['node-structure-field_scald_image'] = array(
    'bundle' => 'structure',
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
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(),
        'type' => 'title',
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
    'field_name' => 'field_scald_image',
    'label' => 'Image',
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
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-structure-field_scald_sound'.
  $field_instances['node-structure-field_scald_sound'] = array(
    'bundle' => 'structure',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'domainedo_media',
        'settings' => array(),
        'type' => 'title',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 0,
        ),
        'type' => 'full',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_scald_sound',
    'label' => 'Son',
    'required' => 0,
    'settings' => array(
      'referencable_types' => array(
        'audio' => 'audio',
        'file' => 0,
        'gallery' => 0,
        'image' => 0,
        'twitter' => 0,
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-structure-field_scald_video'.
  $field_instances['node-structure-field_scald_video'] = array(
    'bundle' => 'structure',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'domainedo_media',
        'settings' => array(),
        'type' => 'title',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 0,
        ),
        'type' => 'full',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_scald_video',
    'label' => 'Vidéo',
    'required' => 0,
    'settings' => array(
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
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-structure-field_site_web'.
  $field_instances['node-structure-field_site_web'] = array(
    'bundle' => 'structure',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
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
    'field_name' => 'field_site_web',
    'label' => 'Site web',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'rel_remove_internal',
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-structure-field_structure_shows'.
  $field_instances['node-structure-field_structure_shows'] = array(
    'bundle' => 'structure',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_structure_shows',
    'label' => 'Spectacles',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'hide_ids' => FALSE,
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-structure-field_structure_type'.
  $field_instances['node-structure-field_structure_type'] = array(
    'bundle' => 'structure',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_structure_type',
    'label' => 'Type de structure',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-show_locations-field_geolocalisation'.
  $field_instances['taxonomy_term-show_locations-field_geolocalisation'] = array(
    'bundle' => 'show_locations',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'geofield_map',
        'settings' => array(
          'geofield_map_baselayers_hybrid' => 1,
          'geofield_map_baselayers_map' => 1,
          'geofield_map_baselayers_physical' => 0,
          'geofield_map_baselayers_satellite' => 1,
          'geofield_map_center' => array(
            'geocode' => 'Find my location',
            'lat' => '',
            'lon' => '',
          ),
          'geofield_map_controltype' => 'default',
          'geofield_map_draggable' => 0,
          'geofield_map_height' => '300px',
          'geofield_map_maptype' => 'map',
          'geofield_map_max_zoom' => 0,
          'geofield_map_min_zoom' => 0,
          'geofield_map_mtc' => 'standard',
          'geofield_map_overview' => 0,
          'geofield_map_overview_opened' => 0,
          'geofield_map_pancontrol' => 1,
          'geofield_map_scale' => 0,
          'geofield_map_scrollwheel' => 0,
          'geofield_map_streetview_show' => 1,
          'geofield_map_width' => '100%',
          'geofield_map_zoom' => 15,
        ),
        'type' => 'geofield_map_map',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_geolocalisation',
    'label' => 'Géolocalisation',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geofield_gmap',
      'settings' => array(
        'click_to_place_marker' => 0,
        'confirm_center_marker' => 0,
        'html5_geolocation' => 0,
        'map_type' => 'ROADMAP',
      ),
      'type' => 'geofield_gmap',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'taxonomy_term-show_locations-field_ls_practical'.
  $field_instances['taxonomy_term-show_locations-field_ls_practical'] = array(
    'bundle' => 'show_locations',
    'default_value' => array(
      0 => array(
        'value' => '<ul>
	<li>Le théâtre Jean-Claude Carrière se situe au nord du domaine d\'O.</li>
	<li><a href="#scald-video">Voir la vidéo</a></li>
	<li><a href="#geolocalisation">Localiser sur une carte</a></li>
</ul>',
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
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_ls_practical',
    'label' => 'Pratique',
    'required' => 0,
    'settings' => array(
      'context' => 'debug',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
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
      'weight' => 44,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-show_locations-field_scald_gallery'.
  $field_instances['taxonomy_term-show_locations-field_scald_gallery'] = array(
    'bundle' => 'show_locations',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 0,
        ),
        'type' => 'full',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 0,
        ),
        'type' => 'full',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_scald_gallery',
    'label' => 'Galerie',
    'required' => 0,
    'settings' => array(
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
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'taxonomy_term-show_locations-field_scald_image'.
  $field_instances['taxonomy_term-show_locations-field_scald_image'] = array(
    'bundle' => 'show_locations',
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
      'full' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 0,
        ),
        'type' => 'full',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_scald_image',
    'label' => 'Image',
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
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'taxonomy_term-show_locations-field_scald_sound'.
  $field_instances['taxonomy_term-show_locations-field_scald_sound'] = array(
    'bundle' => 'show_locations',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 0,
        ),
        'type' => 'full',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'domainedo_media',
        'settings' => array(),
        'type' => 'title',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_scald_sound',
    'label' => 'Son',
    'required' => 0,
    'settings' => array(
      'referencable_types' => array(
        'audio' => 'audio',
        'file' => 0,
        'gallery' => 0,
        'image' => 0,
        'twitter' => 0,
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-show_locations-field_scald_video'.
  $field_instances['taxonomy_term-show_locations-field_scald_video'] = array(
    'bundle' => 'show_locations',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 0,
        ),
        'type' => 'full',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 0,
        ),
        'type' => 'full',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_scald_video',
    'label' => 'Vidéo',
    'required' => 0,
    'settings' => array(
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
      'active' => 0,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'taxonomy_term-show_locations-field_seating'.
  $field_instances['taxonomy_term-show_locations-field_seating'] = array(
    'bundle' => 'show_locations',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_seating',
    'label' => 'Jauge',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => 'places',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A partir de');
  t('Affiche du festival');
  t('Artiste associé');
  t('Billetterie indisponible');
  t('Coproducteurs');
  t('Date(s)');
  t('De');
  t('Description');
  t('Distribution');
  t('Durée');
  t('Entrée');
  t('Facebook');
  t('Festival');
  t('Feuilleter en ligne');
  t('Galerie');
  t('Géolocalisation');
  t('Identifiant billetterie');
  t('Image');
  t('Image en surimpression');
  t('Image en surimpression.');
  t('Infos supplémentaires');
  t('Jauge');
  t('Lien commentaires');
  t('Lien distribution');
  t('Lien photos');
  t('Lien retour haut');
  t('Lien son');
  t('Lien vidéo');
  t('Liens utiles');
  t('Lieu');
  t('Logo');
  t('Montpellier > domaine d\'O');
  t('Nom du festival');
  t('Non disponible');
  t('Par');
  t('Partenariats');
  t('Pas de résultat');
  t('Photo du spectacle');
  t('Pratique');
  t('Prochainement en vente');
  t('Production');
  t('Programme pdf');
  t('Promu en page d\'accueil');
  t('Remboursement');
  t('Restauration');
  t('Réservation');
  t('Saisir l\'année du festival. Un festival d\'hiver étant à cheval sur 2 années, ne saisir que la première année. Par exemple, pour le festival d\'hiver 2013/2014, saisir "2013".');
  t('Saison');
  t('Site web');
  t('Son');
  t('Sous-titre');
  t('Spectacles');
  t('Sur proposition de');
  t('Tarif');
  t('Texte d\'explication des modalités de remboursement en cas d\'annulation de spectacle.');
  t('Texte à afficher lorsque le spectacle est complet.');
  t('Texte à afficher lorsque le spectacle n\'est pas encore en vente.');
  t('Type de spectacle');
  t('Type de structure');
  t('Téléchargements');
  t('Url billetterie');
  t('Vidéo');
  t('Vignette du spectacle');
  t('Voir le calendrier');
  t('Voir les archives');
  t('Vous aimerez aussi');
  t('Zoom sur');

  return $field_instances;
}
