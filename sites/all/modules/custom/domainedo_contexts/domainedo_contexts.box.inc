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
      'value' => '<h2 class="h2-event"><a href="evenements">Autres événements</a></h2>',
      'format' => 'full_html',
    ),
  );
  $export['event_home_title'] = $box;

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
<p id="partner-text">Le domaine d\'O est soutenu par le Conseil général de l\'Hérault et Montpellier Agglomération</p>

<p id="partner-images"><a href="http://www.herault.fr" style="line-height: 1.6;" target="_blank"><img alt="Département de l\'Hérault" id="img-logo-34-bottom" src="/sites/all/themes/custom/domainedo/images/logos/cg34-bas.gif" /></a><img alt="Montpellier Agglomération" id="img-logo-agglo-bottom" src="/sites/all/themes/custom/domainedo/images/logos/agglo-montpellier-bas.gif" style="height:61px; width:47px" />&nbsp;</p>
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
<h1><a href="/."><img alt="domaine d\'O" id="logo-domainedo-top" src="/sites/all/themes/custom/domainedo/images/logos/logo-domaine-do.gif" /></a><br />
<span style="color:#757575">domaine départemental d\'art et de culture</span></h1>
<a href="http://www.herault.fr/" target="_blank"><img alt="Département de l\'Hérault" id="cg-top" src="/sites/all/themes/custom/domainedo/images/logos/cg34.gif" /></a></div>
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
            <li class="sprite sprite-facebook"><a target="_blank" onclick="_gaq.push([\'_trackEvent\', \'socialmedia\', \'click\', \'facebook\',1,true]);" href="http://www.facebook.com/domaine.do">facebook</a></li>
            <li class="sprite sprite-twitter"><a target="_blank" onclick="_gaq.push([\'_trackEvent\', \'socialmedia\', \'click\', \'twitter\',1,true]);"href="https://twitter.com/domainedo">Twitter</a></li>
            <li class="sprite sprite-youtube"><a target="_blank" onclick="_gaq.push([\'_trackEvent\', \'socialmedia\', \'click\', \'youtube\',1,true]);" href="https://www.youtube.com/user/domainedO">youtube</a></li>
            <li class="sprite sprite-tripadvisor"><a target="_blank" onclick="_gaq.push([\'_trackEvent\', \'socialmedia\', \'click\', \'tripadvisor\',1,true]);" href="http://www.tripadvisor.fr/Attraction_Review-g187153-d2480803-Reviews-Domaine_d_O-Montpellier_Herault_Languedoc_Roussillon.html">tripadvisor</a></li>
        </ul>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['social_network'] = $box;

  return $export;
}
