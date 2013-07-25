<?php
/**
 * @file
 * interface_docs.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function interface_docs_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-interface-install-docs.
  $menus['menu-interface-install-docs'] = array(
    'menu_name' => 'menu-interface-install-docs',
    'title' => 'Interface Install Docs',
    'description' => 'Left menu to display to any end user when they are on the interface docs homepage, document listing page or a particular Interface document node',
  );
  // Exported menu: menu-interface-install-worker.
  $menus['menu-interface-install-worker'] = array(
    'menu_name' => 'menu-interface-install-worker',
    'title' => 'Interface Install Worker',
    'description' => 'Zareen Razaque and Anusha',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Interface Install Docs');
  t('Interface Install Worker');
  t('Left menu to display to any end user when they are on the interface docs homepage, document listing page or a particular Interface document node');
  t('Zareen Razaque and Anusha');


  return $menus;
}
