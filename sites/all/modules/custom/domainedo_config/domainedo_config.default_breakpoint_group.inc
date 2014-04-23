<?php
/**
 * @file
 * domainedo_config.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function domainedo_config_default_breakpoint_group() {
  $export = array();

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.theme.domainedo.mobile';
  $breakpoints[] = 'breakpoints.theme.domainedo.narrow';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'domainedo';
  $breakpoint_group->name = 'Domaine d\'O';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'theme';
  $breakpoint_group->overridden = 0;
  $export['domainedo'] = $breakpoint_group;

  return $export;
}
