<?php
/**
 * @file
 * interface_docs.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function interface_docs_taxonomy_default_vocabularies() {
  return array(
    'interface_doc_categories' => array(
      'name' => 'Interface Doc Categories',
      'machine_name' => 'interface_doc_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'interface_types' => array(
      'name' => 'Interface Types',
      'machine_name' => 'interface_types',
      'description' => 'This we may not use',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
