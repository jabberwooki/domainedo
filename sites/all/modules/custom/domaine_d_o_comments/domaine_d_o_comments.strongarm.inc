<?php
/**
 * @file
 * domaine_d_o_comments.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function domaine_d_o_comments_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entityform_block_types';
  $strongarm->value = array(
    0 => 'ajout_commentaire',
  );
  $export['entityform_block_types'] = $strongarm;

  return $export;
}
