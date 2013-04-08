<?php
/**
 * @file
 * coolblog2.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function coolblog2_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  return $permissions;
}
