<?php
/**
 * @file
 * domainedo_contexts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function domainedo_contexts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
