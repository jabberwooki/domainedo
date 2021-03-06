<?php

/**
 * @file
 * news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function news_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_custom_ddo|node|news|form';
  $field_group->group_name = 'group_custom_ddo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Custom domainedo',
    'weight' => '20',
    'children' => array(
      0 => 'field_link_more_infos',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Custom domainedo',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-custom-ddo field-group-tab',
        'description' => 'Ne pas saisir d\'information. Ce champ est rempli automatiquement',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_custom_ddo|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_summa_dates|node|news|zoom';
  $field_group->group_name = 'group_event_summa_dates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'zoom';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group event summary and dates',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_date',
      2 => 'field_texte_zoom',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Group event summary and dates',
      'instance_settings' => array(
        'classes' => 'group-event-summa-dates field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_news_zoom_group_event_summa_dates',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_event_summa_dates|node|news|zoom'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grandient_now|node|news|right_now';
  $field_group->group_name = 'group_grandient_now';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'right_now';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Groupe transparence',
    'weight' => '1',
    'children' => array(
      0 => 'group_title_more',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Groupe transparence',
      'instance_settings' => array(
        'id' => 'now-tranparent-gradient',
        'classes' => 'group-grandient-now field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_grandient_now|node|news|right_now'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_img_wrapper|node|news|full';
  $field_group->group_name = 'group_img_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Entoure image',
    'weight' => '1',
    'children' => array(
      0 => 'field_scald_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Entoure image',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-img-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_img_wrapper|node|news|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_more|node|news|right_now';
  $field_group->group_name = 'group_title_more';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'right_now';
  $field_group->parent_name = 'group_grandient_now';
  $field_group->data = array(
    'label' => 'Titre et suite',
    'weight' => '2',
    'children' => array(
      0 => 'field_news_url_target',
      1 => 'title',
      2 => 'node_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Titre et suite',
      'instance_settings' => array(
        'id' => 'group-title-more-now',
        'classes' => 'group-title-more field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_title_more|node|news|right_now'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Custom domainedo');
  t('Entoure image');
  t('Group event summary and dates');
  t('Groupe transparence');
  t('Titre et suite');

  return $field_groups;
}
