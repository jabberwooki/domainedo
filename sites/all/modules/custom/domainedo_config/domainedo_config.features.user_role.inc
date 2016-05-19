<?php
/**
 * @file
 * domainedo_config.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function domainedo_config_user_default_roles() {
  $roles = array();

  // Exported role: location.
  $roles['location'] = array(
    'name' => 'location',
    'weight' => 3,
  );

  // Exported role: redacteur.
  $roles['redacteur'] = array(
    'name' => 'redacteur',
    'weight' => 4,
  );

  // Exported role: webmaster.
  $roles['webmaster'] = array(
    'name' => 'webmaster',
    'weight' => 5,
  );

  return $roles;
}
