jQuery(function($) {
  var
    from_date,
    to_date,
    from_year_date,
    to_year_date,
    msg_date,
    elt_date,
    current_url,
    from_date_like_to,
    to_date_like_to;
  var elt_date_like_to = [];

  manageShowDates();
  manageShowLikeToDates();
  manageAnchors();

  function manageShowDates() {
    $(".all-dates").each(function(){
      if($(".date-display-single",$(this)).length > 1) {
        from_date = $(".date-display-single:first",$(this)).attr("content");
        to_date = $(".date-display-single:last",$(this)).attr("content");

        from_year_date = from_date.substring(0, 4);
        to_year_date = to_date.substring(0, 4);

        from_date = new Date(from_date);
        to_date = new Date(to_date);

        msg_date =
          customGetDate(from_date) + "/" + customGetMonth(from_date) + "/" + from_year_date +
          " > " + customGetDate(to_date) + "/" + customGetMonth(to_date) + "/" + to_year_date;

        $(".field-name-field-show-dates", $(this)).html("");

        elt_date = $("<div></div>",
          {
            "class": "field-name-field-show-dates",
            "html": '<div class="js-div-date"><span class="date-display-single">' + msg_date + '</span></div>',
          });
        $("#block-ds-extras-image-full-show .field-name-field-festival").after(elt_date);
      }
      else if ($(".date-display-single",$(this)).length == 2) {
        from_date = $(".date-display-single:first",$(this)).text();
        to_date = $(".date-display-single:last",$(this)).text();

        msg_date =
          '<div><span class="date-display-single">' + from_date + '</span></div>'+
          '<div><span class="date-display-single">' + to_date + '</span></div>';
        elt_date = $("<div></div>",
          {
            "class": "field-name-field-show-dates",
            "html": '<div class="js-div-date">' + msg_date + '</span></div>',
          });
        $("#block-ds-extras-image-full-show .field-name-field-festival").after(elt_date);
      }
      else if ($(".date-display-single",$(this)).length == 1) {
        from_date = $(".date-display-single:first",$(this)).text();
        elt_date = $("<div></div>",
          {
            "class": "field-name-field-show-dates",
            "html": '<div class="js-div-date"><span class="date-display-single">' + from_date + '</div>',
          });
        $("#block-ds-extras-image-full-show .field-name-field-festival").after(elt_date);
      }

    });
  }

  function manageShowLikeToDates() {
    $(".col-md-3.like-to-item").each(function(index){
      from_date_like_to = $(".date-display-single:first", $(this)).attr("content");
      to_date_like_to = $(".date-display-single:last",$(this)).attr("content");

      if($(".date-display-single", $(this)).length > 1) {
        if ($(".date-display-single:first", $(this)).attr("content") && $(".date-display-single:last",$(this)).attr("content") ) {
          from_date_like_to = $(".date-display-single:first", $(this)).attr("content");
          to_date_like_to = $(".date-display-single:last",$(this)).attr("content");

          from_year_date = from_date_like_to.substring(0, 4);
          to_year_date = to_date_like_to.substring(0, 4);

          from_date_like_to = new Date(from_date_like_to);
          to_date_like_to = new Date(to_date_like_to);

          msg_date =
            customGetDate(from_date_like_to) + "/" + customGetMonth(from_date_like_to) + "/" + from_year_date +
            " > " + customGetDate(to_date_like_to) + "/" + customGetMonth(to_date_like_to) + "/" + to_year_date;

          $(".field-name-field-show-dates", $(this)).html("");

          elt_date_like_to[index] = $("<div></div>",
            {
              "class": "field-name-field-show-dates",
              "html": '<div class="js-div-date"><span class="">' + msg_date + '</span></div>',
            });

          $(".group-date-title-desc",$(this)).prepend(elt_date_like_to[index]);
        }

      }

    });
  }

  function customGetMonth(d) {
    if( d.getMonth() < 9) {
      return "0" + (d.getMonth() + 1);
    } else return (d.getMonth() + 1);
  }
  function customGetDate(d) {
    if( d.getDate() < 10 ) {
      return "0" + d.getDate();
    } else return d.getDate();
  }

  function manageAnchors() {
    current_url = window.location.pathname;
    if ($(".field-name-field-production").length) {
      $("<a></a>",{
        "class": "show-anchor-link",
        "href": current_url + "#production",
        "text": $('.field-name-field-production .label-above').text(),
      }).appendTo("#group-wrapper-distribution")
    }
    if ($(".field-name-field-coproduction").length) {
      $("<a></a>",{
        "class": "show-anchor-link",
        "href": current_url + "#coproduction",
        "text": $('.field-name-field-coproduction .label-above').text(),
      }).appendTo("#group-wrapper-distribution")
    }
    if ($(".field-name-field-partenariats").length) {
      $("<a></a>",{
        "class": "show-anchor-link",
        "href": current_url + "#partenariats",
        "text": $('.field-name-field-partenariats .label-above').text(),
      }).appendTo("#group-wrapper-distribution")
    }
  }
});