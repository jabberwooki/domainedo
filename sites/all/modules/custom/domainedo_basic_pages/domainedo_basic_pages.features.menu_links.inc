<?php
/**
 * @file
 * domainedo_basic_pages.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function domainedo_basic_pages_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_domaine-do:node/3
  $menu_links['main-menu_domaine-do:node/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Domaine d\'O',
    'options' => array(
      'identifier' => 'main-menu_domaine-do:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -34,
    'customized' => 0,
  );
  // Exported menu link: menu-contact_contact:node/1
  $menu_links['menu-contact_contact:node/1'] = array(
    'menu_name' => 'menu-contact',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-contact_contact:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-practicle-menu_billetterie:http://billetterie.domaine-do-34.eu/
  $menu_links['menu-practicle-menu_billetterie:http://billetterie.domaine-do-34.eu/'] = array(
    'menu_name' => 'menu-practicle-menu',
    'link_path' => 'http://billetterie.domaine-do-34.eu/',
    'router_path' => '',
    'link_title' => 'Billetterie',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-practicle-menu_billetterie:http://billetterie.domaine-do-34.eu/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-practicle-menu_pratique:node/2
  $menu_links['menu-practicle-menu_pratique:node/2'] = array(
    'menu_name' => 'menu-practicle-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Pratique',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-practicle-menu_pratique:node/2',
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
  t('Billetterie');
  t('Contact');
  t('Domaine d\'O');
  t('Pratique');


  return $menu_links;
}
