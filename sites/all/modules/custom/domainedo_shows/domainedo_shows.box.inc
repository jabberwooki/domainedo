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
  $box->delta = 'left_shows_info';
  $box->plugin_key = 'simple';
  $box->title = 'En ce moment';
  $box->description = 'Info spectacles gauche';
  $box->options = array(
    'body' => array(
      'value' => '<p>C\'est le <strong>Printemps des comédiens</strong> du 03 au 29 juin</p>

<p><a href="spectacles/%C3%A9t%C3%A9/l-%C3%A9t%C3%A9-au-domaine-do">Voir les dates des festivals à venir</a></p>

<p>&nbsp;</p>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['left_shows_info'] = $box;

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
