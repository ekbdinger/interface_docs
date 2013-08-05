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
  $context->description = 'General user menu for Interface install pages';
  $context->tag = 'interfaces';
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
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('General user menu for Interface install pages');
  t('interfaces');
  $export['interface_install'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'interface_install_worker';
  $context->description = '';
  $context->tag = 'interfaces';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'interface/docs' => 'interface/docs',
        'interface/docs/*' => 'interface/docs/*',
      ),
    ),
    'user' => array(
      'values' => array(
        'Inter Install Doc Worker' => 'Inter Install Doc Worker',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-interface-install-worker' => array(
          'module' => 'menu',
          'delta' => 'menu-interface-install-worker',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('interfaces');
  $export['interface_install_worker'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'interface_install_worker_ntype';
  $context->description = 'Based on node type';
  $context->tag = 'interfaces';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'interfaces_document' => 'interfaces_document',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'user' => array(
      'values' => array(
        'Inter Install Doc Worker' => 'Inter Install Doc Worker',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-interface-install-worker' => array(
          'module' => 'menu',
          'delta' => 'menu-interface-install-worker',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Based on node type');
  t('interfaces');
  $export['interface_install_worker_ntype'] = $context;

  return $export;
}
