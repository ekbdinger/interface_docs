<?php
/**
 * @file
 * interface_docs.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function interface_docs_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'interface_install';
  $context->description = 'Worker and general user link for Interface install pages';
  $context->tag = 'departments';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'interfaces_document' => 'interfaces_document',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'interface/docs' => 'interface/docs',
        'interface/docs/*' => 'interface/docs/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-interface-install-docs' => array(
          'module' => 'menu',
          'delta' => 'menu-interface-install-docs',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'menu-menu-interface-install-worker' => array(
          'module' => 'menu',
          'delta' => 'menu-interface-install-worker',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Worker and general user link for Interface install pages');
  t('departments');
  $export['interface_install'] = $context;

  return $export;
}
