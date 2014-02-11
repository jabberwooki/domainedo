<?php
/**
 * @file
 * domainedo_contexts.box.inc
 */

/**
 * Implements hook_default_box().
 */
function domainedo_contexts_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'logos_bottom';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'logos et adresse de bas de page';
  $box->options = array(
    'body' => array(
      'value' => '<div id="footer-bottom">
<div id="address-bottom">
<h2>Adresse</h2>

<p>domaine d\'O<br />
178, rue de la Carriérasse - 34090 Montpellier<br />
Tél. : 0800 200 165</p>
</div>

<div id="partner-bottom">
<p>Le domaine d\'O est soutenu par le Conseil général de l\'Hérault et Montpellier Agglomération</p>

<p><a href="http://www.herault.fr" style="line-height: 1.6;" target="_blank"><img alt="Département de l\'Hérault" id="img-logo-34-bottom" src="/sites/default/files/logos/cg34-bas.gif" /></a><img alt="Montpellier Agglomération" id="img-logo-agglo-bottom" src="/sites/default/files/logos/agglo-montpellier-bas.gif" style="height:61px; width:47px" />&nbsp;</p>
</div>
</div>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['logos_bottom'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'logos_top';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Les logos de haut de page';
  $box->options = array(
    'body' => array(
      'value' => '<div id="logos-top">
<h1 id="base-line"><a href="/."><img alt="domaine d\'O" src="/sites/default/files/logos/logo-domaine-do.gif" style="height:38px; width:216px" /></a>domaine départemental d\'art et de culture</h1>
<a href="http://www.herault.fr/" target="_blank"><img alt="Département de l\'Hérault" src="/sites/default/files/logos/cg34.gif" style="height:66px; width:51px" /></a></div>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['logos_top'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'social_network';
  $box->plugin_key = 'simple';
  $box->title = 'Réseaux sociaux';
  $box->description = 'Réseaux sociaux';
  $box->options = array(
    'body' => array(
      'value' => '',
      'format' => 'full_html',
    ),
  );
  $export['social_network'] = $box;

  return $export;
}
