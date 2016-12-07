<?php
/**
 * @file
 * domaine_d_o_entrees.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function domaine_d_o_entrees_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'entrees';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Entrées';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Entrées';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'geofield_map_map';
  $handler->display->display_options['style_options']['data_source'] = 'field_geoloc_entry';
  $handler->display->display_options['style_options']['popup_source'] = 'title';
  $handler->display->display_options['style_options']['geofield_map_zoom'] = '15';
  $handler->display->display_options['style_options']['geofield_map_min_zoom'] = '0';
  $handler->display->display_options['style_options']['geofield_map_max_zoom'] = '0';
  $handler->display->display_options['style_options']['geofield_map_draggable'] = 1;
  $handler->display->display_options['style_options']['geofield_map_streetview_show'] = 1;
  $handler->display->display_options['style_options']['geofield_map_center'] = array(
    'lat' => '',
    'lon' => '',
    'geocode' => 'Find my location',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Nœud: Geolocalisation */
  $handler->display->display_options['fields']['field_geoloc_entry']['id'] = 'field_geoloc_entry';
  $handler->display->display_options['fields']['field_geoloc_entry']['table'] = 'field_data_field_geoloc_entry';
  $handler->display->display_options['fields']['field_geoloc_entry']['field'] = 'field_geoloc_entry';
  $handler->display->display_options['fields']['field_geoloc_entry']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_geoloc_entry']['type'] = 'geofield_map_map';
  $handler->display->display_options['fields']['field_geoloc_entry']['settings'] = array(
    'geofield_map_width' => '100%',
    'geofield_map_height' => '300px',
    'geofield_map_center' => array(
      'lat' => '',
      'lon' => '',
      'geocode' => 'Find my location',
    ),
    'geofield_map_zoom' => '15',
    'geofield_map_min_zoom' => '0',
    'geofield_map_max_zoom' => '0',
    'geofield_map_controltype' => 'default',
    'geofield_map_mtc' => 'standard',
    'geofield_map_pancontrol' => 1,
    'geofield_map_maptype' => 'map',
    'geofield_map_baselayers_map' => 1,
    'geofield_map_baselayers_satellite' => 1,
    'geofield_map_baselayers_hybrid' => 1,
    'geofield_map_baselayers_physical' => 0,
    'geofield_map_scale' => 0,
    'geofield_map_overview' => 0,
    'geofield_map_overview_opened' => 0,
    'geofield_map_scrollwheel' => 0,
    'geofield_map_draggable' => 0,
    'geofield_map_streetview_show' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'entree' => 'entree',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Entrees';
  $translatables['entrees'] = array(
    t('Master'),
    t('Entrées'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Geolocalisation'),
    t('Block'),
    t('Entrees'),
  );
  $export['entrees'] = $view;

  return $export;
}
