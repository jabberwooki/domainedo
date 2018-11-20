jQuery(function($) {
  var container_points;
  var nb_points;
  var width_container_points;
  $(".single-day div.inner").each(function(index) {
    nb_points = $(".view-item", $(this)).length;
    if(nb_points) {
      // création du container des points avec centrage dans la case
      width_container_points = (nb_points > 6) ? 6 : nb_points
      container_points = $("<div></div>",{
        "class": "group-show-domainedo group-size-"+ width_container_points,
      }).appendTo($(this));

      // création des points et placement dans le container
      $(".view-item", $(this)).each(function(index) {
        $("<div></div>",{
          "class": "item-show-domainedo",
        }).appendTo(container_points);
        $(this).appendTo("#calendar-detail-domainedo");
      });

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
