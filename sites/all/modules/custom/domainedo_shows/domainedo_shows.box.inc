<?php
/**
 * @file
 * domainedo_shows.box.inc
 */

/**
 * Implements hook_default_box().
 */
function domainedo_shows_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'right_shows_infos';
  $box->plugin_key = 'simple';
  $box->title = 'Calendrier et archive';
  $box->description = 'Info spectacles droite';
  $box->options = array(
    'body' => array(
      'value' => '<p><a class="link_calendar" href="/calendrier">Calendrier et archives &gt;</a></p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['right_shows_infos'] = $box;

  return $export;
}
