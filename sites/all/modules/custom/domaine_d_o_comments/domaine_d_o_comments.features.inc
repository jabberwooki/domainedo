<?php
/**
 * @file
 * domaine_d_o_comments.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function domaine_d_o_comments_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function domaine_d_o_comments_default_entityform_type() {
  $items = array();
  $items['ajout_commentaire'] = entity_import('entityform_type', '{
    "type" : "ajout_commentaire",
    "label" : "Ajouter un commentaire",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "Commenter",
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
      "roles" : { "1" : "1", "3" : "3", "6" : "6", "4" : "4", "2" : "2", "5" : "5" },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "current_type" : "ajout_commentaire",
      "enable_block" : 1
    },
    "weight" : "0",
    "metatags" : [],
    "rdf_mapping" : [],
    "paths" : []
  }');
  return $items;
}
