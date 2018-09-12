<?php
/**
 * @file
 * feature_lettre_info.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_lettre_info_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'lettres_infos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'lettres infos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'lettres infos';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '< précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Contenu: URL Mailchimp */
  $handler->display->display_options['fields']['field_url_mailchimp']['id'] = 'field_url_mailchimp';
  $handler->display->display_options['fields']['field_url_mailchimp']['table'] = 'field_data_field_url_mailchimp';
  $handler->display->display_options['fields']['field_url_mailchimp']['field'] = 'field_url_mailchimp';
  $handler->display->display_options['fields']['field_url_mailchimp']['label'] = '';
  $handler->display->display_options['fields']['field_url_mailchimp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url_mailchimp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_mailchimp']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url_mailchimp']['type'] = 'link_plain';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_scald_image']['id'] = 'field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['table'] = 'field_data_field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['field'] = 'field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['label'] = '';
  $handler->display->display_options['fields']['field_scald_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_scald_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scald_image']['click_sort_column'] = 'sid';
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
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Contenu: Date d'envoi */
  $handler->display->display_options['fields']['field_date_envoi']['id'] = 'field_date_envoi';
  $handler->display->display_options['fields']['field_date_envoi']['table'] = 'field_data_field_date_envoi';
  $handler->display->display_options['fields']['field_date_envoi']['field'] = 'field_date_envoi';
  $handler->display->display_options['fields']['field_date_envoi']['label'] = '';
  $handler->display->display_options['fields']['field_date_envoi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_envoi']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_envoi']['settings'] = array(
    'format_type' => 'court_sans_heure',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="group-lettre-info">
     <div class="img-lettre-info">
         <a href="[field_url_mailchimp]" target="_blank">[field_scald_image]</a>
     </div>
     <div class="group-title-txt-lettre-info">
        <h3 class="title-event-list h3-lettre-info"><a href="[field_url_mailchimp]" target="_blank">[title]</a></h3>
         <div class="txt-lettre-info">
            [body]
            <div class="send-info-lette-date">Envoyée le : [field_date_envoi]</div>
          </div>
     </div>
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Contenu: Date d&#039;envoi (field_date_envoi) */
  $handler->display->display_options['sorts']['field_date_envoi_value']['id'] = 'field_date_envoi_value';
  $handler->display->display_options['sorts']['field_date_envoi_value']['table'] = 'field_data_field_date_envoi';
  $handler->display->display_options['sorts']['field_date_envoi_value']['field'] = 'field_date_envoi_value';
  $handler->display->display_options['sorts']['field_date_envoi_value']['order'] = 'DESC';
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
    'lettre_info' => 'lettre_info',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'lettres-infos';

  /* Display: Bloc */
  $handler = $view->new_display('block', 'Bloc', 'block_lettres_infos');
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
  $translatables['lettres_infos'] = array(
    t('Master'),
    t('lettres infos'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« first'),
    t('< précédent'),
    t('suivant'),
    t('dernier'),
    t('<div class="group-lettre-info">
     <div class="img-lettre-info">
         <a href="[field_url_mailchimp]" target="_blank">[field_scald_image]</a>
     </div>
     <div class="group-title-txt-lettre-info">
        <h3 class="title-event-list h3-lettre-info"><a href="[field_url_mailchimp]" target="_blank">[title]</a></h3>
         <div class="txt-lettre-info">
            [body]
            <div class="send-info-lette-date">Envoyée le : [field_date_envoi]</div>
          </div>
     </div>
</div>'),
    t('Page'),
    t('Bloc'),
  );
  $export['lettres_infos'] = $view;

  return $export;
}
