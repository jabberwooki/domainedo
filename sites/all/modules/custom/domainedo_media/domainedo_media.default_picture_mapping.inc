<?php

/**
 * @file
 * domainedo_media.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function domainedo_media_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'En ce moment';
  $picture_mapping->machine_name = 'en_ce_moment';
  $picture_mapping->breakpoint_group = 'ddobs';
  $picture_mapping->mapping = array(
    'breakpoints.theme.ddobs.wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'en-ce-momentbreakpoints_theme_ddobs_wide_1x',
      ),
    ),
    'breakpoints.theme.ddobs.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'en-ce-momentbreakpoints_theme_domainedo_mobile_1x',
      ),
    ),
  );
  $export['en_ce_moment'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Page';
  $picture_mapping->machine_name = 'page';
  $picture_mapping->breakpoint_group = 'ddobs';
  $picture_mapping->mapping = array(
    'breakpoints.theme.ddobs.wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'pagebreakpoints_theme_ddobs_wide_1x',
      ),
    ),
    'breakpoints.theme.ddobs.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'pagebreakpoints_theme_domainedo_mobile_1x',
      ),
    ),
  );
  $export['page'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'show full page';
  $picture_mapping->machine_name = 'show_full_page';
  $picture_mapping->breakpoint_group = 'ddobs';
  $picture_mapping->mapping = array(
    'breakpoints.theme.ddobs.wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'responsive-showbreakpoints_theme_ddobs_wide_1x',
      ),
    ),
    'breakpoints.theme.ddobs.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'responsive-showbreakpoints_theme_domainedo_mobile_1x',
      ),
    ),
  );
  $export['show_full_page'] = $picture_mapping;

  return $export;
}
