<?php
/**
 * @file
 * news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function news_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event_page';
  $context->description = '';
  $context->tag = 'all layout';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'news' => 'news',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ds_extras-top_event' => array(
          'module' => 'ds_extras',
          'delta' => 'top_event',
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
  $export['event_page'] = $context;

  return $export;
}
