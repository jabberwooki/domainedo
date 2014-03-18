<?php
/**
 * @file
 * domainedo_documents.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function domainedo_documents_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'desktop-pro';
  $context->description = '';
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
        'espace-pro' => 'espace-pro',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('desktop layout');
  $export['desktop-pro'] = $context;

  return $export;
}
