/**
 * L'idée de ce script est de créer (avec jquery) un champ select qui oblige l'internaute
 * à choisir parmi un nombre limité d'options. Le choix est ensuite transmis au
 * champ initial sour format numérique. Par ailleurs, à l'initialisation du champ
 * select, on va vérifier la valeur du champ initial pour indiquer quelle option
 * est "selected"
 */
(function ($) {

  Drupal.behaviors.show_age_filter = {
    attach: function (context, settings) {
      console.log("Dans domainedo_show_age_filter.js");
      // création du wrapper du select
      const select_age_wrapper = $('<div id="select-age-wrapper"></div>').insertAfter(".show-festival-title");
      const title_age_wrapper = $('<h4 id="title-age-wrapper">Spectacles à partir de : </h4>').appendTo(select_age_wrapper);
      // création d'un nouveau select
      const select_age = $('<select id="select-age"></select>').appendTo(select_age_wrapper);
      {
        select_age
          .append('<option value="18">sans limite d\'âge</option>')
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
      }
      //
      const list_show = $(".node-teaser");
      const msg_no_result = $('<h4 class="h3" style="clear:both;">Il n\' y pas de spectacle qui corresponde à la limite d\'âge que vous avez entrée.</h4>').
        insertAfter("#select-age-wrapper").hide();
      select_age.on("change", function () {

        let selected_age = $(this).children("option:selected").val();
        // Sélection de tous les containers de spectacles
        list_show.each(function(){
          let show_age = $(".show-age", $(this)).attr("data-age");

          if (Number(selected_age) < Number(show_age)) $(this).hide(700).removeClass("show-visible");
          else $(this).show(700).addClass("show-visible");
        });
        // Gestion des requêtes sur l'âge sans réponse
        if (!$(".show-visible").length) {
          msg_no_result.show(1500);
        } else {
          msg_no_result.hide(0);
        }
      });

    }
  };
}(jQuery));

