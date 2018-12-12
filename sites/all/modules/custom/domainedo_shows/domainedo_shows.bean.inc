<?php

/**
 * @file
 * domainedo_shows.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function domainedo_shows_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'image_full_show';
  $bean_type->label = 'Image full show';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['image_full_show'] = $bean_type;

  return $export;
}
