<?php

/**
 * @file
 * domainedo_shows.default_cer_presets.inc
 */

/**
 * Implements hook_default_cer().
 */
function domainedo_shows_default_cer() {
  $export = array();

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*show*field_by*node*structure*field_structure_shows';
  $cnr_obj->enabled = 1;
  $export['node*show*field_by*node*structure*field_structure_shows'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*show*field_festival*node*festival*field_festival_shows';
  $cnr_obj->enabled = 1;
  $export['node*show*field_festival*node*festival*field_festival_shows'] = $cnr_obj;

  return $export;
}
