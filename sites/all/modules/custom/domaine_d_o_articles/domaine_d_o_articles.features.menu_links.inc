<?php
/**
 * @file
 * domaine_d_o_articles.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function domaine_d_o_articles_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_coulisses:blog.
  $menu_links['main-menu_coulisses:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Coulisses',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_coulisses:blog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Coulisses');

  return $menu_links;
}
