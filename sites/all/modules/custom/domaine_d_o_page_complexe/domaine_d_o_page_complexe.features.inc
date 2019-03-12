<?php

/**
 * @file
 * domaine_d_o_page_complexe.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function domaine_d_o_page_complexe_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function domaine_d_o_page_complexe_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page_complexe' => array(
      'name' => t('Page complexe'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function domaine_d_o_page_complexe_paragraphs_info() {
  $items = array(
    'titre3_txt_summary_option' => array(
      'name' => 'Titre3 + Texte et résumé optionnels',
      'bundle' => 'titre3_txt_summary_option',
      'locked' => '1',
    ),
    'titre4_txt_summary_option' => array(
      'name' => 'Titre 4 + Texte et résumé optionnels',
      'bundle' => 'titre4_txt_summary_option',
      'locked' => '1',
    ),
  );
  return $items;
}
