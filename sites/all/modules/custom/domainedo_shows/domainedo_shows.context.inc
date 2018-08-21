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
  $context->name = 'fullshow';
  $context->description = '';
  $context->tag = 'Full Show';
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
  t('Full Show');
  $export['fullshow'] = $context;

  return $export;
}
