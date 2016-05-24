<?php
/**
 * @file
 * domaine_d_o_retours_sur.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function domaine_d_o_retours_sur_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Retour sur le spectacle "Roberto Zucco"',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '04ca5224-9999-4db3-a2df-5c7e734e8282',
  'type' => 'retour_sur',
  'language' => 'fr',
  'created' => 1462284048,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '18cbb0df-d33a-44ef-907c-3d1fbf2fd6e7',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Les élèves du Lycée Mermoz de Montpellier ont préparé un travail autour de la pièce metus. In eros metus, gravida a, gravida sed, lobortis id, turpis. Ut ultrices, ipsum at venenatis fringilla, sem nulla lacinia tellus, eget aliquet turpis mauris non enim. Nam turpis. Suspendisse lacinia. Curabitur ac tortor ut ipsum egestas elementum. Nunc imperdiet gravida maur.&nbsp;</p>

<blockquote>
<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Maecenas feugiat consequat diam. Maecenas metus. Vivamus diam purus, cursus a, commodo non, facilisis vitae, nulla.</p>
</blockquote>

<p>Aenean dictum lacinia tortor. Nunc iaculis, nibh non iaculis aliquam, orci felis euismod neque, sed ornare massa mauris sed velit. Nulla pretium mi et risus. Fusce mi pede, tempor id, cursus ac, ullamcorper nec, enim. Sed tortor. Curabitur molestie. Duis velit augue, condimentum at, ultrices a, luctus ut, orci. Donec pellentesque egestas eros. Integer cursus, augue in cursus faucibus, eros pede bibendum sem, in tempus tellus justo quis ligula. Etiam eget tortor. Vestibulum rutrum, est ut placerat elementum, lectus nisl aliquam velit, tempor aliquam eros nunc nonummy metus.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Les élèves du Lycée Mermoz de Montpellier ont préparé un travail autour de la pièce metus. In eros metus, gravida a, gravida sed, lobortis id, turpis. Ut ultrices, ipsum at venenatis fringilla, sem nulla lacinia tellus, eget aliquet turpis mauris non enim. Nam turpis. Suspendisse lacinia. Curabitur ac tortor ut ipsum egestas elementum. Nunc imperdiet gravida maur. </p>
<blockquote><p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Maecenas feugiat consequat diam. Maecenas metus. Vivamus diam purus, cursus a, commodo non, facilisis vitae, nulla.</p>
</blockquote>
<p>Aenean dictum lacinia tortor. Nunc iaculis, nibh non iaculis aliquam, orci felis euismod neque, sed ornare massa mauris sed velit. Nulla pretium mi et risus. Fusce mi pede, tempor id, cursus ac, ullamcorper nec, enim. Sed tortor. Curabitur molestie. Duis velit augue, condimentum at, ultrices a, luctus ut, orci. Donec pellentesque egestas eros. Integer cursus, augue in cursus faucibus, eros pede bibendum sem, in tempus tellus justo quis ligula. Etiam eget tortor. Vestibulum rutrum, est ut placerat elementum, lectus nisl aliquam velit, tempor aliquam eros nunc nonummy metus.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_scald_image' => array(),
  'field_scald_gallery' => array(
    'und' => array(
      0 => array(
        'sid' => 763,
        'options' => 'a:0:{}',
      ),
    ),
  ),
  'field_critiques' => array(
    'und' => array(
      0 => array(
        'value' => 5,
        'revision_id' => 5,
      ),
      1 => array(
        'value' => 6,
        'revision_id' => 6,
      ),
    ),
  ),
  'field_edu_contact' => array(
    'und' => array(
      0 => array(
        'value' => '<ul>
	<li>
	<h3><a href="mailto:mblanchaud@domaine-do-34.eu" style="font-size: 13px; line-height: 1.6;">Marion Blanchaud</a></h3>
	</li>
	<li><a href="mailto:jramassamy@domaine-do-34.eu">Jessica Ramassamy</a></li>
</ul>
',
        'format' => 'full_html',
        'safe_value' => '<ul><li>
<h3><a href="mailto:mblanchaud@domaine-do-34.eu" style="font-size: 13px; line-height: 1.6;">Marion Blanchaud</a></h3>
</li>
<li><a href="mailto:jramassamy@domaine-do-34.eu">Jessica Ramassamy</a></li>
</ul>',
      ),
    ),
  ),
  'field_retour_comments' => array(
    'und' => array(
      0 => array(
        'value' => 7,
        'revision_id' => 7,
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
  'disqus' => array(
    'domain' => 'domainedo',
    'status' => TRUE,
    'url' => 'http://local.domain.do/content/retour-sur-le-spectacle-roberto-zucco',
    'title' => 'Retour sur le spectacle &quot;Roberto Zucco&quot;',
    'identifier' => 'node/882',
    'developer' => 1,
  ),
  'name' => 'yvan',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}',
  'date' => '2016-05-03 16:00:48 +0200',
);
  return $nodes;
}
