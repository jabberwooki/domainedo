<?php
/**
 * @file
 * domaine_d_o_entrees.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function domaine_d_o_entrees_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Entrée sud',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '479e6c41-ef1f-4e92-9d99-a4441645017e',
  'type' => 'entree',
  'language' => 'fr',
  'created' => 1416933928,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0928f3c0-bb44-47e9-ae35-38a1bbb867d9',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>qsdfqsdf</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>qsdfqsdf</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_geoloc_entry' => array(
    'und' => array(
      0 => array(
        'geom' => 'POINT (3.8415332115478 43.63170548539)',
        'geo_type' => 'point',
        'lat' => '43.631705485390',
        'lon' => 3.841533211548,
        'left' => 3.841533211548,
        'top' => '43.631705485390',
        'right' => 3.841533211548,
        'bottom' => '43.631705485390',
        'geohash' => 'spf8pqvm45qv2c68',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'yvan',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}',
  'date' => '2014-11-25 17:45:28 +0100',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Entrée nord',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'e3cd6aa1-1de7-45cf-a759-d42b3b864000',
  'type' => 'entree',
  'language' => 'fr',
  'created' => 1416933851,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f0c7aad0-a77b-496c-9584-fdd362aad3fd',
  'revision_uid' => 1,
  'body' => array(),
  'field_geoloc_entry' => array(
    'und' => array(
      0 => array(
        'geom' => 'POINT (3.835267571289 43.635991847536)',
        'geo_type' => 'point',
        'lat' => 43.635991847536,
        'lon' => 3.835267571289,
        'left' => 3.835267571289,
        'top' => 43.635991847536,
        'right' => 3.835267571289,
        'bottom' => 43.635991847536,
        'geohash' => 'spf8pr8y04qy2vfw',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'yvan',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}',
  'date' => '2014-11-25 17:44:11 +0100',
);
  return $nodes;
}
