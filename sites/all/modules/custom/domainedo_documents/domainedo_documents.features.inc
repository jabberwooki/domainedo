<?php
/**
 * @file
 * domainedo_documents.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function domainedo_documents_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function domainedo_documents_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_custom_breadcrumbs_views_features_default_settings().
 */
function domainedo_documents_custom_breadcrumbs_views_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: espace_pro_documents_presse.
  $custom_breadcrumbs['espace_pro_documents_presse'] = array(
    'name' => 'espace-pro/documents-presse',
    'titles' => 'Espace Pro
[current-page:page-title]',
    'paths' => 'espace-pro
<none>',
    'visibility_php' => '',
    'views_path' => 'espace-pro/documents-presse',
    'language' => '',
    'machine_name' => 'espace_pro_documents_presse',
  );

  // Exported custom breadcrumb: espace_pro_documents_techniques.
  $custom_breadcrumbs['espace_pro_documents_techniques'] = array(
    'name' => 'espace-pro/documents-techniques',
    'titles' => 'Espace Pro
[current-page:page-title]',
    'paths' => 'espace-pro
<none>',
    'visibility_php' => '',
    'views_path' => 'espace-pro/documents-techniques',
    'language' => '',
    'machine_name' => 'espace_pro_documents_techniques',
  );

  // Exported custom breadcrumb: espace_pro_relations_publiques.
  $custom_breadcrumbs['espace_pro_relations_publiques'] = array(
    'name' => 'espace-pro/relations-publiques',
    'titles' => 'Espace Pro
[current-page:page-title]',
    'paths' => 'espace-pro
<none>',
    'visibility_php' => '',
    'views_path' => 'espace-pro/relations-publiques',
    'language' => '',
    'machine_name' => 'espace_pro_relations_publiques',
  );

  // Exported custom breadcrumb: pro_space_view.
  $custom_breadcrumbs['pro_space_view'] = array(
    'name' => 'Espace Pro',
    'titles' => 'Espace Pro',
    'paths' => '<none>',
    'visibility_php' => '',
    'views_path' => 'espace-pro',
    'language' => '',
    'machine_name' => 'pro_space_view',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_node_info().
 */
function domainedo_documents_node_info() {
  $items = array(
    'press_document' => array(
      'name' => t('Document Presse'),
      'base' => 'node_content',
      'description' => t('Documents à l\'attention de la presse (dossiers, ...).'),
      'has_title' => '1',
      'title_label' => t('Intitulé'),
      'help' => '',
    ),
    'relpub_document' => array(
      'name' => t('Document RP'),
      'base' => 'node_content',
      'description' => t('Documents à l\'attention des enseignants (Relations publiques).'),
      'has_title' => '1',
      'title_label' => t('Intitulé'),
      'help' => '',
    ),
    'tech_document' => array(
      'name' => t('Document technique'),
      'base' => 'node_content',
      'description' => t('Fiches techniques, plans de salle, description du matériel pour les différentes zones de spectacles du domaine (Parc, théatre, amphithéâtre, château).'),
      'has_title' => '1',
      'title_label' => t('Intitulé'),
      'help' => '',
    ),
  );
  return $items;
}
