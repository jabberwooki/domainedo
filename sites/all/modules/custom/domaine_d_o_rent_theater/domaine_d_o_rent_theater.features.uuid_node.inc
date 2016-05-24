<?php
/**
 * @file
 * domaine_d_o_rent_theater.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function domaine_d_o_rent_theater_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Location de salles pour événements d\'entreprises à Montpellier',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '56da715c-b0da-4372-aefb-809996fe8b99',
  'type' => 'presentation_location_salles',
  'language' => 'fr',
  'created' => 1458662276,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '187ba8c7-60ea-40b5-a84a-0846cba47832',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Maecenas feugiat consequat diam. Maecenas metus. Vivamus diam purus, cursus a, commodo non, facilisis vitae, nulla. Aenean dictum lacinia tortor. Nunc iaculis, nibh non iaculis aliquam, orci felis euismod neque, sed ornare massa mauris sed velit. Nulla pretium mi et risus. Fusce mi pede, tempor id, cursus ac, ullamcorper nec, enim.&nbsp;</p>
',
        'summary' => '<p>Salle 1200 personnes debout</p>
',
        'format' => 'full_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Maecenas feugiat consequat diam. Maecenas metus. Vivamus diam purus, cursus a, commodo non, facilisis vitae, nulla. Aenean dictum lacinia tortor. Nunc iaculis, nibh non iaculis aliquam, orci felis euismod neque, sed ornare massa mauris sed velit. Nulla pretium mi et risus. Fusce mi pede, tempor id, cursus ac, ullamcorper nec, enim. </p>
',
        'safe_summary' => '<p>Salle 1200 personnes debout</p>
',
      ),
    ),
  ),
  'field_vente_video' => array(
    'und' => array(
      0 => array(
        'sid' => 357,
        'options' => 'a:0:{}',
      ),
    ),
  ),
  'field_vente_salle' => array(
    'und' => array(
      0 => array(
        'target_id' => 879,
      ),
      1 => array(
        'target_id' => 881,
      ),
    ),
  ),
  'field_vente_services' => array(
    'und' => array(
      0 => array(
        'value' => 1,
        'revision_id' => 1,
      ),
      1 => array(
        'value' => 2,
        'revision_id' => 2,
      ),
    ),
  ),
  'field_vente_references' => array(
    'und' => array(
      0 => array(
        'value' => 3,
        'revision_id' => 3,
      ),
      1 => array(
        'value' => 4,
        'revision_id' => 4,
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
  'date' => '2016-03-22 16:57:56 +0100',
);
  return $nodes;
}
