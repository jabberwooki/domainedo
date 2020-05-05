(function ($) {

  Drupal.behaviors.show_festival = {
    attach: function (context, settings) {
      console.log("Dans domainedo_show_festival_modal.js");
      if (!settings.domainedo_shows.shows_enable) {
        // il faut changer le texte pour expliquer que c'est en cours de programmation
        $(".not-yet-scheduled").text("est en cours de programmation.")
      }
      jQuery("#myModal").modal("show");

      if (!$(".modal-dialog").length) {
        console.log("Résultats");
        // go to #views-bootstrap-grid-1
        if ($("#views-bootstrap-grid-1").length) {
          $("html, body").animate(
            {
              scrollTop: $("#views-bootstrap-grid-1").offset().top - 200
            },
            500
          );
        }
      }
    }
  };
}(jQuery));

