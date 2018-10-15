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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'technic_taxonomy';
  $context->description = '';
  $context->tag = 'all layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'espace-pro/*' => 'espace-pro/*',
        'technique/*' => 'technique/*',
        'espace-multimedia/*' => 'espace-multimedia/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ds_extras-top_technic' => array(
          'module' => 'ds_extras',
          'delta' => 'top_technic',
          'region' => 'topclassicpage',
          'weight' => '-10',
        ),
        'ds_extras-top_technic_space' => array(
          'module' => 'ds_extras',
          'delta' => 'top_technic_space',
          'region' => 'topclassicpage',
          'weight' => '-9',
        ),
        'menu-menu-top-courtesy-nav' => array(
          'module' => 'menu',
          'delta' => 'menu-top-courtesy-nav',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('all layout');
  $export['technic_taxonomy'] = $context;

  return $export;
}
