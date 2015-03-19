<?php
/**
 * @file
 * domainedo_multimedia.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function domainedo_multimedia_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Photo',
    'description' => '<p>Donec aliquet nibh quis quam porttitor, ut aliquet augue malesuada? Etiam gravida lacus feugiat metus feugiat, at condimentum metus semper. Mauris eget dui fermentum, ornare tellus id, viverra urna.</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '7d2b8c17-f57b-4434-902e-4d4438e03b20',
    'vocabulary_machine_name' => 'espace_multimedia',
    'field_section_image' => array(
      'und' => array(
        0 => array(
          'sid' => 17,
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Vidéo',
    'description' => '<p>Nulla non ante consequat, pellentesque libero vel, varius magna. Donec eget dapibus nunc. Suspendisse tempus, mauris placerat gravida viverra, orci sapien elementum mi, sed aliquet velit diam a est.</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '90f20934-a533-4dc1-9c50-d55fe8997680',
    'vocabulary_machine_name' => 'espace_multimedia',
    'field_section_image' => array(
      'und' => array(
        0 => array(
          'sid' => 17,
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Son',
    'description' => '<p>Aliquam erat volutpat. Duis a justo scelerisque, rutrum libero vel, semper erat. Nulla diam dui, auctor eget augue ut, tempor sollicitudin nibh.</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'c4569b24-3a31-44d0-bbc1-2d85fab29402',
    'vocabulary_machine_name' => 'espace_multimedia',
    'field_section_image' => array(
      'und' => array(
        0 => array(
          'sid' => 17,
        ),
      ),
    ),
    'metatags' => array(),
  );
  return $terms;
}
