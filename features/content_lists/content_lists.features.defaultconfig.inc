<?php
/**
 * @file
 * content_lists.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function content_lists_defaultconfig_features() {
  return array(
    'content_lists' => array(
      'user_default_roles' => 'user_default_roles',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_roles().
 */
function content_lists_defaultconfig_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 3,
  );

  return $roles;
}
