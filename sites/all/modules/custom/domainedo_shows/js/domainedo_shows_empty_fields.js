jQuery(function ($) {
  console.log("Dans domainedo_shows_empty_fields.js");
  // Cache le lien vers les spectacles s'il n'y en pas
  if (!$(".node-show").length) {
    $(".field-name-link-shows").hide();
  }
  // cache le lien vers le calendrier si celui-ci n'a pas été modifié

  console.log($(".field-name-field-calendar-archive a").attr("href"));
  if ($(".field-name-field-calendar-archive a").attr("href") == "/calendrier") {
    $(".field-name-field-calendar-archive").hide();
  }

});
