<?php
/**
 * @file
 * domaine_d_o_comments.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function domaine_d_o_comments_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-social_comment-field_commentaire'.
  $field_instances['bean-social_comment-field_commentaire'] = array(
    'bundle' => 'social_comment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'bean',
    'field_name' => 'field_commentaire',
    'label' => 'Commentaire',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 1,
      'mee_enabled' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 31,
    ),
  );

  // Exported field_instance:
  // 'entityform-ajout_commentaire-field_concernant_un_spectacle'.
  $field_instances['entityform-ajout_commentaire-field_concernant_un_spectacle'] = array(
    'bundle' => 'ajout_commentaire',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>Saisissez quelques lettres du titre du spectacle puis choisissez parmi les propositions automatiques</p>
<p class="add-comments-social">Vous pouvez également écrire vos commentaires sur les réseaux du domaine d\'O : </p>
<p class="facebook demo-icon icon-facebook-squared"><a href="https://www.facebook.com/domaine.do/">Facebook</a></p>
<p class="tripadvisor"><a href="https://www.tripadvisor.fr/Attraction_Review-g187153-d2480803-Reviews-Domaine_d_O-Montpellier_Herault_Occitanie.html">Tripadvisor</a></p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'entityform',
    'field_name' => 'field_concernant_un_spectacle',
    'label' => 'Concernant un spectacle',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'hide_ids' => 1,
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<p>Saisissez quelques lettres du titre du spectacle puis choisissez parmi les propositions automatiques</p>
<p class="add-comments-social">Vous pouvez également écrire vos commentaires sur les réseaux du domaine d\'O : </p>
<p class="facebook demo-icon icon-facebook-squared"><a href="https://www.facebook.com/domaine.do/">Facebook</a></p>
<p class="tripadvisor"><a href="https://www.tripadvisor.fr/Attraction_Review-g187153-d2480803-Reviews-Domaine_d_O-Montpellier_Herault_Occitanie.html">Tripadvisor</a></p>');
  t('Commentaire');
  t('Concernant un spectacle');

  return $field_instances;
}
