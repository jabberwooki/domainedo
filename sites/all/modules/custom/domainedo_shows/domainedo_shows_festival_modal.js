jQuery(function($) {
  jQuery(window).load(function() {
    jQuery("#myModal").modal("show");
    console.log("Dans domainedo_show_festival_modal.js");
    if (!$(".modal-dialog").length) {
      console.log("Résultats");
      // go to #views-bootstrap-grid-1
      $("html, body").animate(
        {
          scrollTop: $("#views-bootstrap-grid-1").offset().top - 200
        },
        500
      );
    }
  });
});
