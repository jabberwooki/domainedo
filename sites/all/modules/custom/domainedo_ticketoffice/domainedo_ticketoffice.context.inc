<?php
/**
 * @file
 * domainedo_ticketoffice.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function domainedo_ticketoffice_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ticketoffice_all';
  $context->description = '';
  $context->tag = 'Ticket Office';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'domainedo_ticketoffice-rsi_ws_user_links' => array(
          'module' => 'domainedo_ticketoffice',
          'delta' => 'rsi_ws_user_links',
          'region' => 'header_second',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Ticket Office');
  $export['ticketoffice_all'] = $context;

  return $export;
}
