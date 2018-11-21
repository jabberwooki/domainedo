jQuery(function($) {
  var container_points;
  var container_shows;
  var nb_points;
  var width_container_points;
  var right_date;
  var date_short_english;
  var td_date;

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
        $("." + $(this).attr('id') ).show(1500);

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

      // Parcours des spectacles
      $(".view-item", $(this)).each(function(num) {
        // récupérer la date sur le premier spectacle
        if(num == 0) {
          date_short_english = $(".date-short-english",$(this)).text();
          td_date = $( "[data-date='" + date_short_english + "']" );
          td_date.attr("data-target", $(container_points).attr('id'));
          // attache l'événement click sur le lien de la cellule concernée
          deleteClickOnDay($("a", td_date));

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

      // affiche le groupe concerné au click sur le td
      td_date.click(function() { //animate({"font-size": "1.5em"},2000).
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

  function deleteClickOnDay(theLink) {
    theLink.click(function() {

      // Cache tous les groupes de spectacles de droite
      $(".group-show-domainedo").hide(0);
      // Scroll to result
      if($(window).width() < 993) {
        $('html,body').animate({
          scrollTop: ($("#calendar-detail-domainedo").offset().top + 130)
        }, 'slow');
      }
      $("." + theLink.parent().parent().parent().attr("data-target")).show(1500);
      return false;
    });
  }
});

