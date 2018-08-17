jQuery(function($) {
  var
    from_date,
    to_date,
    from_year_date,
    to_year_date,
    msg_date,
    elt_date,
    anchors_link,
    current_url;

  manageShowDates();
  manageShowLikeToDates();
  manageAnchors();

  function manageShowDates() {
    $(".all-dates").each(function(){
      if($(".date-display-single",$(this)).length > 2) {
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
        $(".field-name-field-festival").after(elt_date);
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
        $(".field-name-field-festival").after(elt_date);
      }
      else if ($(".date-display-single",$(this)).length == 1) {
        from_date = $(".date-display-single:first",$(this)).text();
        elt_date = $("<div></div>",
          {
            "class": "field-name-field-show-dates",
            "html": '<div class="js-div-date"><span class="date-display-single">' + from_date + '</div>',
          });
        $(".field-name-field-festival").after(elt_date);
      }

    });
  }

  function manageShowLikeToDates() {
    $(".col-md-3.like-to-item").each(function(){

      if($(".date-display-single", $(this)).length > 2) {
        //from_date = $(".date-display-single:first",$(this)).attr("content");
        console.log($(this).attr("class"));
        from_date = $(".date-display-single", $(this)).text();
        to_date = $(".date-display-single:last",$(this)).attr("content");
        console.log("from date : " + from_date)
        console.log("to date : " + to_date)
        /*from_year_date = from_date.substring(0, 4);
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
        elt_date.prependTo(".group-date-title-desc",$(this));*/
        //$(".field-name-field-festival").after(elt_date);
      }

    });
  }

  function customGetMonth(d) {
    if( d.getMonth() < 11) {
      return "0" + d.getMonth();
    } else return d.getMonth();
  }
  function customGetDate(d) {
    if( d.getDate() < 11 ) {
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