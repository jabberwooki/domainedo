<?php

/**
 * @file
 * news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function news_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'evenements';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Evénements';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Evénements au domaine d\'O';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Field: Contenu: Url de destination */
  $handler->display->display_options['fields']['field_news_url_target']['id'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['table'] = 'field_data_field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['field'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['label'] = '';
  $handler->display->display_options['fields']['field_news_url_target']['element_label_colon'] = FALSE;
  /* Field: Contenu: Lien vers nouvelle fenêtre */
  $handler->display->display_options['fields']['field_new_window']['id'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['table'] = 'field_data_field_new_window';
  $handler->display->display_options['fields']['field_new_window']['field'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['label'] = '';
  $handler->display->display_options['fields']['field_new_window']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_new_window']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_scald_image']['id'] = 'field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['table'] = 'field_data_field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['field'] = 'field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['label'] = '';
  $handler->display->display_options['fields']['field_scald_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scald_image']['type'] = 'list';
  $handler->display->display_options['fields']['field_scald_image']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_scald_image']['delta_offset'] = '0';
  /* Field: Contenu: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Filter criterion: Contenu: Published status */
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
    'news' => 'news',
  );
  /* Filter criterion: Contenu: Date de parution - date de dÃ©but (field_news_publication_date) */
  $handler->display->display_options['filters']['field_news_publication_date_value']['id'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value']['field'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_news_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Contenu: Date de parution - date de fin (field_news_publication_date:value2) */
  $handler->display->display_options['filters']['field_news_publication_date_value2']['id'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['field'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['default_date'] = 'now';

  /* Display: Page-evenement */
  $handler = $view->new_display('page', 'Page-evenement', 'page');
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
  /* Field: Contenu: Url de destination */
  $handler->display->display_options['fields']['field_news_url_target']['id'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['table'] = 'field_data_field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['field'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['label'] = '';
  $handler->display->display_options['fields']['field_news_url_target']['element_label_colon'] = FALSE;
  /* Field: Contenu: Lien vers nouvelle fenêtre */
  $handler->display->display_options['fields']['field_new_window']['id'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['table'] = 'field_data_field_new_window';
  $handler->display->display_options['fields']['field_new_window']['field'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['label'] = '';
  $handler->display->display_options['fields']['field_new_window']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_new_window']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_scald_image']['id'] = 'field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['table'] = 'field_data_field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['field'] = 'field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['label'] = '';
  $handler->display->display_options['fields']['field_scald_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scald_image']['type'] = 'list';
  $handler->display->display_options['fields']['field_scald_image']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_scald_image']['delta_offset'] = '0';
  /* Field: Contenu: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Poids */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'evenements:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['path'] = 'evenements';

  /* Display: Block Flash Info */
  $handler = $view->new_display('block', 'Block Flash Info', 'block_info_flash');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Info Flash';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['label'] = 'Tous les événements';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2 class="title-flash-info">[title]</h2>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'col-md-4';
  /* Field: Contenu: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'col-md-5';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Contenu: Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]" class="more">Plus d\'infos</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'col-md-2 col-md-offset-1';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Poids */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'evenements:page_2';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenu: Published status */
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
    'news' => 'news',
  );
  /* Filter criterion: Contenu: Date de parution - date de dÃ©but (field_news_publication_date) */
  $handler->display->display_options['filters']['field_news_publication_date_value']['id'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value']['field'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_news_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Contenu: Date de parution - date de fin (field_news_publication_date:value2) */
  $handler->display->display_options['filters']['field_news_publication_date_value2']['id'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['field'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['default_date'] = 'now';
  /* Filter criterion: Contenu: Promu en info flash (field_promoted) */
  $handler->display->display_options['filters']['field_promoted_value']['id'] = 'field_promoted_value';
  $handler->display->display_options['filters']['field_promoted_value']['table'] = 'field_data_field_promoted';
  $handler->display->display_options['filters']['field_promoted_value']['field'] = 'field_promoted_value';
  $handler->display->display_options['filters']['field_promoted_value']['value'] = array(
    1 => '1',
  );

  /* Display: Sort Home Slideshow Zoom */
  $handler = $view->new_display('page', 'Sort Home Slideshow Zoom', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Classement des événements';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_news_url_target' => 'field_news_url_target',
    'field_new_window' => 'field_new_window',
    'field_scald_image' => 'field_scald_image',
    'body' => 'body',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_news_url_target' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_new_window' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_scald_image' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
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
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Contenu: Url de destination */
  $handler->display->display_options['fields']['field_news_url_target']['id'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['table'] = 'field_data_field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['field'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['label'] = '';
  $handler->display->display_options['fields']['field_news_url_target']['element_label_colon'] = FALSE;
  /* Field: Contenu: Lien vers nouvelle fenêtre */
  $handler->display->display_options['fields']['field_new_window']['id'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['table'] = 'field_data_field_new_window';
  $handler->display->display_options['fields']['field_new_window']['field'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['label'] = '';
  $handler->display->display_options['fields']['field_new_window']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_new_window']['element_label_colon'] = FALSE;
  /* Field: Contenu: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Draggableviews: Contenu */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['save_button_label'] = 'Enregistrer l\'ordre';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Poids */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenu: Published status */
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
    'article' => 'article',
    'news' => 'news',
  );
  /* Filter criterion: Contenu: Visible zoom diaporama (field_visible_bas_accueil) */
  $handler->display->display_options['filters']['field_visible_bas_accueil_value']['id'] = 'field_visible_bas_accueil_value';
  $handler->display->display_options['filters']['field_visible_bas_accueil_value']['table'] = 'field_data_field_visible_bas_accueil';
  $handler->display->display_options['filters']['field_visible_bas_accueil_value']['field'] = 'field_visible_bas_accueil_value';
  $handler->display->display_options['filters']['field_visible_bas_accueil_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Contenu: Date de parution - date de dÃ©but (field_news_publication_date) */
  $handler->display->display_options['filters']['field_news_publication_date_value']['id'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value']['field'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_news_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Contenu: Date de parution - date de fin (field_news_publication_date:value2) */
  $handler->display->display_options['filters']['field_news_publication_date_value2']['id'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['field'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'admin/settings/sort-home-slideshow-zoom';

  /* Display: Page-Flash-draggable */
  $handler = $view->new_display('page', 'Page-Flash-draggable', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FLASH INFO';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'body',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
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
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Contenu: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Draggableviews: Contenu */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['save_button_label'] = 'Enregistrer l\'ordre';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Poids */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenu: Published status */
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
    'news' => 'news',
  );
  /* Filter criterion: Contenu: Promu en info flash (field_promoted) */
  $handler->display->display_options['filters']['field_promoted_value']['id'] = 'field_promoted_value';
  $handler->display->display_options['filters']['field_promoted_value']['table'] = 'field_data_field_promoted';
  $handler->display->display_options['filters']['field_promoted_value']['field'] = 'field_promoted_value';
  $handler->display->display_options['filters']['field_promoted_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Contenu: Date de parution - date de dÃ©but (field_news_publication_date) */
  $handler->display->display_options['filters']['field_news_publication_date_value']['id'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value']['field'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_news_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Contenu: Date de parution - date de fin (field_news_publication_date:value2) */
  $handler->display->display_options['filters']['field_news_publication_date_value2']['id'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['field'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'admin/settings/sort-flash';

  /* Display: Block home zoom slideshow */
  $handler = $view->new_display('block', 'Block home zoom slideshow', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'zoom';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Voir tous les événements';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
  $handler->display->display_options['style_options']['interval'] = '0';
  $handler->display->display_options['style_options']['navigation'] = 1;
  $handler->display->display_options['style_options']['indicators'] = 1;
  $handler->display->display_options['style_options']['pause'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
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
  /* Field: Contenu: Lien vers nouvelle fenêtre */
  $handler->display->display_options['fields']['field_new_window']['id'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['table'] = 'field_data_field_new_window';
  $handler->display->display_options['fields']['field_new_window']['field'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['label'] = '';
  $handler->display->display_options['fields']['field_new_window']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_new_window']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_scald_image']['id'] = 'field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['table'] = 'field_data_field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['field'] = 'field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['label'] = '';
  $handler->display->display_options['fields']['field_scald_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scald_image']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_scald_image']['type'] = 'zoom';
  $handler->display->display_options['fields']['field_scald_image']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_scald_image']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div>Zoom sur</div>';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'zoom-title-label';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Contenu: Url de destination */
  $handler->display->display_options['fields']['field_news_url_target']['id'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['table'] = 'field_data_field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['field'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['label'] = '';
  $handler->display->display_options['fields']['field_news_url_target']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_url_target']['element_label_colon'] = FALSE;
  /* Field: Contenu: Lien plus d'infos */
  $handler->display->display_options['fields']['field_link_more_infos']['id'] = 'field_link_more_infos';
  $handler->display->display_options['fields']['field_link_more_infos']['table'] = 'field_data_field_link_more_infos';
  $handler->display->display_options['fields']['field_link_more_infos']['field'] = 'field_link_more_infos';
  $handler->display->display_options['fields']['field_link_more_infos']['label'] = '';
  $handler->display->display_options['fields']['field_link_more_infos']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_more_infos']['element_label_colon'] = FALSE;
  /* Field: Contenu: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div id="bottom-ss-home-ddo">
 <div class="views-field-field-link-more-infos">
    [field_link_more_infos]
  </div>
  [field_news_url_target] 
  <div class="views-field-body-in-body">
    [body-summary] 
  </div>
</div>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Poids */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'evenements:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_arguments'] = 'none';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenu: Published status */
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
    'article' => 'article',
    'news' => 'news',
  );
  /* Filter criterion: Contenu: Visible zoom diaporama (field_visible_bas_accueil) */
  $handler->display->display_options['filters']['field_visible_bas_accueil_value']['id'] = 'field_visible_bas_accueil_value';
  $handler->display->display_options['filters']['field_visible_bas_accueil_value']['table'] = 'field_data_field_visible_bas_accueil';
  $handler->display->display_options['filters']['field_visible_bas_accueil_value']['field'] = 'field_visible_bas_accueil_value';
  $handler->display->display_options['filters']['field_visible_bas_accueil_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Contenu: Date de parution - date de dÃ©but (field_news_publication_date) */
  $handler->display->display_options['filters']['field_news_publication_date_value']['id'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value']['field'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_news_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Contenu: Date de parution - date de fin (field_news_publication_date:value2) */
  $handler->display->display_options['filters']['field_news_publication_date_value2']['id'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['field'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['default_date'] = 'now';
  $handler->display->display_options['block_description'] = 'block home events';

  /* Display: Page liste zoom sur */
  $handler = $view->new_display('page', 'Page liste zoom sur', 'page_zoom');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Zoom sur';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '2';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '';
  $handler->display->display_options['pager']['options']['tags']['next'] = '';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '4';
  $handler->display->display_options['style_options']['columns_lg'] = '4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  /* Field: Contenu: Lien vers nouvelle fenêtre */
  $handler->display->display_options['fields']['field_new_window']['id'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['table'] = 'field_data_field_new_window';
  $handler->display->display_options['fields']['field_new_window']['field'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['label'] = '';
  $handler->display->display_options['fields']['field_new_window']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_new_window']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_scald_image']['id'] = 'field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['table'] = 'field_data_field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['field'] = 'field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['label'] = '';
  $handler->display->display_options['fields']['field_scald_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scald_image']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_scald_image']['type'] = 'square';
  $handler->display->display_options['fields']['field_scald_image']['settings'] = array(
    'link' => '1',
  );
  $handler->display->display_options['fields']['field_scald_image']['delta_offset'] = '0';
  /* Field: Contenu: Url de destination */
  $handler->display->display_options['fields']['field_news_url_target']['id'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['table'] = 'field_data_field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['field'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['label'] = '';
  $handler->display->display_options['fields']['field_news_url_target']['element_label_colon'] = FALSE;
  /* Field: Contenu: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Poids */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'evenements:page_3';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenu: Published status */
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
    'article' => 'article',
    'news' => 'news',
  );
  /* Filter criterion: Contenu: Date de parution - date de dÃ©but (field_news_publication_date) */
  $handler->display->display_options['filters']['field_news_publication_date_value']['id'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value']['field'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_news_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Contenu: Date de parution - date de fin (field_news_publication_date:value2) */
  $handler->display->display_options['filters']['field_news_publication_date_value2']['id'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['field'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'zoom-sur';

  /* Display: 2 first Attachment */
  $handler = $view->new_display('attachment', '2 first Attachment', 'attachment_top_zoom');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '6';
  $handler->display->display_options['style_options']['columns_lg'] = '6';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_scald_image']['id'] = 'field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['table'] = 'field_data_field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['field'] = 'field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['label'] = '';
  $handler->display->display_options['fields']['field_scald_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scald_image']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_scald_image']['type'] = 'square';
  $handler->display->display_options['fields']['field_scald_image']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_scald_image']['delta_offset'] = '0';
  /* Field: Contenu: Url de destination */
  $handler->display->display_options['fields']['field_news_url_target']['id'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['table'] = 'field_data_field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['field'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['label'] = '';
  $handler->display->display_options['fields']['field_news_url_target']['element_label_colon'] = FALSE;
  /* Field: Contenu: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Contenu: Lien vers nouvelle fenêtre */
  $handler->display->display_options['fields']['field_new_window']['id'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['table'] = 'field_data_field_new_window';
  $handler->display->display_options['fields']['field_new_window']['field'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['label'] = '';
  $handler->display->display_options['fields']['field_new_window']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_new_window']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Poids */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'evenements:page_3';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenu: Published status */
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
    'article' => 'article',
    'news' => 'news',
  );
  /* Filter criterion: Contenu: Date de parution - date de dÃ©but (field_news_publication_date) */
  $handler->display->display_options['filters']['field_news_publication_date_value']['id'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value']['field'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_news_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Contenu: Date de parution - date de fin (field_news_publication_date:value2) */
  $handler->display->display_options['filters']['field_news_publication_date_value2']['id'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['field'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['default_date'] = 'now';
  $handler->display->display_options['displays'] = array(
    'page_zoom' => 'page_zoom',
    'default' => 0,
    'page' => 0,
    'block_info_flash' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'block_2' => 0,
  );

  /* Display: Sort Zoom page */
  $handler = $view->new_display('page', 'Sort Zoom page', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Classement des événements';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_news_url_target' => 'field_news_url_target',
    'field_new_window' => 'field_new_window',
    'field_scald_image' => 'field_scald_image',
    'body' => 'body',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_news_url_target' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_new_window' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_scald_image' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
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
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Contenu: Url de destination */
  $handler->display->display_options['fields']['field_news_url_target']['id'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['table'] = 'field_data_field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['field'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['label'] = '';
  $handler->display->display_options['fields']['field_news_url_target']['element_label_colon'] = FALSE;
  /* Field: Contenu: Lien vers nouvelle fenêtre */
  $handler->display->display_options['fields']['field_new_window']['id'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['table'] = 'field_data_field_new_window';
  $handler->display->display_options['fields']['field_new_window']['field'] = 'field_new_window';
  $handler->display->display_options['fields']['field_new_window']['label'] = '';
  $handler->display->display_options['fields']['field_new_window']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_new_window']['element_label_colon'] = FALSE;
  /* Field: Contenu: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Draggableviews: Contenu */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['save_button_label'] = 'Enregistrer l\'ordre';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Poids */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenu: Published status */
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
    'article' => 'article',
    'news' => 'news',
  );
  /* Filter criterion: Contenu: Date de parution - date de dÃ©but (field_news_publication_date) */
  $handler->display->display_options['filters']['field_news_publication_date_value']['id'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value']['field'] = 'field_news_publication_date_value';
  $handler->display->display_options['filters']['field_news_publication_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_news_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Contenu: Date de parution - date de fin (field_news_publication_date:value2) */
  $handler->display->display_options['filters']['field_news_publication_date_value2']['id'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['table'] = 'field_data_field_news_publication_date';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['field'] = 'field_news_publication_date_value2';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_news_publication_date_value2']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'admin/settings/sort-zoom-page';
  $translatables['evenements'] = array(
    t('Master'),
    t('Evénements au domaine d\'O'),
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
    t('Page-evenement'),
    t('Block Flash Info'),
    t('Info Flash'),
    t('Tous les événements'),
    t('<h2 class="title-flash-info">[title]</h2>'),
    t('<a href="[path]" class="more">Plus d\'infos</a>'),
    t('Sort Home Slideshow Zoom'),
    t('Classement des événements'),
    t('Page-Flash-draggable'),
    t('FLASH INFO'),
    t('Contenu'),
    t('Block home zoom slideshow'),
    t('zoom'),
    t('Voir tous les événements'),
    t('<div>Zoom sur</div>'),
    t('<div id="bottom-ss-home-ddo">
 <div class="views-field-field-link-more-infos">
    [field_link_more_infos]
  </div>
  [field_news_url_target] 
  <div class="views-field-body-in-body">
    [body-summary] 
  </div>
</div>'),
    t('block home events'),
    t('Page liste zoom sur'),
    t('Zoom sur'),
    t('« first'),
    t('dernier'),
    t('2 first Attachment'),
    t('Sort Zoom page'),
  );
  $export['evenements'] = $view;

  return $export;
}
