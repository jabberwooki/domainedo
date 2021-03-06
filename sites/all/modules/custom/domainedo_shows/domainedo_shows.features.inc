<?php

/**
 * @file
 * domainedo_shows.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function domainedo_shows_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "cer" && $api == "default_cer_presets") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "scald" && $api == "context_config") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function domainedo_shows_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_custom_breadcrumb_features_default_settings().
 */
function domainedo_shows_custom_breadcrumb_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: fiche_festival.
  $custom_breadcrumbs['fiche_festival'] = array(
    'name' => 'Fiche festival',
    'titles' => 'Spectacles
[current-page:page-title]',
    'paths' => 'spectacles/tous-les-spectacles
<none>',
    'visibility_php' => '',
    'node_type' => 'festival',
    'language' => '',
    'machine_name' => 'fiche_festival',
  );

  // Exported custom breadcrumb: fiche_spectacle.
  $custom_breadcrumbs['fiche_spectacle'] = array(
    'name' => 'Fiche spectacle',
    'titles' => 'Spectacles
Tous les spectacles
[node:title]',
    'paths' => 'spectacles/tous-les-spectacles
spectacles/tous-les-spectacles
<none>',
    'visibility_php' => '',
    'node_type' => 'show',
    'language' => '',
    'machine_name' => 'fiche_spectacle',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_custom_breadcrumbs_views_features_default_settings().
 */
function domainedo_shows_custom_breadcrumbs_views_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: liste_spectacles.
  $custom_breadcrumbs['liste_spectacles'] = array(
    'name' => 'Liste spectacles',
    'titles' => 'Spectacles
Tous les spectacles',
    'paths' => 'spectacles/tous-les-spectacles
<none>',
    'visibility_php' => '',
    'views_path' => 'spectacles/tous-les-spectacles',
    'language' => '',
    'machine_name' => 'liste_spectacles',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_default_entityform_type().
 */
function domainedo_shows_default_entityform_type() {
  $items = array();
  $items['demande_d_information'] = entity_import('entityform_type', '{
    "type" : "demande_d_information",
    "label" : "Demande d\\u0027information",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "full_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "3" : "3", "4" : "4", "2" : "2", "5" : "5", "6" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "enable_block" : 0
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  return $items;
}

/**
 * Implements hook_features_date_format_default().
 */
function domainedo_shows_features_date_format_default() {
  $fdf_config = array();

  $fdf_config[] = array(
    'dfid' => 36,
    'format' => 'l d F Y - H\\hi',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 37,
    'format' => 'D d M Y - H\\hi',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 38,
    'format' => 'd/m/y - H\\hi',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 39,
    'format' => 'l d M - H\\hi',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 40,
    'format' => 'D d F H\\hi',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 41,
    'format' => 'F Y',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 42,
    'format' => 'H\\hi',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 45,
    'format' => 'Y-m-d',
    'type' => 'custom',
    'locked' => 0,
  );
  return $fdf_config;
}

/**
 * Implements hook_features_date_type_default().
 */
function domainedo_shows_features_date_type_default() {
  $fdt_config = array();

  $fdt_config[] = array(
    'is_new' => FALSE,
    'module' => '',
    'type' => 'calendar_time',
    'title' => 'Calendrier (heure)',
    'locked' => 0,
  );
  $fdt_config[] = array(
    'is_new' => FALSE,
    'module' => '',
    'type' => 'court_anglais',
    'title' => 'Court anglais',
    'locked' => 0,
  );
  $fdt_config[] = array(
    'is_new' => FALSE,
    'module' => '',
    'type' => 'heure_seulement',
    'title' => 'Heure seulement',
    'locked' => 0,
  );
  $fdt_config[] = array(
    'is_new' => FALSE,
    'module' => '',
    'type' => 'shows_block',
    'title' => 'Bloc spectacles',
    'locked' => 0,
  );
  $fdt_config[] = array(
    'is_new' => FALSE,
    'module' => '',
    'type' => 'shows_block_mobile',
    'title' => 'Bloc spectacles (mobile)',
    'locked' => 0,
  );
  $fdt_config[] = array(
    'is_new' => FALSE,
    'module' => '',
    'type' => 'shows_list',
    'title' => 'Liste spectacles',
    'locked' => 0,
  );
  return $fdt_config;
}

/**
 * Implements hook_node_info().
 */
function domainedo_shows_node_info() {
  $items = array(
    'festival' => array(
      'name' => t('Festival'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nom'),
      'help' => '',
    ),
    'programmer' => array(
      'name' => t('Programmateur'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nom'),
      'help' => '',
    ),
    'show' => array(
      'name' => t('Spectacle'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => t('<h3 style="color:#FF2400, font-size:2em;" target="_blank">ATTENTION RÉFÉRENCEMENT : Merci de vous référer à la page <a href="https://www.domainedo.fr/optimisation-referencement">https://www.domainedo.fr/optimisation-referencement</a> pour mettre en valeur chaque spectacles sur les moteurs de recherche.  '),
    ),
    'structure' => array(
      'name' => t('Structure'),
      'base' => 'node_content',
      'description' => t('Une structure est une association de professionnels du spectacle. Cela peut être une compagnie, un groupe, un ensemble, un artiste seul.'),
      'has_title' => '1',
      'title_label' => t('Nom'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
