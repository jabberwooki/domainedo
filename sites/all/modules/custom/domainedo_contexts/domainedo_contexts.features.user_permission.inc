<?php
/**
 * @file
 * domainedo_contexts.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function domainedo_contexts_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create any basic_block bean'.
  $permissions['create any basic_block bean'] = array(
    'name' => 'create any basic_block bean',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any basic_block bean'.
  $permissions['delete any basic_block bean'] = array(
    'name' => 'delete any basic_block bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any basic_block bean'.
  $permissions['edit any basic_block bean'] = array(
    'name' => 'edit any basic_block bean',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any basic_block bean'.
  $permissions['view any basic_block bean'] = array(
    'name' => 'view any basic_block bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
