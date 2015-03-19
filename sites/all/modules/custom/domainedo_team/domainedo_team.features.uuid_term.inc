<?php
/**
 * @file
 * domainedo_team.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function domainedo_team_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'équipe',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c5d15298-b270-4bd3-951d-c80820e10d57',
    'vocabulary_machine_name' => 'scald_tags',
    'metatags' => array(),
  );
  return $terms;
}
