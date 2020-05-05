/**
 * L'idée de ce script est de créer (avec jquery) un champ select qui oblige l'internaute
 * à choisir parmi un nombre limité d'options. Le choix est ensuite transmis au
 * champ initial sour format numérique. Par ailleurs, à l'initialisation du champ
 * select, on va vérifier la valeur du champ initial pour indiquer quelle option
 * est "selected"
 */
(function ($) {

  Drupal.behaviors.show_age = {
    attach: function (context, settings) {
      console.log("Dans domainedo_show_age.js");
      // on cache l'input des âges
      $("#edit-field-minimum-age-value").addClass("sr-only");
      const default_age = ($("#edit-field-minimum-age-value").val()) ?
        $("#edit-field-minimum-age-value").val(): 18;
      // création d'un nouveau select
      const fake_age = $('<select id="fake-age"></select>').insertAfter("#edit-field-minimum-age-value");
      {
        fake_age
          .append('<option value="18"></option>')
          .append('<option value="0.25">3 mois</option>')
          .append('<option value="0.5">6 mois</option>')
          .append('<option value="0.75">9 mois</option>')
          .append('<option value="1">1 an</option>')
          .append('<option value="2">2 ans</option>')
          .append('<option value="3">3 ans</option>')
          .append('<option value="4">4 ans</option>')
          .append('<option value="5">5 ans</option>')
          .append('<option value="6">6 ans</option>')
          .append('<option value="7">7 ans</option>')
          .append('<option value="8">8 ans</option>')
          .append('<option value="9">9 ans</option>')
          .append('<option value="10">10 ans</option>')
          .append('<option value="11">11 ans</option>')
          .append('<option value="12">12 ans</option>')
          .append('<option value="13">13 ans</option>')
          .append('<option value="14">14 ans</option>')
          .append('<option value="15">15 ans</option>')
          .append('<option value="16">16 ans</option>')
          .append('<option value="17">17 ans</option>')
          .append('<option value="18">18 ans et plus</option>');
        $("#fake-age").val(default_age);
      }
      // On change la valeur du champ initial (#edit-field-minimum-age-value)
      fake_age.on("change", function () {
        $("#edit-field-minimum-age-value").val($(this).children("option:selected").val());
      });

    }
  };
}(jQuery));

