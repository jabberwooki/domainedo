(function ($) {
  Drupal.behaviors.domaine_d_o_comments = {
    attach: function (context, settings) {

      //$("#ajout-commentaire-entityform-edit-form #edit-submit--2").hide(0);
      $("#edit-field-concernant-un-spectacle-und-0-target-id").on('autocompleteSelect', function(event, node) {
        //$("#ajout-commentaire-entityform-edit-form").submit();

        $("#ajout-commentaire-entityform-edit-form #edit-submit--2").val(
          'Commenter ' + '"' +
          $("#edit-field-concernant-un-spectacle-und-0-target-id").val() + '"'
        );
      });
      $("#edit-field-concernant-un-spectacle-und-0-target-id").on('change', function(event, node) {

        $("#ajout-commentaire-entityform-edit-form #edit-submit--2").val(
          'Commenter ' + '"' +
          $("#edit-field-concernant-un-spectacle-und-0-target-id").val() + '"'
        );
      });

    }
  };
}(jQuery))