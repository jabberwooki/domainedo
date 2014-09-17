<?php
/**
 * @file
 * domainedo_multimedia.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function domainedo_multimedia_taxonomy_default_vocabularies() {
  return array(
    'espace_multimedia' => array(
      'name' => 'Espace Multimedia',
      'machine_name' => 'espace_multimedia',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
