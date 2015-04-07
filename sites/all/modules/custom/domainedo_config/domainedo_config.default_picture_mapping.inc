<?php
/**
 * @file
 * domainedo_config.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function domainedo_config_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = '';
  $picture_mapping->machine_name = 'domainedo';
  $picture_mapping->breakpoint_group = 'domainedo';
  $picture_mapping->mapping = array(
    'breakpoints.theme.domainedo.mobile' => array(
      '1x' => 'resp_full_img_showbreakpoints_theme_domainedo_mobile_1x',
    ),
    'breakpoints.theme.domainedo.narrow' => array(
      '1x' => 'resp_full_img_showbreakpoints_theme_domainedo_narrow_1x',
    ),
    'breakpoints.theme.domainedo.wide' => array(
      '1x' => '',
    ),
  );
  $export['domainedo'] = $picture_mapping;

  return $export;
}
