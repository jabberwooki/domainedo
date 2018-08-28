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
  $box->title = '';
  $box->description = 'Info spectacles droite';
  $box->options = array(
    'body' => array(
      'value' => '<p>Le domaine d\'O<br />
mois par mois</p>

<div id="div-link-calendar"><a href="/calendar">Le calendrier</a></div>

<p><a href="/calendar"><!-- <p><a href="/spectacles/été/l-été-au-domaine-do">Voir les dates des festivals à venir</a></p> --></a></p>
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
