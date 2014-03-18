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

  // Exported menu link: main-menu_spectacles:spectacles/tous-les-spectacles
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
  // Exported menu link: menu-shows-menu_calendrier:calendrier
  $menu_links['menu-shows-menu_calendrier:calendrier'] = array(
    'menu_name' => 'menu-shows-menu',
    'link_path' => 'calendrier',
    'router_path' => 'calendrier',
    'link_title' => 'Calendrier',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-shows-menu_calendrier:calendrier',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );
  // Exported menu link: menu-shows-menu_tous-les-spectacles:spectacles/tous-les-spectacles
  $menu_links['menu-shows-menu_tous-les-spectacles:spectacles/tous-les-spectacles'] = array(
    'menu_name' => 'menu-shows-menu',
    'link_path' => 'spectacles/tous-les-spectacles',
    'router_path' => 'spectacles/tous-les-spectacles',
    'link_title' => 'Tous les spectacles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-shows-menu_tous-les-spectacles:spectacles/tous-les-spectacles',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Calendrier');
  t('Spectacles');
  t('Tous les spectacles');


  return $menu_links;
}
