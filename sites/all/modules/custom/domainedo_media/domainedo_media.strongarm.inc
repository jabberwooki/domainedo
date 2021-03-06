<?php

/**
 * @file
 * domainedo_media.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function domainedo_media_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_actions_powers';
  $strongarm->value = array(
    'fetch' => 0,
    'edit' => 1,
    'view' => 2,
    'delete' => 3,
  );
  $export['scald_actions_powers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_atom_defaults';
  $strongarm->value = array(
    'image' => (object) array(
      'thumbnail_source' => 'public://atoms/image.png',
      'description' => '',
      'upload_type' => 'plupload',
      'actions' => 5,
    ),
  );
  $export['scald_atom_defaults'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_author_vocabulary';
  $strongarm->value = 'scald_authors';
  $export['scald_author_vocabulary'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_context_fallbacks';
  $strongarm->value = array(
    '@default' => array(
      0 => 'title',
    ),
  );
  $export['scald_context_fallbacks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_custom_contexts';
  $strongarm->value = array(
    'list' => array(
      'name' => 'list',
      'title' => 'List',
      'description' => 'To be used in views, page display type.',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
      'provider' => 'scald',
      'type_format' => array(
        'audio' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
        'file' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
        'gallery' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
        'image' => array(
          'file_format' => '*',
          'transcoder' => 'style-medium',
        ),
        'twitter' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
        'video' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
      ),
      'transcoder' => array(
        'audio' => array(
          '*' => 'passthrough',
        ),
        'file' => array(
          '*' => 'passthrough',
        ),
        'gallery' => array(
          '*' => 'passthrough',
        ),
        'image' => array(
          '*' => 'style-medium',
        ),
        'twitter' => array(
          '*' => 'passthrough',
        ),
        'video' => array(
          '*' => 'passthrough',
        ),
      ),
      'player' => array(
        'audio' => array(
          '*' => 'default',
        ),
        'file' => array(
          '*' => 'default',
        ),
        'gallery' => array(
          '*' => 'default',
        ),
        'image' => array(
          '*' => 'default',
          'settings' => array(),
        ),
        'twitter' => array(
          '*' => 'default',
        ),
        'video' => array(
          '*' => 'default',
        ),
      ),
    ),
    'block' => array(
      'name' => 'block',
      'title' => 'Block',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'slideshow_home' => array(
      'name' => 'slideshow_home',
      'title' => 'slideshow_home',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'full_show' => array(
      'name' => 'full_show',
      'title' => 'Full show',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'zoom' => array(
      'name' => 'zoom',
      'title' => 'zoom',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'petit_100' => array(
      'name' => 'petit_100',
      'title' => 'petit-100',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'polaroid' => array(
      'name' => 'polaroid',
      'title' => 'polaroid',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'original' => array(
      'name' => 'original',
      'title' => 'original',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'large_480x296_crop' => array(
      'name' => 'large_480x296_crop',
      'title' => 'large 480x296 crop',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'new_list_images' => array(
      'name' => 'new_list_images',
      'title' => 'new list images',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'encemoment' => array(
      'name' => 'encemoment',
      'title' => 'EnCeMoment',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'festival' => array(
      'name' => 'festival',
      'title' => 'Festival',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'square' => array(
      'name' => 'square',
      'title' => 'Carré',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'haut_classique' => array(
      'name' => 'haut_classique',
      'title' => 'Haut classique',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'partner' => array(
      'name' => 'partner',
      'title' => 'Partenaire',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
  );
  $export['scald_custom_contexts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_tags_vocabulary';
  $strongarm->value = 'scald_tags';
  $export['scald_tags_vocabulary'] = $strongarm;

  return $export;
}
