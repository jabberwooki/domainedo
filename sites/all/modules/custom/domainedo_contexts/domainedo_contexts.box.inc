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
  $box->delta = 'event_home_title';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Titre lien vers les événements en page d\'accueil';
  $box->options = array(
    'body' => array(
      'value' => '<h2 class="h2-event" id="h2-event-home"><a href="evenements">Autres événements</a></h2>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['event_home_title'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'logos_bottom';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'logos et adresse de bas de page';
  $box->options = array(
    'body' => array(
      'value' => '<div id="footer-bottom" style="position:relative;">
<div id="address-bottom">
<h2>Adresse</h2>

<p>domaine d\'O<br />
178, rue de la Carriérasse - 34090 Montpellier<br />
Tél. : 0800 200 165 - appel gratuit depuis un poste fixe</p>
</div>

<div id="partner-bottom">
<p><a href="http://www.montpellier3m.fr" style="font-size: 13px; line-height: 1.6;" target="_blank"><img alt="Montpellier 3M" id="img-logo-mmm-bottom" src="/sites/default/files/images/partenaires/logo-mmm.jpg" class="logo-mmm-bottom" /></a><span style="font-size:13px">&nbsp;</span></p>
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
  $box->title = '';
  $box->description = 'Les logos de haut de page';
  $box->options = array(
    'body' => array(
      'value' => '<div id="logos-top">
<h1><a href="/."><img alt="domaine d\'O" id="logo-domainedo-top" src="/sites/default/files/images/domaine-d-o.png"  /></a> <span style="position:absolute;width:1px;height:1px;top:-1000em;overflow:hidden;">Domaine d\'art et de culture</span></h1>
</div>
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
      'value' => '<ul class="ul-sprite">
	<li class="sprite sprite-facebook"><a href="http://www.facebook.com/domaine.do" onclick="_gaq.push([\'_trackEvent\', \'socialmedia\', \'click\', \'facebook\',1,true]);" target="_blank">facebook</a></li>
	<li class="sprite sprite-twitter"><a href="https://twitter.com/domainedo" onclick="_gaq.push([\'_trackEvent\', \'socialmedia\', \'click\', \'twitter\',1,true]);" target="_blank">Twitter</a></li>
	<li class="sprite sprite-youtube"><a href="https://www.youtube.com/user/domainedO" onclick="_gaq.push([\'_trackEvent\', \'socialmedia\', \'click\', \'youtube\',1,true]);" target="_blank">youtube</a></li>
	<li class="sprite sprite-tripadvisor"><a href="http://www.tripadvisor.fr/Attraction_Review-g187153-d2480803-Reviews-Domaine_d_O-Montpellier_Herault_Languedoc_Roussillon.html" onclick="_gaq.push([\'_trackEvent\', \'socialmedia\', \'click\', \'tripadvisor\',1,true]);" target="_blank">tripadvisor</a></li>
<li class="sprite sprite-gplus"><a href="https://plus.google.com/100786072395186657061/about" onclick="_gaq.push([\'_trackEvent\', \'socialmedia\', \'click\', \'gplus\',1,true]);" target="_blank">google +</a></li>

</ul>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['social_network'] = $box;

  return $export;
}
