<?php
/**
 * @file
 * domainedo_dev.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function domainedo_dev_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
