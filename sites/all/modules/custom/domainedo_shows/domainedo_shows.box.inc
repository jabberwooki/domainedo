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
      'value' => '<p>Mauris condimentum condimentum nisi molestie mattis. Ut condimentum cursus turpis eget ullamcorper. Integer tincidunt dictum tempor. Maecenas facilisis nunc nec sapien laoreet, a sodales ligula semper. Curabitur sed bibendum tortor.</p>

<p>&nbsp;</p>
',
      'format' => 'full_html',
    ),
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
      'value' => '<p>Curabitur eget nibh laoreet, condimentum leo a, tempor libero. Duis quis neque nec arcu lacinia fermentum.</p>

<p>&nbsp;</p>
',
      'format' => 'full_html',
    ),
  );
  $export['right_shows_infos'] = $box;

  return $export;
}
