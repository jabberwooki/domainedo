<?php
/**
 * @file
 * domainedo_shows.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function domainedo_shows_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-shows-menu.
  $menus['menu-shows-menu'] = array(
    'menu_name' => 'menu-shows-menu',
    'title' => 'Menu Spectacles',
    'description' => 'Mini menu présent sur la page d\'accueil au dessus du bloc des spectacles à l\'affiche.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Menu Spectacles');
  t('Mini menu présent sur la page d\'accueil au dessus du bloc des spectacles à l\'affiche.');


  return $menus;
}
