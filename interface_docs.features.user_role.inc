<?php
/**
 * @file
 * interface_docs.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function interface_docs_user_default_roles() {
  $roles = array();

  // Exported role: Interfaces.
  $roles['Interfaces'] = array(
    'name' => 'Interfaces',
    'weight' => 0,
  );

  return $roles;
}
