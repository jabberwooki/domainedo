jQuery(function($) {
  console.log("dans date_show_list");
  var from_date,
    to_date,
    from_year_date,
    to_year_date,
    msg_date,
    from_month,
    to_month,
    url_show;

  $(".group-date-title-desc").each(function() {
    url_show = $(".field-name-title a", $(this)).attr("href");

    if ($(".date-display-single", $(this)).length > 1) {
      from_date = $(".date-display-single:first", $(this)).attr("content");
      to_date = $(".date-display-single:last", $(this)).attr("content");

      from_year_date = from_date.substring(0, 4);
      to_year_date = to_date.substring(0, 4);

      from_date = new Date(from_date);
      to_date = new Date(to_date);

      from_month = customGetMonth(parseInt(from_date.getMonth()) + 1);
      to_month = customGetMonth(parseInt(to_date.getMonth()) + 1);

      msg_date =
        customGetDate(from_date) +
        "/" +
        from_month +
        "/" +
        from_year_date +
        " > " +
        customGetDate(to_date) +
        "/" +
        to_month +
        "/" +
        to_year_date;

      $(".field-name-field-show-dates", $(this)).html("");

      $("<div></div>", {
        class: "field-name-field-show-dates",
        html:
          '<div class="js-div-date"><span class="date-display-single">' +
          msg_date +
          "</span></div>"
      }).prependTo($(this));
    }
    // wrap date in a link
    $(".date-display-single", $(this)).wrap('<a href="' + url_show + '"></a>');
  });

  function customGetDate(d) {
    if (d.getDate() < 10) {
      return "0" + d.getDate();
    } else return d.getDate();
  }
  function customGetMonth(m) {
    if (m < 10) {
      return "0" + m;
    } else return m;
  }

  // Tracking bouton réserver
  //$(".field-name-field-boxoffice-url a").attr("onclick","ga('send', 'event', 'téléchargement', 'click', 'pdf', {'nonInteraction': 1});");
  //onclick="ga('send', 'event', 'téléchargement', 'click', 'pdf', {'nonInteraction': 1});
  $(".field-name-field-boxoffice-url a").click(function(e) {
    const spectacle = $(this)
      .attr("href")
      .split(/[\/ ]+/)
      .pop();
    console.log(spectacle + " : Accès à la billetterie");
    ga(
      "send",
      "event",
      "Billetterie",
      "Click",
      spectacle + " : Accès à la billetterie"
    );
  });
});
