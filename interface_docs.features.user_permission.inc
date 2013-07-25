<?php
/**
 * @file
 * interface_docs.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function interface_docs_user_default_permissions() {
  $permissions = array();

  // Exported permission: create interfaces_document content.
  $permissions['create interfaces_document content'] = array(
    'name' => 'create interfaces_document content',
    'roles' => array(
      'Inter Install Doc Worker' => 'Inter Install Doc Worker',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any interfaces_document content.
  $permissions['delete any interfaces_document content'] = array(
    'name' => 'delete any interfaces_document content',
    'roles' => array(
      'Inter Install Doc Worker' => 'Inter Install Doc Worker',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own interfaces_document content.
  $permissions['delete own interfaces_document content'] = array(
    'name' => 'delete own interfaces_document content',
    'roles' => array(
      'Inter Install Doc Worker' => 'Inter Install Doc Worker',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any interfaces_document content.
  $permissions['edit any interfaces_document content'] = array(
    'name' => 'edit any interfaces_document content',
    'roles' => array(
      'Inter Install Doc Worker' => 'Inter Install Doc Worker',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own interfaces_document content.
  $permissions['edit own interfaces_document content'] = array(
    'name' => 'edit own interfaces_document content',
    'roles' => array(
      'Inter Install Doc Worker' => 'Inter Install Doc Worker',
    ),
    'module' => 'node',
  );

  return $permissions;
}
