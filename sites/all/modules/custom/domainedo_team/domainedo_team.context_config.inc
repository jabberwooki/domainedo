<?php
/**
 * @file
 * domainedo_team.context_config.inc
 */

/**
 * Implements hook_default_scald_context_config().
 */
function domainedo_team_default_scald_context_config() {
  $export = array();

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'polaroid';
  $context_config->transcoder = array(
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
      '*' => 'style-polaroid',
    ),
    'twitter' => array(
      '*' => 'passthrough',
    ),
    'video' => array(
      '*' => 'passthrough',
    ),
  );
  $context_config->player = array(
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
  );
  $export['polaroid'] = $context_config;

  return $export;
}
