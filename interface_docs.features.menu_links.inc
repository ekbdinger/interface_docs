<?php
/**
 * @file
 * interface_docs.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function interface_docs_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-interface-install-docs:interface/docs/all
  $menu_links['menu-interface-install-docs:interface/docs/all'] = array(
    'menu_name' => 'menu-interface-install-docs',
    'link_path' => 'interface/docs/all',
    'router_path' => 'interface/docs/all',
    'link_title' => 'All Interface Docs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-interface-install-docs:interface/docs/install
  $menu_links['menu-interface-install-docs:interface/docs/install'] = array(
    'menu_name' => 'menu-interface-install-docs',
    'link_path' => 'interface/docs/install',
    'router_path' => 'interface/docs/install',
    'link_title' => 'Installation Docs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-interface-install-docs:interface/docs/reference
  $menu_links['menu-interface-install-docs:interface/docs/reference'] = array(
    'menu_name' => 'menu-interface-install-docs',
    'link_path' => 'interface/docs/reference',
    'router_path' => 'interface/docs/reference',
    'link_title' => 'Reference Docs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-interface-install-docs:interface/docs/training
  $menu_links['menu-interface-install-docs:interface/docs/training'] = array(
    'menu_name' => 'menu-interface-install-docs',
    'link_path' => 'interface/docs/training',
    'router_path' => 'interface/docs/training',
    'link_title' => 'Training Docs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-interface-install-docs:node/10193
  $menu_links['menu-interface-install-docs:node/10193'] = array(
    'menu_name' => 'menu-interface-install-docs',
    'link_path' => 'node/10193',
    'router_path' => 'node/%',
    'link_title' => 'Interfaces Home',
    'options' => array(
      'attributes' => array(
        'title' => 'Main page for the Interfaces team',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-interface-install-worker:node/add/interfaces-document
  $menu_links['menu-interface-install-worker:node/add/interfaces-document'] = array(
    'menu_name' => 'menu-interface-install-worker',
    'link_path' => 'node/add/interfaces-document',
    'router_path' => 'node/add/interfaces-document',
    'link_title' => 'Add Interface Document',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add Interface Document');
  t('All Interface Docs');
  t('Installation Docs');
  t('Interfaces Home');
  t('Reference Docs');
  t('Training Docs');


  return $menu_links;
}
