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
    'name' => 'technique',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '170861c5-b5ba-4bd6-b151-25a812f8dd38',
    'vocabulary_machine_name' => 'poles',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'administration',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '67fb09b1-1343-409f-934c-27379a05c5fc',
    'vocabulary_machine_name' => 'poles',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'artistique',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'b5758e50-e900-4851-a0cd-b81836a61d3e',
    'vocabulary_machine_name' => 'poles',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'public et communication',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'c11d7dcd-eefd-4c66-a81a-045aa36dd0d4',
    'vocabulary_machine_name' => 'poles',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'équipe',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c5d15298-b270-4bd3-951d-c80820e10d57',
    'vocabulary_machine_name' => 'scald_tags',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'conseil général',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e13f9bbd-52c4-42d6-b4e3-170d2b712fbb',
    'vocabulary_machine_name' => 'poles',
    'metatags' => array(),
  );
  return $terms;
}
