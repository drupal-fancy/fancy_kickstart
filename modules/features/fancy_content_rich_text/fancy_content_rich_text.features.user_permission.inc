<?php
/**
 * @file
 * fancy_content_rich_text.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fancy_content_rich_text_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format wysiwyg'.
  $permissions['use text format wysiwyg'] = array(
    'name' => 'use text format wysiwyg',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
