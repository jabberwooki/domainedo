<?php
/**
 * @file
 * domainedo_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function domainedo_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all';
  $context->description = 'Toutes les pages';
  $context->tag = 'all layout';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-contact' => array(
          'module' => 'menu',
          'delta' => 'menu-contact',
          'region' => 'user_first',
          'weight' => '-10',
        ),
        'boxes-logos_top' => array(
          'module' => 'boxes',
          'delta' => 'logos_top',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'boxes-logos_bottom' => array(
          'module' => 'boxes',
          'delta' => 'logos_bottom',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Toutes les pages');
  t('all layout');
  $export['all'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'desktop-all';
  $context->description = 'Partout sur le site version "bureau"';
  $context->tag = 'desktop layout ';
  $context->conditions = array(
    'cmd' => array(
      'values' => array(
        2 => 2,
        3 => 3,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-top-courtesy-nav' => array(
          'module' => 'menu',
          'delta' => 'menu-top-courtesy-nav',
          'region' => 'user_first',
          'weight' => '-10',
        ),
        'boxes-social_network' => array(
          'module' => 'boxes',
          'delta' => 'social_network',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'branding',
          'weight' => '-9',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'menu',
          'weight' => '-10',
        ),
        'menu-menu-practicle-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-practicle-menu',
          'region' => 'menu',
          'weight' => '-9',
        ),
        'menu-menu-bottom-courtesy' => array(
          'module' => 'menu',
          'delta' => 'menu-bottom-courtesy',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Partout sur le site version "bureau"');
  t('desktop layout ');
  $export['desktop-all'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front';
  $context->description = 'Page d\'accueil';
  $context->tag = 'desktop layout ';
  $context->conditions = array(
    'cmd' => array(
      'values' => array(
        2 => 2,
        3 => 3,
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Page d\'accueil');
  t('desktop layout ');
  $export['front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mobile-all';
  $context->description = '';
  $context->tag = 'mobile layout';
  $context->conditions = array(
    'cmd' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-contact' => array(
          'module' => 'menu',
          'delta' => 'menu-contact',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'content',
          'weight' => '-9',
        ),
        'menu-menu-practicle-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-practicle-menu',
          'region' => 'content',
          'weight' => '-8',
        ),
        'menu-menu-top-courtesy-nav' => array(
          'module' => 'menu',
          'delta' => 'menu-top-courtesy-nav',
          'region' => 'content',
          'weight' => '-7',
        ),
        'menu-menu-bottom-courtesy' => array(
          'module' => 'menu',
          'delta' => 'menu-bottom-courtesy',
          'region' => 'content',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('mobile layout');
  $export['mobile-all'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'not-front';
  $context->description = 'Toutes les pages sauf l\'accueil';
  $context->tag = 'desktop layout ';
  $context->conditions = array(
    'cmd' => array(
      'values' => array(
        2 => 2,
        3 => 3,
      ),
    ),
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Toutes les pages sauf l\'accueil');
  t('desktop layout ');
  $export['not-front'] = $context;

  return $export;
}
