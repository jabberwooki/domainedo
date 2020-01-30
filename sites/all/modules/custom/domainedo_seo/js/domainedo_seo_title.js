/**
 * Created by ubuntu on 27/06/19.
 */

(function($) {
  Drupal.behaviors.ddoSeo = {
    attach: function(context, settings) {
      $("#edit-page-title--2").on("input", function() {
        if (!$("#trop-jc").length) {
          $("<span id=\"trop-jc\">C'est trop ! Souviens toi de l'enseignement de JC...</span>").insertAfter(".counter").hide();
        }
        if ($(this).val().length > 70) {
          if ($(".counter").css("font-weight") != 700) {
            $(".counter").css({
              "font-weight": "bold",
              "font-size": "2em",
              "display": "block",
              "margin-top": "20px",
              "margin-bottom": "7px",
              "color": "red"
            });
            $("#trop-jc").show("500");

          }
        } else {

          if ($(".counter").css("font-weight") == 700) {
            $("#trop-jc").css("display","none");
            $(".counter").css({
              "font-weight": 400,
              "font-size": "1em",
              "margin-top": "0",
              "color": "black"
            });

          }
        }
      });
    }
  };
})(jQuery);
