<?php

/**
 * @file
 * domaine_d_o_rent_theater.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function domaine_d_o_rent_theater_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|lieu_location|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'lieu_location';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'back_rent' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'contact_location' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|lieu_location|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|presentation_location_salles|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'presentation_location_salles';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'contact_location' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'menu_location' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|presentation_location_salles|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function domaine_d_o_rent_theater_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'contact_location';
  $ds_field->label = 'Contact location';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div class="encart-contact-vente">
<h3 class="titre-contact-vente">Contact</h3>

<p>Aurélien Arnaud<br />
04 67 67 31 24<br />
06 74 83 66 92<br />
<a href="mailto:aarnaud@domaine-do-34.eu">aarnaud@domaine-do-34.eu</a></p>
</div>
',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['contact_location'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'menu_location';
  $ds_field->label = 'menu location';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'presentation_location_salles|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div class="encart-contact-vente">
<nav>
<ul>
	<li><a href="#lieux-location">Présentation des espaces</a></li>
	<li><a href="#lieux-services">Les services</a></li>
	<li><a href="#lieux-references">Ils nous ont fait confiance</a></li>
</ul>
</nav>
</div>
',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['menu_location'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function domaine_d_o_rent_theater_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|lieu_location|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'lieu_location';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'body',
        2 => 'field_loc_gallerie',
      ),
      'right' => array(
        1 => 'back_rent',
        3 => 'group_contact_fixed',
        4 => 'contact_location',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'back_rent' => 'right',
      'field_loc_gallerie' => 'left',
      'group_contact_fixed' => 'right',
      'contact_location' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|lieu_location|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|lieu_location|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'lieu_location';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_loc_vignette',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'field_loc_vignette' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|lieu_location|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|presentation_location_salles|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'presentation_location_salles';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'body',
        2 => 'field_vente_video',
        4 => 'group_lieux',
        5 => 'field_vente_salle',
        6 => 'sharethis',
        7 => 'group_services_location',
        8 => 'group_references_location',
        9 => 'field_vente_services',
        11 => 'field_vente_references',
      ),
      'right' => array(
        1 => 'menu_location',
        3 => 'contact_location',
        10 => 'group_contact_fixed',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'menu_location' => 'right',
      'field_vente_video' => 'left',
      'contact_location' => 'right',
      'group_lieux' => 'left',
      'field_vente_salle' => 'left',
      'sharethis' => 'left',
      'group_services_location' => 'left',
      'group_references_location' => 'left',
      'field_vente_services' => 'left',
      'group_contact_fixed' => 'right',
      'field_vente_references' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|presentation_location_salles|default'] = $ds_layout;

  return $export;
}
