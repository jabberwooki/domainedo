<?php
/**
 * @file
 * domaine_d_o_page_complexe.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function domaine_d_o_page_complexe_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'complex_page';
  $context->description = '';
  $context->tag = 'all layout';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page_complexe' => 'page_complexe',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ds_extras-top_complex_page' => array(
          'module' => 'ds_extras',
          'delta' => 'top_complex_page',
          'region' => 'topclassicpage',
          'weight' => '-10',
        ),
        'ds_extras-left_block_page' => array(
          'module' => 'ds_extras',
          'delta' => 'left_block_page',
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
  $export['complex_page'] = $context;

  return $export;
}
