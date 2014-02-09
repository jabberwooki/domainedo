<?php
/**
 * @file
 * domainedo_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function domainedo_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_features_date_format_default().
 */
function domainedo_config_features_date_format_default() {
  $fdf_config = array();

  $fdf_config[] = array(
    'dfid' => 36,
    'format' => 'l d F Y - H:i',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 37,
    'format' => 'D d M Y - H:i',
    'type' => 'custom',
    'locked' => 0,
  );
  $fdf_config[] = array(
    'dfid' => 38,
    'format' => 'd/m/y - H:i',
    'type' => 'custom',
    'locked' => 0,
  );
  return $fdf_config;
}
