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
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'search_region',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '0',
        ),
        'bean-reseaux-sociaux-bas' => array(
          'module' => 'bean',
          'delta' => 'reseaux-sociaux-bas',
          'region' => 'footer',
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
  $context->name = 'classic_page';
  $context->description = '';
  $context->tag = 'all layout';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ds_extras-top_classic_page' => array(
          'module' => 'ds_extras',
          'delta' => 'top_classic_page',
          'region' => 'topclassicpage',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('all layout');
  $export['classic_page'] = $context;

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
          'region' => 'commodity_bottom_one',
          'weight' => '-10',
        ),
        'menu-menu-bottom-courtesy' => array(
          'module' => 'menu',
          'delta' => 'menu-bottom-courtesy',
          'region' => 'commodity_bottom_two',
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
  $context->name = 'desktop-no-show';
  $context->description = 'Partout sur le site desktop sauf en page d\'accueil et sur les pages de spectacles';
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
        '~spectacles/*' => '~spectacles/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'sidebar_first',
          'weight' => '-45',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Partout sur le site desktop sauf en page d\'accueil et sur les pages de spectacles');
  t('desktop layout ');
  $export['desktop-no-show'] = $context;

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
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-zoom-block_right_now' => array(
          'module' => 'views',
          'delta' => 'zoom-block_right_now',
          'region' => 'homenow',
          'weight' => '-10',
        ),
        'views-shows-block_quick_acces' => array(
          'module' => 'views',
          'delta' => 'shows-block_quick_acces',
          'region' => 'quickaccess',
          'weight' => '-10',
        ),
        'views-evenements-block_2' => array(
          'module' => 'views',
          'delta' => 'evenements-block_2',
          'region' => 'homeslideshow',
          'weight' => '-10',
        ),
        'views-evenements-block_info_flash' => array(
          'module' => 'views',
          'delta' => 'evenements-block_info_flash',
          'region' => 'infoflash',
          'weight' => '-10',
        ),
        'views-shows-block_1' => array(
          'module' => 'views',
          'delta' => 'shows-block_1',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

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
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('mobile layout');
  $export['mobile-all'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mobile-front';
  $context->description = '';
  $context->tag = 'mobile layout';
  $context->conditions = array(
    'cmd' => array(
      'values' => array(
        1 => 1,
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-zoom-block_right_now' => array(
          'module' => 'views',
          'delta' => 'zoom-block_right_now',
          'region' => 'homenow',
          'weight' => '-10',
        ),
        'views-shows-block_quick_acces' => array(
          'module' => 'views',
          'delta' => 'shows-block_quick_acces',
          'region' => 'quickaccess',
          'weight' => '-10',
        ),
        'views-evenements-block_info_flash' => array(
          'module' => 'views',
          'delta' => 'evenements-block_info_flash',
          'region' => 'infoflash',
          'weight' => '-10',
        ),
        'views-shows-block_1' => array(
          'module' => 'views',
          'delta' => 'shows-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('mobile layout');
  $export['mobile-front'] = $context;

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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'team_page';
  $context->description = '';
  $context->tag = 'all layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'domaine-do/equipe' => 'domaine-do/equipe',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-personnes-block_1' => array(
          'module' => 'views',
          'delta' => 'personnes-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-personnes-block_2' => array(
          'module' => 'views',
          'delta' => 'personnes-block_2',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-personnes-block_3' => array(
          'module' => 'views',
          'delta' => 'personnes-block_3',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-personnes-block_artistique' => array(
          'module' => 'views',
          'delta' => 'personnes-block_artistique',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('all layout');
  $export['team_page'] = $context;

  return $export;
}
