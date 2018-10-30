<?php
/**
 * @file
 * feature_lettre_info.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_lettre_info_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'lettre_infos';
  $context->description = '';
  $context->tag = 'all layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'content/abonnement-la-lettre-dinformation-du-domaine-do' => 'content/abonnement-la-lettre-dinformation-du-domaine-do',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-b0a7e4e85d1d24a3a439b09b9287c6e8' => array(
          'module' => 'views',
          'delta' => 'b0a7e4e85d1d24a3a439b09b9287c6e8',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('all layout');
  $export['lettre_infos'] = $context;

  return $export;
}
