<?php
/**
 * @file
 * news.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function news_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-top-courtesy-nav_evenements:evenements.
  $menu_links['menu-top-courtesy-nav_evenements:evenements'] = array(
    'menu_name' => 'menu-top-courtesy-nav',
    'link_path' => 'evenements',
    'router_path' => 'evenements',
    'link_title' => 'Evenements',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-courtesy-nav_evenements:evenements',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Evenements');

  return $menu_links;
}
