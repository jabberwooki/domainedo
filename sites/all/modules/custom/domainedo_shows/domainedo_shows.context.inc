<?php

/**
 * @file
 * domainedo_shows.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function domainedo_shows_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'desktop-shows';
  $context->description = 'Rubrique Spectacles';
  $context->tag = 'desktop layout';
  $context->conditions = array(
    'cmd' => array(
      'values' => array(
        2 => 2,
        3 => 3,
      ),
    ),
    'path' => array(
      'values' => array(
        'spectacles*' => 'spectacles*',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Rubrique Spectacles');
  t('desktop layout');
  $export['desktop-shows'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'festival';
  $context->description = '';
  $context->tag = 'festival';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'festival' => 'festival',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ds_extras-headband_festival' => array(
          'module' => 'ds_extras',
          'delta' => 'headband_festival',
          'region' => 'headbandfestival',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('festival');
  $export['festival'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fullshow';
  $context->description = '';
  $context->tag = 'all layout';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'show' => 'show',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ds_extras-image_full_show' => array(
          'module' => 'ds_extras',
          'delta' => 'image_full_show',
          'region' => 'imagefullshow',
          'weight' => '40',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('all layout');
  $export['fullshow'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page-all-shows';
  $context->description = '';
  $context->tag = 'all layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'spectacles/tous-les-spectacles' => 'spectacles/tous-les-spectacles',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-shows-list' => array(
          'module' => 'views',
          'delta' => '-exp-shows-list',
          'region' => 'headbandfestival',
          'weight' => '-10',
        ),
        'boxes-left_shows_info' => array(
          'module' => 'boxes',
          'delta' => 'left_shows_info',
          'region' => 'headbandfestival',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('all layout');
  $export['page-all-shows'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'place_taxonomy';
  $context->description = '';
  $context->tag = 'all layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'domaine-do/espaces/*' => 'domaine-do/espaces/*',
        'lieux-de-spectacle/*' => 'lieux-de-spectacle/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ds_extras-top_place_taxonomy' => array(
          'module' => 'ds_extras',
          'delta' => 'top_place_taxonomy',
          'region' => 'topclassicpage',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('all layout');
  $export['place_taxonomy'] = $context;

  return $export;
}
