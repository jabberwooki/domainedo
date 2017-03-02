<?php
/**
 * @file
 * domaine_d_o_articles.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function domaine_d_o_articles_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_article_home|node|article|frontpage_block';
  $field_group->group_name = 'group_article_home';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'frontpage_block';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group article home',
    'weight' => '21',
    'children' => array(
      0 => 'body',
      1 => 'field_scald_image',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group article home',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-article-home field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_article_home|node|article|frontpage_block'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('group article home');

  return $field_groups;
}
