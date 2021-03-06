<?php
function rsi_ws_settings_form() {
	// Ticket office location
	$form['rsi_ticket_office'] = array(
			'#type' => 'fieldset',
			'#title' => t('Ticket Office'),
	);
	$form['rsi_ticket_office']['rsi_ws_url'] = array(
			'#type' => 'textfield',
			'#title' => t('Ticket Office URL'),
			'#size' => 100,
			'#default_value' => variable_get('rsi_ws_url', 'http://billetterie.domaine-do-34.eu/'),
	);
	
	// Webservice names
	$form['rsi_webservices'] = array(
			'#type' => 'fieldset',
			'#title' => t('Webservices names'),
	);
	$form['rsi_webservices']['rsi_ws_prog'] = array(
			'#type' => 'textfield',
			'#title' => t('Programmation webservice'),
			'#size' => 25,
			'#default_value' => variable_get('rsi_ws_prog', 'ws_programmation'),
	);
	$form['rsi_webservices']['rsi_ws_show_list_name'] = array(
			'#type' => 'textfield',
			'#title' => t('Shows List webservice'),
			'#size' => 25,
			'#default_value' => variable_get('rsi_ws_show_list_name', 'ws_cat_spectacle'),
	);
	$form['rsi_webservices']['rsi_ws_show_name'] = array(
			'#type' => 'textfield',
			'#title' => t('Show details webservice'),
			'#size' => 25,
			'#default_value' => variable_get('rsi_ws_show_name', 'ws_det_spectacle'),
	);
	$form['rsi_webservices']['rsi_ws_event_name'] = array(
			'#type' => 'textfield',
			'#title' => t('Show\'s event webservice'),
			'#size' => 25,
			'#default_value' => variable_get('rsi_ws_event_name', 'event'),
	);
	
	// Credentials
	$form['rsi_credentials'] = array(
			'#type' => 'fieldset',
			'#title' => t('RSI Webservices access credentials'),
	);
	$form['rsi_credentials']['rsi_login'] = array(
			'#type' => 'textfield',
			'#title' => t('Login'),
			'#size' => 25,
			'#default_value' => variable_get('rsi_login', ''),
	);
	$form['rsi_credentials']['rsi_pass'] = array(
			'#type' => 'textfield',
			'#title' => t('Password'),
			'#size' => 25,
			'#default_value' => variable_get('rsi_pass', ''),
	);
	$form['rsi_credentials']['rsi_client'] = array(
			'#type' => 'textfield',
			'#title' => t('Client number'),
			'#size' => 25,
			'#default_value' => variable_get('rsi_client', ''),
	);
	
	// Colorbox dimensions
	$form['rsi_popup'] = array(
			'#type' => 'fieldset',
			'#title' => t('Colorbox popup dimensions'),
	);
	$form['rsi_popup']['rsi_popup_width'] = array(
			'#type' => 'textfield',
			'#title' => t('Width'),
			'#size' => 5,
			'#default_value' => variable_get('rsi_popup_width', '720'),
	);
	$form['rsi_popup']['rsi_popup_height'] = array(
			'#type' => 'textfield',
			'#title' => t('Height'),
			'#size' => 5,
			'#default_value' => variable_get('rsi_popup_height', '800'),
	);
	
	return system_settings_form($form);
}