<?php
/**
 * @file
 * domainedo_documents.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function domainedo_documents_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'documents';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Documents';
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
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'list';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'list';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Pas de document disponible actuellement.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Contenu: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenu: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Documents techniques */
  $handler = $view->new_display('page_with_page_title', 'Documents techniques', 'page_with_page_title_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Documents techniques';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Options avancées',
    ),
    'field_described_location_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
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
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_tech_document_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'list';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'list';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Intro rubrique Technique';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Texte d\'intro de la rubrique technique';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Contenu: Catégorie */
  $handler->display->display_options['fields']['field_tech_document_type']['id'] = 'field_tech_document_type';
  $handler->display->display_options['fields']['field_tech_document_type']['table'] = 'field_data_field_tech_document_type';
  $handler->display->display_options['fields']['field_tech_document_type']['field'] = 'field_tech_document_type';
  $handler->display->display_options['fields']['field_tech_document_type']['label'] = '';
  $handler->display->display_options['fields']['field_tech_document_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Contenu: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'tech_document' => 'tech_document',
  );
  /* Filter criterion: Contenu: Lieu concerné (field_described_location) */
  $handler->display->display_options['filters']['field_described_location_tid']['id'] = 'field_described_location_tid';
  $handler->display->display_options['filters']['field_described_location_tid']['table'] = 'field_data_field_described_location';
  $handler->display->display_options['filters']['field_described_location_tid']['field'] = 'field_described_location_tid';
  $handler->display->display_options['filters']['field_described_location_tid']['value'] = array(
    29 => '29',
  );
  $handler->display->display_options['filters']['field_described_location_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_described_location_tid']['expose']['operator_id'] = 'field_described_location_tid_op';
  $handler->display->display_options['filters']['field_described_location_tid']['expose']['label'] = 'Lieu concerné';
  $handler->display->display_options['filters']['field_described_location_tid']['expose']['operator'] = 'field_described_location_tid_op';
  $handler->display->display_options['filters']['field_described_location_tid']['expose']['identifier'] = 'field_described_location_tid';
  $handler->display->display_options['filters']['field_described_location_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_described_location_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_described_location_tid']['vocabulary'] = 'show_locations';
  $handler->display->display_options['path'] = 'espace-pro/documents-techniques';

  /* Display: Documents Relations Publiques */
  $handler = $view->new_display('page_with_page_title', 'Documents Relations Publiques', 'page_with_page_title_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Documents Relations Publiques';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Options avancées',
    ),
    'field_relpub_document_type_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Intro rubrique RP';
  $handler->display->display_options['header']['area']['content'] = 'Texte d\'intro de la rubrique Relations Publiques.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
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
    'relpub_document' => 'relpub_document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Contenu: Catégorie (field_relpub_document_type) */
  $handler->display->display_options['filters']['field_relpub_document_type_value']['id'] = 'field_relpub_document_type_value';
  $handler->display->display_options['filters']['field_relpub_document_type_value']['table'] = 'field_data_field_relpub_document_type';
  $handler->display->display_options['filters']['field_relpub_document_type_value']['field'] = 'field_relpub_document_type_value';
  $handler->display->display_options['filters']['field_relpub_document_type_value']['value'] = array(
    'dossier' => 'dossier',
  );
  $handler->display->display_options['filters']['field_relpub_document_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_relpub_document_type_value']['expose']['operator_id'] = 'field_relpub_document_type_value_op';
  $handler->display->display_options['filters']['field_relpub_document_type_value']['expose']['label'] = 'Type de document';
  $handler->display->display_options['filters']['field_relpub_document_type_value']['expose']['operator'] = 'field_relpub_document_type_value_op';
  $handler->display->display_options['filters']['field_relpub_document_type_value']['expose']['identifier'] = 'field_relpub_document_type_value';
  $handler->display->display_options['filters']['field_relpub_document_type_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_relpub_document_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'espace-pro/relations-publiques';

  /* Display: Documents Presse */
  $handler = $view->new_display('page_with_page_title', 'Documents Presse', 'page_with_page_title_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Documents presse';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Options avancées',
    ),
    'field_press_document_type_value' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Intro rubrique Presse';
  $handler->display->display_options['header']['area']['content'] = 'Texte d\'intro de la rubrique Presse.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
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
    'press_document' => 'press_document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'espace-pro/documents-presse';
  $translatables['documents'] = array(
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
    t('Pas de document disponible actuellement.'),
    t('Documents techniques'),
    t('Intro rubrique Technique'),
    t('Texte d\'intro de la rubrique technique'),
    t('Lieu concerné'),
    t('Documents Relations Publiques'),
    t('Intro rubrique RP'),
    t('Texte d\'intro de la rubrique Relations Publiques.'),
    t('Type de document'),
    t('Documents Presse'),
    t('Documents presse'),
    t('Intro rubrique Presse'),
    t('Texte d\'intro de la rubrique Presse.'),
  );
  $export['documents'] = $view;

  $view = new view();
  $view->name = 'spaces';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Espace Pro';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'section';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'section';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_0'] = 'full';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_1'] = 'full';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_2'] = 'full';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_3'] = 'full';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_4'] = 'full';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_5'] = 'full';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_6'] = 'full';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_7'] = 'full';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_8'] = 'full';
  $handler->display->display_options['row_options']['alternating_fieldset']['item_9'] = 'full';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Texte d\'intro';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Terme de taxonomie: Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Sort criterion: Vocabulaire de taxonomie: Poids */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Filter criterion: Vocabulaire de taxonomie: Nom système */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'espace_pro' => 'espace_pro',
  );

  /* Display: Rubriques Pro */
  $handler = $view->new_display('page_with_page_title', 'Rubriques Pro', 'page_with_page_title_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Espace Pro';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Texte d\'intro';
  $handler->display->display_options['header']['area']['content'] = 'Texte d\'introduction de l\'espace Pro.

Morbi elementum augue eleifend, lacinia quam a, tincidunt mauris. Mauris consequat tristique risus ut interdum. Pellentesque vitae elit quis orci facilisis hendrerit at eu arcu. Nulla ultricies, massa vel aliquam feugiat, eros dui malesuada massa, et tincidunt ligula leo ac tellus. Nunc eu sollicitudin velit. Vivamus et fringilla nibh, ac rutrum ante nullam.
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['path'] = 'espace-pro';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Espace Pro';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'menu-top-courtesy-nav';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Rubriques Multimedia */
  $handler = $view->new_display('page_with_page_title', 'Rubriques Multimedia', 'page_with_page_title_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Espace Multimedia';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Texte d\'intro';
  $handler->display->display_options['header']['area']['content'] = 'Texte d\'introduction de l\'espace Multimedia.

Suspendisse dapibus nisl nec nibh mattis rhoncus. Proin mattis et lectus ac mollis. Morbi vulputate, sem cursus ultricies cursus, metus nibh euismod risus, in laoreet elit dolor posuere tortor. Nunc ornare leo in odio rhoncus, at vestibulum dui porta. Donec porta; diam sed pellentesque pretium, tellus libero rhoncus ante, ut ultrices sem dui eu odio? nullam.
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Vocabulaire de taxonomie: Nom système */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'espace_multimedia' => 'espace_multimedia',
  );
  $handler->display->display_options['path'] = 'espace-multimedia';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Espace multimedia';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'menu-top-courtesy-nav';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['spaces'] = array(
    t('Master'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Texte d\'intro'),
    t('Rubriques Pro'),
    t('Espace Pro'),
    t('Texte d\'introduction de l\'espace Pro.

Morbi elementum augue eleifend, lacinia quam a, tincidunt mauris. Mauris consequat tristique risus ut interdum. Pellentesque vitae elit quis orci facilisis hendrerit at eu arcu. Nulla ultricies, massa vel aliquam feugiat, eros dui malesuada massa, et tincidunt ligula leo ac tellus. Nunc eu sollicitudin velit. Vivamus et fringilla nibh, ac rutrum ante nullam.
'),
    t('Rubriques Multimedia'),
    t('Espace Multimedia'),
    t('Texte d\'introduction de l\'espace Multimedia.

Suspendisse dapibus nisl nec nibh mattis rhoncus. Proin mattis et lectus ac mollis. Morbi vulputate, sem cursus ultricies cursus, metus nibh euismod risus, in laoreet elit dolor posuere tortor. Nunc ornare leo in odio rhoncus, at vestibulum dui porta. Donec porta; diam sed pellentesque pretium, tellus libero rhoncus ante, ut ultrices sem dui eu odio? nullam.
'),
  );
  $export['spaces'] = $view;

  return $export;
}
