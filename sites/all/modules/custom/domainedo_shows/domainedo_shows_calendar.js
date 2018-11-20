jQuery(function($) {
  var container_points;
  var container_shows;
  var nb_points;
  var width_container_points;
  var right_date;
  $(".single-day div.inner").each(function(index) {
    nb_points = $(".view-item", $(this)).length;

    if(nb_points) {
      // création du container des points avec centrage dans la case
      width_container_points = (nb_points > 6) ? 6 : nb_points
      container_points = $("<div></div>",{
        "class": "group-show-points-domainedo group-size-"+ width_container_points,
        "id": "group-show-domainedo-" + index,
      }).appendTo($(this)).click(function() {
        // Cache tous les groupes de spectacles de droite
        $(".group-show-domainedo").hide(0);
        // affiche le groupe concerné
        $("."+$(this).attr('id')).show(1500);
      });

      // création d'un groupe avec les spectacles
      container_shows = $("<div></div>",{
        "class": "group-show-domainedo group-show-domainedo-" + index,
      });

      // Parcours des spectacles
      $(".view-item", $(this)).each(function(num) {
        // récupérer la date sur le premier spectacle
        if(num == 0) {
          right_date = $(".date-full-domainedo",$(this)).text();
          right_date = $("<div></div>",{
            "class": "right-date",
            "text": right_date
          }).appendTo(container_shows);
        }

        // création des points et placement dans le container de points
        $("<div></div>",{
          "class": "item-show-point-domainedo",
        }).appendTo(container_points);

        // Placement des spectacles dans le container de spectacles et déplacement de ce dernier
        $(this).appendTo(container_shows);
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

/*
jQuery(function($) {
  var container_points;
  $(".single-day .view-item").each(function(index) {
    // création du container des points avec centrage dans la case
    container_points = $("<div></div>",{
      "class": "group-show-domainedo",
    }).appendTo($(this).parent());
    $(this).appendTo(container_points);

    // création des points et placement dans la case du calendrier
    $("<div></div>",{
      "class": "item-show-domainedo",
    }).appendTo($(this).parent());
    $(this).appendTo("#calendar-detail-domainedo");
  });
});*/
