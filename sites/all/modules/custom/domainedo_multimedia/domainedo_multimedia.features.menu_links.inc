<?php
/**
 * @file
 * domainedo_multimedia.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function domainedo_multimedia_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-top-courtesy-nav_espace-multimedia:espace-multimedia.
  $menu_links['menu-top-courtesy-nav_espace-multimedia:espace-multimedia'] = array(
    'menu_name' => 'menu-top-courtesy-nav',
    'link_path' => 'espace-multimedia',
    'router_path' => 'espace-multimedia',
    'link_title' => 'Espace Multimedia',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-courtesy-nav_espace-multimedia:espace-multimedia',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Espace Multimedia');

  return $menu_links;
}
