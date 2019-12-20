<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup templates
 */
?>
<a id="menu-close" href="#body-ddonew" style="">
    <span class="sr-only">Fermer le menu</span>
</a>
<header id="navbar" role="banner"
        class="<?php print $navbar_classes; ?> tpl-first-row">
    <div class="row">
        <div class="col-md-3">
            <ul id="ul-social">
                <li><a class="icon-facebook"
                       href="http://www.facebook.com/domaine.do"
                       onclick="_gaq.push(['_trackEvent', 'socialmedia', 'click', 'facebook',1,true]);"
                       target="_blank"><span class="sr-only">facebook</span></a>
                </li>
                <li><a class="icon-twitter" href="https://twitter.com/domainedo"
                       onclick="_gaq.push(['_trackEvent', 'socialmedia', 'click', 'twitter',1,true]);"
                       target="_blank"><span class="sr-only">Twitter</span></a>
                </li>
                <li><a class="icon-youtube"
                       href="https://www.youtube.com/user/domainedO"
                       onclick="_gaq.push(['_trackEvent', 'socialmedia', 'click', 'youtube',1,true]);"
                       target="_blank"><span class="sr-only">youtube</span></a>
                </li>
                <li><a class="icon-tripadvisor"
                       href="http://www.tripadvisor.fr/Attraction_Review-g187153-d2480803-Reviews-Domaine_d_O-Montpellier_Herault_Languedoc_Roussillon.html"
                       onclick="_gaq.push(['_trackEvent', 'socialmedia', 'click', 'tripadvisor',1,true]);"
                       target="_blank"><span class="sr-only">tripadvisor</span></a>
                </li>
                <li><a class="icon-gplus"
                       href="https://plus.google.com/100786072395186657061/about"
                       onclick="_gaq.push(['_trackEvent', 'socialmedia', 'click', 'gplus',1,true]);"
                       target="_blank"><span class="sr-only">google +</span></a>
                </li>
            </ul>
        </div>
        <div class="col-md-5" id="col-logo">
          <?php if ($logo): ?>
              <h1 id="logo-ddobs">
                  <a class="logo navbar-btn"
                     href="<?php print $front_page; ?>"
                     title="<?php print t("Domaine d'O - Retour accueil"); ?>">
                      <img src="<?php print $logo; ?>"
                           alt="<?php print t("Domaine d'O - Retour accueil"); ?>"/>
                  </a>
              </h1>
          <?php endif; ?>
        </div>
        <div class="col-md-4" id="div-subscritpion">
          <!-- Affichage du bloc domainedo_webpush_user_panel. -->
          <!-- Un bloc vide est affiché si :
          - le navigateur est incompatible Web Push (tous les navigateurs iOS ne le sont pas),
          - le module webpush n'est pas activé
          - si l'utilisateur n'as pas de droit d'activer les notifications. -->
          <div id="webpush-handling">
            <?php
            if ($variables['webpush_compatibility'] && webpush_is_enabled() && user_access('register webpush')) {
              $block = block_load('domainedo_webpush', 'domainedo_webpush_user_panel');
              $render_array = _block_get_renderable_array(_block_render_blocks(array($block)));
              $output = drupal_render($render_array);
              print $output;
            }
            ?>
          </div><!-- Fin affichage du bloc domainedo_webpush_user_panel. -->
            <a id="link-subscritpion" href="/abonnement">Abonnement</a>
        </div>
    </div> <!-- Fin de la première ligne -->

    <div class="row">
        <div class="col-md-12" id="row-menu-nav-search">
            <button type="button" id="mmenu-custom-buttom">
                <span class="mmenu-custom-text">Menu</span>
            </button>

            <!-- Menu principal -->
          <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
              <div class="navbar-collapse collapse" id="navbar-collapse">
                  <nav role="navigation">
                      <div id="initial-main-nav">
                        <?php if (!empty($page['navigation'])): ?>
                          <?php print render($page['navigation']); ?>
                        <?php endif; ?>
                        <?php if (!empty($primary_nav)): ?>
                          <?php print render($primary_nav); ?>
                        <?php endif; ?>
                        <?php if (!empty($secondary_nav)): ?>
                          <?php print render($secondary_nav); ?>
                        <?php endif; ?>
                      </div>
                  </nav>
              </div>
          <?php endif; ?>

            <div id="top-search-icon"></div>
        </div>
    </div>
</header>
<div class="container" id="custom-msg">
  <?php print $messages; ?>
</div>
<!-- Search Region ---------------------------------------------------->
<?php if (!empty($page['search_region'])): ?>
    <div class="container-fluid" id="search-region">
      <?php print render($page['search_region']); ?>
    </div>
<?php endif; ?>
<!-- End of Search Region ------------------------------------------------------->
<!-- MEGA MENU -------------------------------------------------------->
<div id="megamenu">
    <div class="container">
        <div class="row">
                <div class="col-md-4">
                    <div class="megamenu-code">
                        <div id="megamenu-col1"></div>
                    </div>
                </div>
                <div class="col-md-4">
                    <div class="megamenu-code">
                        <div id="megamenu-col2">
                            <ul></ul>
                        </div>
                    </div>
                </div>
                <div class="col-md-4">
                    <div class="megamenu-code">
                        <div id="megamenu-col3"></div>
                    </div>
                </div>
        </div>
    </div>
</div>
<!-- FIN MEGA MENU ------------------------------------------------------------>


<!-- TOP CLASSIC PAGE --------------------------------------------------------->
<?php if (!empty($page['topclassicpage'])): ?>
<div id="topclassicpage">
    <div class="container-fluid no-gutter">
        <div class="row">
            <div class="col-md-12">
                <?php print render($page['topclassicpage']); ?>
            </div>
        </div>
    </div>
</div>
<?php endif; ?>
<!-- FIN TOP CLASSIC PAGE  ---------------------------------------------------->
<div class="main-container <?php print $container_class; ?> <?php if (empty($page['topclassicpage'])) print'no-img-top ';?>">

    <header role="banner" id="page-header">


      <?php print render($page['header']); ?>
    </header> <!-- /#page-header -->

    <div class="row">

        <section class="col-md-8 col-md-offset-2">
          <?php if (!empty($page['highlighted'])): ?>
              <div class="highlighted jumbotron"><?php print render($page['highlighted']); ?></div>
          <?php endif; ?>

            <a id="main-content"></a>
          <?php print render($title_prefix); ?>
          <?php if (!empty($title)): ?>
              <h2 class="page-header"><?php print $title; ?></h2>
          <?php endif; ?>
          <?php print render($title_suffix); ?>
          <?php if (!empty($tabs)): ?>
            <?php print render($tabs); ?>
          <?php endif; ?>
          <?php if (!empty($page['help'])): ?>
            <?php print render($page['help']); ?>
          <?php endif; ?>
          <?php if (!empty($action_links)): ?>
              <ul class="action-links"><?php print render($action_links); ?></ul>
          <?php endif; ?>
          <?php print render($page['content']); ?>
        </section>

    </div>
</div>

<footer class="footer <?php print $container_class; ?>">
    <section id="social-bottom"></section>
  <?php if (!empty($page['footer'])): ?>
    <?php print render($page['footer']); ?>
  <?php endif; ?>
    <div class="row" id="footer-menus">
        <div class="col-md-3 col-sm-6 col-xs-6">
          <?php if (!empty($page['commodity_bottom_one'])): ?>
            <?php print render($page['commodity_bottom_one']); ?>
          <?php endif; ?>
        </div>
        <div class="col-md-3 col-sm-6 col-xs-6">
          <?php if (!empty($page['commodity_bottom_two'])): ?>
            <?php print render($page['commodity_bottom_two']); ?>
          <?php endif; ?>
        </div>
        <div class="col-md-3 col-sm-6 col-xs-12">
            <p id="ddo-title-botton"><strong>Domaine d'O</strong></p>
            <div class="flex-xs">
              <p>178, rue de la Carriérasse<br>34090 Montpellier</p>
              <p>Tél. : 0800 200 165<br>service et appel gratuits</p>
            </div>
        </div>
        <div class="col-md-3 col-sm-6 col-xs-12">
          <div id="text-bottom-ddo">
            <p><a href="http://www.montpellier3m.fr/">
                  <img id="mmm" src="/sites/all/themes/custom/ddobs/less/images/mmm.gif" alt="Montpellier Métropole Méditerranée">
              </a>
            Le domaine d'O est un domaine d'art et de spectacles pluridisciplinaire : <strong>théâtre</strong>, <strong>musique</strong>, <strong>cirque</strong>, <strong>danse</strong>, spectacles <strong>jeune public</strong>. </p><p>Il abrite un amphithéâtre de 1800 places, le théâtre Jean-Claude Carrière de 600 à 1200 places, un bistrot et une pinède de 3 hectares. Le domaine d'O produit une saison culturelle et quatre <strong>festivals</strong> et accueille quatre autres festivals.</p>
          </div>
        </div>
    </div>
</footer>

