<?php
/**
 * @file
 * domainedo_shows.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function domainedo_shows_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'calendar';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = 'Calendrier';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* Field: Contenu: Date(s) */
  $handler->display->display_options['fields']['field_show_dates']['id'] = 'field_show_dates';
  $handler->display->display_options['fields']['field_show_dates']['table'] = 'field_data_field_show_dates';
  $handler->display->display_options['fields']['field_show_dates']['field'] = 'field_show_dates';
  $handler->display->display_options['fields']['field_show_dates']['label'] = '';
  $handler->display->display_options['fields']['field_show_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_show_dates']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_show_dates']['settings'] = array(
    'format_type' => 'calendar_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_show_dates']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_show_dates']['delta_offset'] = '0';
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Sort criterion: Contenu: Date(s) (field_show_dates) */
  $handler->display->display_options['sorts']['field_show_dates_value']['id'] = 'field_show_dates_value';
  $handler->display->display_options['sorts']['field_show_dates_value']['table'] = 'field_data_field_show_dates';
  $handler->display->display_options['sorts']['field_show_dates_value']['field'] = 'field_show_dates_value';
  /* Filter criterion: Contenu: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_show_dates' => 'field_show_dates',
    'field_date' => 'field_date',
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'article' => '#ffffff',
    'page' => '#ffffff',
    'news' => '#ffffff',
    'festival' => '#ffffff',
    'media_tester' => '#ffffff',
    'programmer' => '#ffffff',
    'show' => '#ffffff',
    'structure' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
    'field_data_field_show_dates.field_show_dates_value' => 'field_data_field_show_dates.field_show_dates_value',
  );
  $handler->display->display_options['path'] = 'calendrier/mois';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_show_dates.field_show_dates_value' => 'field_data_field_show_dates.field_show_dates_value',
  );
  $handler->display->display_options['path'] = 'calendrier/semaine';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_show_dates.field_show_dates_value' => 'field_data_field_show_dates.field_show_dates_value',
  );
  $handler->display->display_options['path'] = 'calendrier/jour';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Contenu: Date(s) */
  $handler->display->display_options['fields']['field_show_dates']['id'] = 'field_show_dates';
  $handler->display->display_options['fields']['field_show_dates']['table'] = 'field_data_field_show_dates';
  $handler->display->display_options['fields']['field_show_dates']['field'] = 'field_show_dates';
  $handler->display->display_options['fields']['field_show_dates']['label'] = '';
  $handler->display->display_options['fields']['field_show_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_show_dates']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_show_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_show_dates']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_show_dates']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_show_dates.field_show_dates_value' => 'field_data_field_show_dates.field_show_dates_value',
  );
  $handler->display->display_options['path'] = 'calendrier/annee';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_show_dates.field_show_dates_value' => 'field_data_field_show_dates.field_show_dates_value',
  );

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['display_description'] = 'Bloc des événements à venir';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenu: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_show_dates.field_show_dates_value' => 'field_data_field_show_dates.field_show_dates_value',
  );
  $translatables['calendar'] = array(
    t('Master'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Month'),
    t('Tout'),
    t('Week'),
    t('Day'),
    t('Year'),
    t('Block'),
    t('Upcoming'),
    t('Bloc des événements à venir'),
  );
  $export['calendar'] = $view;

  $view = new view();
  $view->name = 'festivals';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Festivals';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Festivals';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Contenu: Pas de résultat */
  $handler->display->display_options['fields']['field_no_result']['id'] = 'field_no_result';
  $handler->display->display_options['fields']['field_no_result']['table'] = 'field_data_field_no_result';
  $handler->display->display_options['fields']['field_no_result']['field'] = 'field_no_result';
  $handler->display->display_options['fields']['field_no_result']['label'] = '';
  $handler->display->display_options['fields']['field_no_result']['element_label_colon'] = FALSE;
  /* Contextual filter: Contenu: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = 'if (isset($_GET[\'field_festival_target_id\'])) {
  return $_GET[\'field_festival_target_id\'];
}
else {
  return 0;
}';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Contenu: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'festival' => 'festival',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['festivals'] = array(
    t('Master'),
    t('Festivals'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Tout'),
    t('Block'),
  );
  $export['festivals'] = $view;

  $view = new view();
  $view->name = 'programmers';
  $view->description = 'Structures, festivals and other misc. entities';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Programmers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Contenu: Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Contenu: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'festival' => 'festival',
    'programmer' => 'programmer',
    'structure' => 'structure',
  );

  /* Display: Proposé par */
  $handler = $view->new_display('entityreference', 'Proposé par', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'field_logo' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_logo' => 'field_logo',
  );
  $handler->display->display_options['row_options']['separator'] = '';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['programmers'] = array(
    t('Master'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Proposé par'),
  );
  $export['programmers'] = $view;

  $view = new view();
  $view->name = 'shows';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Spectacles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'list';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'list';
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: MIN(Contenu: Date(s) (field_show_dates)) */
  $handler->display->display_options['sorts']['field_show_dates_value']['id'] = 'field_show_dates_value';
  $handler->display->display_options['sorts']['field_show_dates_value']['table'] = 'field_data_field_show_dates';
  $handler->display->display_options['sorts']['field_show_dates_value']['field'] = 'field_show_dates_value';
  $handler->display->display_options['sorts']['field_show_dates_value']['group_type'] = 'min';
  /* Sort criterion: Contenu: Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Contenu: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'show' => 'show',
  );
  /* Filter criterion: Contenu: Date(s) (field_show_dates) */
  $handler->display->display_options['filters']['field_show_dates_value']['id'] = 'field_show_dates_value';
  $handler->display->display_options['filters']['field_show_dates_value']['table'] = 'field_data_field_show_dates';
  $handler->display->display_options['filters']['field_show_dates_value']['field'] = 'field_show_dates_value';
  $handler->display->display_options['filters']['field_show_dates_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_show_dates_value']['default_date'] = 'now';

  /* Display: Tous les spectacles */
  $handler = $view->new_display('page_with_page_title', 'Tous les spectacles', 'list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tous les spectacles au domaine d\'O';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Options avancées',
    ),
    'field_show_type_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Block area */
  $handler->display->display_options['header']['block']['id'] = 'block';
  $handler->display->display_options['header']['block']['table'] = 'views';
  $handler->display->display_options['header']['block']['field'] = 'block';
  $handler->display->display_options['header']['block']['label'] = 'Left info';
  $handler->display->display_options['header']['block']['empty'] = TRUE;
  $handler->display->display_options['header']['block']['block_to_insert'] = 'boxes:left_shows_info';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Shows list filter';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: Block area */
  $handler->display->display_options['header']['block_1']['id'] = 'block_1';
  $handler->display->display_options['header']['block_1']['table'] = 'views';
  $handler->display->display_options['header']['block_1']['field'] = 'block';
  $handler->display->display_options['header']['block_1']['label'] = 'Right info';
  $handler->display->display_options['header']['block_1']['empty'] = TRUE;
  $handler->display->display_options['header']['block_1']['block_to_insert'] = 'boxes:right_shows_infos';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['label'] = 'No result info';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'festivals:block';
  $handler->display->display_options['empty']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Contenu: Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Contenu: Date(s) */
  $handler->display->display_options['fields']['field_show_dates_1']['id'] = 'field_show_dates_1';
  $handler->display->display_options['fields']['field_show_dates_1']['table'] = 'field_data_field_show_dates';
  $handler->display->display_options['fields']['field_show_dates_1']['field'] = 'field_show_dates';
  $handler->display->display_options['fields']['field_show_dates_1']['label'] = '';
  $handler->display->display_options['fields']['field_show_dates_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_show_dates_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_show_dates_1']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_show_dates_1']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_show_dates_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_show_dates_1']['separator'] = '';
  /* Field: Contenu: Vignette du spectacle */
  $handler->display->display_options['fields']['field_thumbnail']['id'] = 'field_thumbnail';
  $handler->display->display_options['fields']['field_thumbnail']['table'] = 'field_data_field_thumbnail';
  $handler->display->display_options['fields']['field_thumbnail']['field'] = 'field_thumbnail';
  $handler->display->display_options['fields']['field_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_thumbnail']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_thumbnail']['type'] = 'list';
  $handler->display->display_options['fields']['field_thumbnail']['settings'] = array(
    'link' => '1',
  );
  $handler->display->display_options['fields']['field_thumbnail']['group_column'] = 'entity_id';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div itemscope="" itemtype="http://schema.org/TheaterEvent" class="microdata">
  <a class="link-title-microdata" href="http://www.domaine-do-34.eu[path]"><h3 class="h3-microdata"
                                                    itemprop="name">[title]</h3>
  </a>

  <div class="group-left" style="position:relative;">
    [field_thumbnail]
    <div class="microdata-under-image">
    <div itemprop="location" itemscope=""
         itemtype="http://schema.org/PerformingArtsTheater">
      <meta itemprop="name" content="Domaine d\'O"/>
      <div itemprop="name">Domaine d\'O</div>
      <link itemprop="sameAs" href="http://www.domaine-do-34.eu/"/>
      <a itemprop="url" href="http://www.domaine-do-34.eu/contact">
        Domaine d\'O
      </a>
       <span itemprop="address" itemscope
             itemtype="http://schema.org/PostalAddress">
            <span itemprop="streetAddress">178 Rue de la Carriérasse,</span>
            <span itemprop="postalCode">34090 </span>
            <span itemprop="addressLocality"> Montpellier</span>,
            <meta itemprop="addressCountry" content="FR"/>France
        </span>
      <span itemprop="telephone">0 800 20 01 65</span>
    </div>
    <div itemprop="offers" itemscope="" itemtype="http://schema.org/Offer">
      <a itemprop="url" href="http://www.domaine-do-34.eu[path]">Voir la fiche complète de [title]</a>
    </div>
   </div>
  </div>
  <div class="group-right">
    <span>[field_show_dates_1]</span>
    <div class="microdata-body"></div>
  </div>

</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Contenu: Réservation */
  $handler->display->display_options['fields']['field_reservation']['id'] = 'field_reservation';
  $handler->display->display_options['fields']['field_reservation']['table'] = 'field_data_field_reservation';
  $handler->display->display_options['fields']['field_reservation']['field'] = 'field_reservation';
  $handler->display->display_options['fields']['field_reservation']['label'] = '';
  $handler->display->display_options['fields']['field_reservation']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenu: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'show' => 'show',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Contenu: Festival (field_festival) */
  $handler->display->display_options['filters']['field_festival_target_id']['id'] = 'field_festival_target_id';
  $handler->display->display_options['filters']['field_festival_target_id']['table'] = 'field_data_field_festival';
  $handler->display->display_options['filters']['field_festival_target_id']['field'] = 'field_festival_target_id';
  $handler->display->display_options['filters']['field_festival_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_festival_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_festival_target_id']['expose']['operator_id'] = 'field_festival_target_id_op';
  $handler->display->display_options['filters']['field_festival_target_id']['expose']['label'] = 'Festival';
  $handler->display->display_options['filters']['field_festival_target_id']['expose']['operator'] = 'field_festival_target_id_op';
  $handler->display->display_options['filters']['field_festival_target_id']['expose']['identifier'] = 'field_festival_target_id';
  $handler->display->display_options['filters']['field_festival_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Contenu: Type de spectacle (field_show_type) */
  $handler->display->display_options['filters']['field_show_type_tid']['id'] = 'field_show_type_tid';
  $handler->display->display_options['filters']['field_show_type_tid']['table'] = 'field_data_field_show_type';
  $handler->display->display_options['filters']['field_show_type_tid']['field'] = 'field_show_type_tid';
  $handler->display->display_options['filters']['field_show_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_show_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_show_type_tid']['expose']['operator_id'] = 'field_show_type_tid_op';
  $handler->display->display_options['filters']['field_show_type_tid']['expose']['label'] = 'Type de spectacle';
  $handler->display->display_options['filters']['field_show_type_tid']['expose']['operator'] = 'field_show_type_tid_op';
  $handler->display->display_options['filters']['field_show_type_tid']['expose']['identifier'] = 'field_show_type_tid';
  $handler->display->display_options['filters']['field_show_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_show_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_show_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_show_type_tid']['vocabulary'] = 'show_types';
  /* Filter criterion: Contenu: Date(s) (field_show_dates) */
  $handler->display->display_options['filters']['field_show_dates_value']['id'] = 'field_show_dates_value';
  $handler->display->display_options['filters']['field_show_dates_value']['table'] = 'field_data_field_show_dates';
  $handler->display->display_options['filters']['field_show_dates_value']['field'] = 'field_show_dates_value';
  $handler->display->display_options['filters']['field_show_dates_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_show_dates_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'spectacles/tous-les-spectacles';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Tous les spectacles';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Accueil */
  $handler = $view->new_display('block', 'Accueil', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Spectacles à l\'affiche';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '3';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '12';
  $handler->display->display_options['style_options']['columns_md'] = '4';
  $handler->display->display_options['style_options']['columns_lg'] = '4';
  $handler->display->display_options['style_options']['column_class'] = 'ddo-show-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'field_data_field_show_dates|field_show_dates_value';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '    <div id="nav-home-slider"><h2 class="block-title">Menu Spectacles</h2>
      
    <nav>
      <ul class="menu-home-slider"><li class="first leaf"><a href="/spectacles/tous-les-spectacles" title="">Tous les spectacles</a></li>
<li class="last leaf"><a href="/calendrier" title="">Calendrier</a></li>
</ul>    </nav>
  </div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenu: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'show' => 'show',
  );
  /* Filter criterion: Contenu: Date(s) (field_show_dates) */
  $handler->display->display_options['filters']['field_show_dates_value']['id'] = 'field_show_dates_value';
  $handler->display->display_options['filters']['field_show_dates_value']['table'] = 'field_data_field_show_dates';
  $handler->display->display_options['filters']['field_show_dates_value']['field'] = 'field_show_dates_value';
  $handler->display->display_options['filters']['field_show_dates_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_show_dates_value']['default_date'] = 'now';
  /* Filter criterion: Contenu: Promu en info flash (field_promoted) */
  $handler->display->display_options['filters']['field_promoted_value']['id'] = 'field_promoted_value';
  $handler->display->display_options['filters']['field_promoted_value']['table'] = 'field_data_field_promoted';
  $handler->display->display_options['filters']['field_promoted_value']['field'] = 'field_promoted_value';
  $handler->display->display_options['filters']['field_promoted_value']['value'] = array(
    1 => '1',
  );

  /* Display: Accueil mobile */
  $handler = $view->new_display('block', 'Accueil mobile', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Spectacles à l\'affiche';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'frontpage_block_mobile';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'field_data_field_show_dates|field_show_dates_value';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'frontpage_block_mobile';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['root_node'] = 'shows';
  $handler->display->display_options['style_options']['item_node'] = 'show';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Contenu: Date(s) */
  $handler->display->display_options['fields']['field_show_dates']['id'] = 'field_show_dates';
  $handler->display->display_options['fields']['field_show_dates']['table'] = 'field_data_field_show_dates';
  $handler->display->display_options['fields']['field_show_dates']['field'] = 'field_show_dates';
  $handler->display->display_options['fields']['field_show_dates']['label'] = 'dates';
  $handler->display->display_options['fields']['field_show_dates']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_show_dates']['alter']['text'] = '<span class="date">[field_show_dates-value]</span>';
  $handler->display->display_options['fields']['field_show_dates']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_show_dates']['alter']['preserve_tags'] = '<date>';
  $handler->display->display_options['fields']['field_show_dates']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_show_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_show_dates']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_show_dates']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_show_dates']['delta_offset'] = '0';
  /* Field: Contenu: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'contenu';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_scald_image']['id'] = 'field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['table'] = 'field_data_field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['field'] = 'field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['label'] = 'image';
  $handler->display->display_options['fields']['field_scald_image']['alter']['text'] = '[field_scald_image]--[field_scald_image-sid]';
  $handler->display->display_options['fields']['field_scald_image']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_scald_image']['type'] = 'list';
  $handler->display->display_options['fields']['field_scald_image']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_scald_image']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_scald_image']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'shows-xml';

  /* Display: Metropole Agenda */
  $handler = $view->new_display('views_data_export', 'Metropole Agenda', 'views_data_export_metropole_agenda');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['separator'] = ';';
  $handler->display->display_options['style_options']['quote'] = 0;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 1;
  $handler->display->display_options['style_options']['newline_replacement'] = '';
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Contenu: Lieu (field_location) */
  $handler->display->display_options['relationships']['field_location_tid']['id'] = 'field_location_tid';
  $handler->display->display_options['relationships']['field_location_tid']['table'] = 'field_data_field_location';
  $handler->display->display_options['relationships']['field_location_tid']['field'] = 'field_location_tid';
  $handler->display->display_options['relationships']['field_location_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Titre (Obligatoire)';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Contenu: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description (Obligatoire - Descriptif complet de l\'activité qui peut gèrer les balises HTML)';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_scald_image']['id'] = 'field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['table'] = 'field_data_field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['field'] = 'field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['label'] = 'Url de l’image (Facultatif - illustration de l\'activité hébergée sur internet - résolution 320x128 PNG)';
  $handler->display->display_options['fields']['field_scald_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scald_image']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_scald_image']['type'] = 'original';
  $handler->display->display_options['fields']['field_scald_image']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_scald_image']['group_column'] = 'entity_id';
  /* Field: Contenu: Lieu */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = 'Nom du Lieu (Facultatif mais doit être renseigné si une localisation est fournie - Peut aussi être le titre de l\'activité)';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_location']['delta_offset'] = '0';
  /* Field: Terme de taxonomie: Géolocalisation */
  $handler->display->display_options['fields']['field_geolocalisation']['id'] = 'field_geolocalisation';
  $handler->display->display_options['fields']['field_geolocalisation']['table'] = 'field_data_field_geolocalisation';
  $handler->display->display_options['fields']['field_geolocalisation']['field'] = 'field_geolocalisation';
  $handler->display->display_options['fields']['field_geolocalisation']['relationship'] = 'field_location_tid';
  $handler->display->display_options['fields']['field_geolocalisation']['label'] = 'Longitude (Facultatif et inutile si la colonne G est complétée)';
  $handler->display->display_options['fields']['field_geolocalisation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geolocalisation']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_geolocalisation']['type'] = 'geofield_lon';
  $handler->display->display_options['fields']['field_geolocalisation']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  $handler->display->display_options['fields']['field_geolocalisation']['group_column'] = 'entity_id';
  /* Field: Terme de taxonomie: Géolocalisation */
  $handler->display->display_options['fields']['field_geolocalisation_1']['id'] = 'field_geolocalisation_1';
  $handler->display->display_options['fields']['field_geolocalisation_1']['table'] = 'field_data_field_geolocalisation';
  $handler->display->display_options['fields']['field_geolocalisation_1']['field'] = 'field_geolocalisation';
  $handler->display->display_options['fields']['field_geolocalisation_1']['relationship'] = 'field_location_tid';
  $handler->display->display_options['fields']['field_geolocalisation_1']['label'] = 'Latitude (Facultatif et inutile si la colonne G est complétée)';
  $handler->display->display_options['fields']['field_geolocalisation_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geolocalisation_1']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_geolocalisation_1']['type'] = 'geofield_lat';
  $handler->display->display_options['fields']['field_geolocalisation_1']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  $handler->display->display_options['fields']['field_geolocalisation_1']['group_column'] = 'entity_id';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Tel fixe (Facultatif)';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Tel mobile (Facultatif)';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Email (Facultatif)';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'Web (Facultatif)';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['label'] = 'Mots clés (Facultatif - Doivent être séparés par des virgules)';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  /* Field: Contenu: Date(s) */
  $handler->display->display_options['fields']['field_show_dates']['id'] = 'field_show_dates';
  $handler->display->display_options['fields']['field_show_dates']['table'] = 'field_data_field_show_dates';
  $handler->display->display_options['fields']['field_show_dates']['field'] = 'field_show_dates';
  $handler->display->display_options['fields']['field_show_dates']['label'] = 'Date de début (JJ/MM/AAAA) (Obligatoire)';
  $handler->display->display_options['fields']['field_show_dates']['alter']['text'] = '<span class="date">[field_show_dates-value]</span>';
  $handler->display->display_options['fields']['field_show_dates']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_show_dates']['alter']['preserve_tags'] = '<date>';
  $handler->display->display_options['fields']['field_show_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_show_dates']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_show_dates']['settings'] = array(
    'format_type' => 'court_sans_heure',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_show_dates']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_show_dates']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_show_dates']['delta_offset'] = '0';
  /* Field: Contenu: Date(s) */
  $handler->display->display_options['fields']['field_show_dates_1']['id'] = 'field_show_dates_1';
  $handler->display->display_options['fields']['field_show_dates_1']['table'] = 'field_data_field_show_dates';
  $handler->display->display_options['fields']['field_show_dates_1']['field'] = 'field_show_dates';
  $handler->display->display_options['fields']['field_show_dates_1']['label'] = 'Heure de départ (HH:MM) (Obligatoire)';
  $handler->display->display_options['fields']['field_show_dates_1']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_show_dates_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_show_dates_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_show_dates_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_show_dates_1']['delta_offset'] = '0';
  /* Field: Contenu: Durée */
  $handler->display->display_options['fields']['field_duration']['id'] = 'field_duration';
  $handler->display->display_options['fields']['field_duration']['table'] = 'field_data_field_duration';
  $handler->display->display_options['fields']['field_duration']['field'] = 'field_duration';
  $handler->display->display_options['fields']['field_duration']['label'] = 'Durée (nombre de minutes) (Obligatoire)';
  $handler->display->display_options['fields']['field_duration']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenu: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'show' => 'show',
  );
  /* Filter criterion: Contenu: Festival (field_festival) */
  $handler->display->display_options['filters']['field_festival_target_id']['id'] = 'field_festival_target_id';
  $handler->display->display_options['filters']['field_festival_target_id']['table'] = 'field_data_field_festival';
  $handler->display->display_options['filters']['field_festival_target_id']['field'] = 'field_festival_target_id';
  $handler->display->display_options['filters']['field_festival_target_id']['value'] = array(
    705 => '705',
  );
  $handler->display->display_options['path'] = 'shows-metropole-agenda.csv';
  $translatables['shows'] = array(
    t('Master'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Tous les spectacles'),
    t('Tous les spectacles au domaine d\'O'),
    t('Left info'),
    t('Shows list filter'),
    t('Right info'),
    t('No result info'),
    t('<div itemscope="" itemtype="http://schema.org/TheaterEvent" class="microdata">
  <a class="link-title-microdata" href="http://www.domaine-do-34.eu[path]"><h3 class="h3-microdata"
                                                    itemprop="name">[title]</h3>
  </a>

  <div class="group-left" style="position:relative;">
    [field_thumbnail]
    <div class="microdata-under-image">
    <div itemprop="location" itemscope=""
         itemtype="http://schema.org/PerformingArtsTheater">
      <meta itemprop="name" content="Domaine d\'O"/>
      <div itemprop="name">Domaine d\'O</div>
      <link itemprop="sameAs" href="http://www.domaine-do-34.eu/"/>
      <a itemprop="url" href="http://www.domaine-do-34.eu/contact">
        Domaine d\'O
      </a>
       <span itemprop="address" itemscope
             itemtype="http://schema.org/PostalAddress">
            <span itemprop="streetAddress">178 Rue de la Carriérasse,</span>
            <span itemprop="postalCode">34090 </span>
            <span itemprop="addressLocality"> Montpellier</span>,
            <meta itemprop="addressCountry" content="FR"/>France
        </span>
      <span itemprop="telephone">0 800 20 01 65</span>
    </div>
    <div itemprop="offers" itemscope="" itemtype="http://schema.org/Offer">
      <a itemprop="url" href="http://www.domaine-do-34.eu[path]">Voir la fiche complète de [title]</a>
    </div>
   </div>
  </div>
  <div class="group-right">
    <span>[field_show_dates_1]</span>
    <div class="microdata-body"></div>
  </div>

</div>'),
    t('Festival'),
    t('Type de spectacle'),
    t('Accueil'),
    t('Spectacles à l\'affiche'),
    t('    <div id="nav-home-slider"><h2 class="block-title">Menu Spectacles</h2>
      
    <nav>
      <ul class="menu-home-slider"><li class="first leaf"><a href="/spectacles/tous-les-spectacles" title="">Tous les spectacles</a></li>
<li class="last leaf"><a href="/calendrier" title="">Calendrier</a></li>
</ul>    </nav>
  </div>'),
    t('Accueil mobile'),
    t('Data export'),
    t('title'),
    t('dates'),
    t('<span class="date">[field_show_dates-value]</span>'),
    t('contenu'),
    t('image'),
    t('[field_scald_image]--[field_scald_image-sid]'),
    t('Metropole Agenda'),
    t('term from field_location'),
    t('Titre (Obligatoire)'),
    t('Description (Obligatoire - Descriptif complet de l\'activité qui peut gèrer les balises HTML)'),
    t('Url de l’image (Facultatif - illustration de l\'activité hébergée sur internet - résolution 320x128 PNG)'),
    t('Nom du Lieu (Facultatif mais doit être renseigné si une localisation est fournie - Peut aussi être le titre de l\'activité)'),
    t('Longitude (Facultatif et inutile si la colonne G est complétée)'),
    t('Latitude (Facultatif et inutile si la colonne G est complétée)'),
    t('Tel fixe (Facultatif)'),
    t('Tel mobile (Facultatif)'),
    t('Email (Facultatif)'),
    t('Web (Facultatif)'),
    t('Mots clés (Facultatif - Doivent être séparés par des virgules)'),
    t('Date de début (JJ/MM/AAAA) (Obligatoire)'),
    t('Heure de départ (HH:MM) (Obligatoire)'),
    t('Durée (nombre de minutes) (Obligatoire)'),
  );
  $export['shows'] = $view;

  return $export;
}
