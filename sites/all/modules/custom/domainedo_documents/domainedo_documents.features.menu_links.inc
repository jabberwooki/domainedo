<?php
/**
 * @file
 * domainedo_documents.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function domainedo_documents_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-top-courtesy-nav_espace-pro:espace-pro
  $menu_links['menu-top-courtesy-nav_espace-pro:espace-pro'] = array(
    'menu_name' => 'menu-top-courtesy-nav',
    'link_path' => 'espace-pro',
    'router_path' => 'espace-pro',
    'link_title' => 'Espace Pro',
    'options' => array(
      'identifier' => 'menu-top-courtesy-nav_espace-pro:espace-pro',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Espace Pro');


  return $menu_links;
}
