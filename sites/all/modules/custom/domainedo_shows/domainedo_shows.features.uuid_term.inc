<?php
/**
 * @file
 * domainedo_shows.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function domainedo_shows_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Autre',
    'description' => '',
    'format' => 'full_html',
    'weight' => 4,
    'uuid' => '03031174-7151-4f59-b543-bb01eaa2e26c',
    'vocabulary_machine_name' => 'show_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Danse',
    'description' => '',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => '0700d740-5670-414f-a9da-bb51683d29b0',
    'vocabulary_machine_name' => 'show_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Collectif',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0e933375-ebf9-487a-b861-e7eb42c65cc7',
    'vocabulary_machine_name' => 'structure_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Théâtre',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '41660765-78b3-4594-8268-a31c13de64d9',
    'vocabulary_machine_name' => 'show_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Musique',
    'description' => '',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => '4788c317-4e59-459a-bd25-d12161f44c5b',
    'vocabulary_machine_name' => 'show_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Groupe',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '5135cdab-fb7c-49c2-920f-0f075e59bea8',
    'vocabulary_machine_name' => 'structure_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Cirque',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '76f47a31-044e-48da-b5a7-6152c553ce4a',
    'vocabulary_machine_name' => 'show_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Ensemble',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '8661c0fb-af66-460d-9a19-903d5d6f1311',
    'vocabulary_machine_name' => 'structure_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Familles',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'cf7ab63a-8d06-4149-8d32-cf94426ae119',
    'vocabulary_machine_name' => 'audience_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Jeunes',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'dff2c1a5-4cf8-416f-a990-e3863ffcc432',
    'vocabulary_machine_name' => 'audience_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Artiste seul',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f5868ce9-5ba9-4e1b-a77f-780f238754bc',
    'vocabulary_machine_name' => 'structure_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Compagnie',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'fc507780-e65b-42b1-974a-9f226e5ff335',
    'vocabulary_machine_name' => 'structure_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Etudiants',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ff3084e7-9131-4c0c-afb3-3e1b5c849503',
    'vocabulary_machine_name' => 'audience_types',
    'metatags' => array(),
  );
  return $terms;
}
