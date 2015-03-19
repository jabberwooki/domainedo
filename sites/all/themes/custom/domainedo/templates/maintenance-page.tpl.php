<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page while offline.
 *
 * All the available variables are mirrored in html.tpl.php and page.tpl.php.
 * Some may be blank but they are provided for consistency.
 *
 * @see template_preprocess()
 * @see template_preprocess_maintenance_page()
 *
 * @ingroup themeable
 */
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language ?>" lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">

<head>
  <title><?php print $head_title; ?></title>
  <?php print $head; ?>
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <style type="text/css">
  body {
  	margin: 0;
  }
  #page {
	  margin-left: auto;
		margin-right: auto;
		margin-top: 0;
		width: 960px;
  }
  #header {
	  height: 112px;
		background: url(/sites/all/themes/custom/domainedo/images/wide/background_top_wide.gif) no-repeat 322px 0;
  }
  #logo-title {
  	padding-top: 30px;
  }
  #page-title {
	  background: url(/sites/all/themes/custom/domainedo/images/icons/arrow_orange_yellow.png) no-repeat 0 0;
		height: 34px;
		border-bottom: 1px solid black;
		font-family: Lato,arial;
		text-transform: uppercase;
		padding-top: 13px;
		font-weight: bold;
		font-size: 1.8em;
		padding-left: 80px;
  }
  #site-slogan {
  	color: #757575;
  	font-size: 80%;
  	font-weight: bold;
  }
  #content-content {
  	margin-top: 100px;
  	color: #555;
  	text-align: center;
  	font-size: 110%;
  }
  </style>
</head>
<body class="<?php print $classes; ?>">
  <div id="page">
    <div id="header">
      <div id="logo-title">

        <?php if (!empty($logo)): ?>
          <a href="<?php print $base_path; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
            <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
          </a>
        <?php endif; ?>

        <div id="name-and-slogan">
            <div id="site-slogan">domaine départemental d'art et de culture</div>
        </div> <!-- /name-and-slogan -->
      </div> <!-- /logo-title -->

      <?php if (!empty($header)): ?>
        <div id="header-region">
          <?php print $header; ?>
        </div>
      <?php endif; ?>

    </div> <!-- /header -->

    <div id="container" class="clearfix">

      <div id="main" class="column"><div id="main-squeeze">

        <div id="content">
          <?php if (!empty($title)): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
          <?php if (!empty($messages)): print $messages; endif; ?>
          <div id="content-content" class="clearfix">
            <?php print $content; ?>
          </div> <!-- /content-content -->
        </div> <!-- /content -->

      </div></div> <!-- /main-squeeze /main -->

    </div> <!-- /container -->

    <div id="footer-wrapper">
      <div id="footer">
        <?php if (!empty($footer)): print $footer; endif; ?>
      </div> <!-- /footer -->
    </div> <!-- /footer-wrapper -->

  </div> <!-- /page -->

</body>
</html>
