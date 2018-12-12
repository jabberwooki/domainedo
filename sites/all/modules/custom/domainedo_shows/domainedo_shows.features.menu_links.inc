<?php

/**
 * @file
 * domainedo_shows.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function domainedo_shows_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_spectacles:spectacles/tous-les-spectacles.
  $menu_links['main-menu_spectacles:spectacles/tous-les-spectacles'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'spectacles/tous-les-spectacles',
    'router_path' => 'spectacles/tous-les-spectacles',
    'link_title' => 'Spectacles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_spectacles:spectacles/tous-les-spectacles',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Spectacles');

  return $menu_links;
}
