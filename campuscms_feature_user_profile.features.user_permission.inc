<?php
/**
 * @file
 * campuscms_feature_user_profile.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function campuscms_feature_user_profile_user_default_permissions() {
  $permissions = array();

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'user',
  );

  return $permissions;
}
