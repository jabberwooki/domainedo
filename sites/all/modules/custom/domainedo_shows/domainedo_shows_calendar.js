jQuery(function($) {
  var container_points;
  var container_shows;
  var nb_points;
  var width_container_points;
  var right_date;
  var date_short_english;
  var td_date;
  var content_type;

  $(".single-day div.inner").each(function(index) {
    nb_points = $(".view-item", $(this)).length;

    if(nb_points) {

      // création du container des points avec centrage dans la case
      width_container_points = (nb_points > 4) ? 4 : nb_points
      container_points = $("<div></div>",{
        "class": "group-show-points-domainedo group-size-"+ width_container_points,
        "id": "group-show-domainedo-" + index,
      }).appendTo($(this)).click(function() {
        // Cache tous les groupes de spectacles de droite
        $(".group-show-domainedo").hide(0);
        // affiche le groupe concerné
        $("." + $(this).attr('id') ).show(1500);
        $(".selected-day-domainedo").removeClass("selected-day-domainedo");
        $(this).addClass("selected-day-domainedo");

        // Scroll to result
        if($(window).width() < 993) {
          $('html,body').animate({
            scrollTop: ($("#calendar-detail-domainedo").offset().top +130)
          }, 'slow');
        }

      });

      // création d'un groupe avec les spectacles
      container_shows = $("<div></div>",{
        "class": "group-show-domainedo group-show-domainedo-" + index,
      });

      // Parcours des spectacles et/ou des événements
      $(".view-item", $(this)).each(function(num) {
        // récupérer la date sur le premier spectacle
        if(num == 0) {
          date_short_english = $(".date-short-english",$(this)).text();
          td_date = $( ".date-box[data-date='" + date_short_english + "']");
          td_date.attr("data-target", $(container_points).attr('id'));

          // Supprime le lien de la cellule concernée
          td_date.html('<div class="effective-day-caleandar-domainedo">' + td_date.text() + '</div>');

          right_date = $(".date-full-domainedo",$(this)).text();
          right_date = $("<div></div>",{
            "class": "right-date",
            "text": right_date
          }).appendTo(container_shows);
        }
        content_type = $(".content-type", $(this)).text();
        // création des points et placement dans le container de points
        $("<div></div>",{
          "class": "item-show-point-domainedo " + content_type,
        }).appendTo(container_points);

        // Ajout de la class du titre en fonction du type de contenu
        $(".views-field-title a", $(this)).addClass("title-calendar-right-" + content_type);

        // Placement des spectacles dans le container de spectacles et déplacement de ce dernier
        $(this).appendTo(container_shows);
      });

      // affiche le groupe concerné au click sur le td
      td_date.click(function() {
        $(".selected-day-domainedo").removeClass("selected-day-domainedo");
        $(this).addClass("selected-day-domainedo");
        // Cache tous les groupes de spectacles de droite
        $(".group-show-domainedo").hide(0);
        // Scroll to result
        if($(window).width() < 993) {
          $('html,body').animate({
            scrollTop: ($("#calendar-detail-domainedo").offset().top + 130)
          }, 'slow');
        }
        $("." + $(this).attr("data-target")).show(1500);
      });

      // Positionnement du container de spectacles dans la colonne de droite
      container_shows.addClass("group-show-domainedo-" + index).appendTo("#calendar-detail-domainedo");

      // Cache tous les groupes de spectacles de droite
      $(".group-show-domainedo").hide(0);

      // Affiche le premier groupe de spectacles de droite
      $(".group-show-domainedo:first").show(0);

    }
  });
});

