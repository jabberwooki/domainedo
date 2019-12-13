jQuery(function($) {
  console.log("Dans domainedo_form.js");
  if ($("#no-more-ticket").length) {
    // le champ spectacle est rempli automatiquement
    $("#edit-field-spectacle-und-0-value").val(
      $(".field-name-title h2").text()
    );

    // on cache les labels et champs inutiles :
    $(".field-name-field-formulaire  > .field-label").hide(0);
    $(".entityform-type-entityform-type  > h2 > a").hide(0);
    $(".form-item-field-spectacle-und-0-value ").addClass("sr-only");

    const link_ask_information = $("<span></span>", {
      text:
        "Soyez les premiers à obtenir des informations si des places se libèrent",
      id: "link_ask_information"
    })
      .appendTo("#no-more-ticket")
      .click(function() {
        jQuery("#modalForm").modal("show");
      });
  }
});
