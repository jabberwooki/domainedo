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

  // Translatables
  // Included for use with string extractors like potx.
  t('Group event summary and dates');

  return $field_groups;
}
