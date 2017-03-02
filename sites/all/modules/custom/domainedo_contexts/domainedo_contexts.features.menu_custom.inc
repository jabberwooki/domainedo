<?php
/**
 * @file
 * domainedo_contexts.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function domainedo_contexts_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-bottom-courtesy.
  $menus['menu-bottom-courtesy'] = array(
    'menu_name' => 'menu-bottom-courtesy',
    'title' => 'Menu bas',
    'description' => '',
  );
  // Exported menu: menu-contact.
  $menus['menu-contact'] = array(
    'menu_name' => 'menu-contact',
    'title' => 'contact',
    'description' => '',
  );
  // Exported menu: menu-practicle-menu.
  $menus['menu-practicle-menu'] = array(
    'menu_name' => 'menu-practicle-menu',
    'title' => 'Practicle menu',
    'description' => '',
  );
  // Exported menu: menu-top-courtesy-nav.
  $menus['menu-top-courtesy-nav'] = array(
    'menu_name' => 'menu-top-courtesy-nav',
    'title' => 'top courtesy nav',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Menu bas');
  t('Practicle menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('contact');
  t('top courtesy nav');

  return $menus;
}
