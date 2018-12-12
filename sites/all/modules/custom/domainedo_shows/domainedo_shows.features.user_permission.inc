<?php

/**
 * @file
 * domainedo_shows.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function domainedo_shows_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create festival content'.
  $permissions['create festival content'] = array(
    'name' => 'create festival content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create programmer content'.
  $permissions['create programmer content'] = array(
    'name' => 'create programmer content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create show content'.
  $permissions['create show content'] = array(
    'name' => 'create show content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create structure content'.
  $permissions['create structure content'] = array(
    'name' => 'create structure content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any festival content'.
  $permissions['delete any festival content'] = array(
    'name' => 'delete any festival content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any programmer content'.
  $permissions['delete any programmer content'] = array(
    'name' => 'delete any programmer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any show content'.
  $permissions['delete any show content'] = array(
    'name' => 'delete any show content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any structure content'.
  $permissions['delete any structure content'] = array(
    'name' => 'delete any structure content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own festival content'.
  $permissions['delete own festival content'] = array(
    'name' => 'delete own festival content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own programmer content'.
  $permissions['delete own programmer content'] = array(
    'name' => 'delete own programmer content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own show content'.
  $permissions['delete own show content'] = array(
    'name' => 'delete own show content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own structure content'.
  $permissions['delete own structure content'] = array(
    'name' => 'delete own structure content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in audience_types'.
  $permissions['delete terms in audience_types'] = array(
    'name' => 'delete terms in audience_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in show_locations'.
  $permissions['delete terms in show_locations'] = array(
    'name' => 'delete terms in show_locations',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in show_types'.
  $permissions['delete terms in show_types'] = array(
    'name' => 'delete terms in show_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in structure_types'.
  $permissions['delete terms in structure_types'] = array(
    'name' => 'delete terms in structure_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any festival content'.
  $permissions['edit any festival content'] = array(
    'name' => 'edit any festival content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any programmer content'.
  $permissions['edit any programmer content'] = array(
    'name' => 'edit any programmer content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any show content'.
  $permissions['edit any show content'] = array(
    'name' => 'edit any show content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any structure content'.
  $permissions['edit any structure content'] = array(
    'name' => 'edit any structure content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own festival content'.
  $permissions['edit own festival content'] = array(
    'name' => 'edit own festival content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own programmer content'.
  $permissions['edit own programmer content'] = array(
    'name' => 'edit own programmer content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own show content'.
  $permissions['edit own show content'] = array(
    'name' => 'edit own show content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own structure content'.
  $permissions['edit own structure content'] = array(
    'name' => 'edit own structure content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in audience_types'.
  $permissions['edit terms in audience_types'] = array(
    'name' => 'edit terms in audience_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in show_locations'.
  $permissions['edit terms in show_locations'] = array(
    'name' => 'edit terms in show_locations',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in show_types'.
  $permissions['edit terms in show_types'] = array(
    'name' => 'edit terms in show_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in structure_types'.
  $permissions['edit terms in structure_types'] = array(
    'name' => 'edit terms in structure_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
