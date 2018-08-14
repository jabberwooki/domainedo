jQuery(function($) {

  var
    from_date,
    to_date,
    from_year_date,
    to_year_date,
    msg_date,
    elt_date;

  $(".field-name-field-show-dates").each(function(){

    if($(".date-display-single",$(this)).length > 2) {
      from_date = $(".date-display-single:first",$(this)).attr("content");
      to_date = $(".date-display-single:last",$(this)).attr("content");

      from_year_date = from_date.substring(0, 4);
      to_year_date = to_date.substring(0, 4);

      from_date = new Date(from_date);
      to_date = new Date(to_date);

      msg_date =
        customGetDate(from_date) + "/" + from_date.getMonth() + "/" + from_year_date +
        " > " + to_date.getDate() + "/" + to_date.getMonth() + "/" + to_year_date;

      $(".field-name-field-show-dates", $(this)).html("");

      elt_date = $("<div></div>",
        {
          "class": "field-name-field-show-dates",
          "html": '<div class="js-div-date"><span class="date-display-single">' + msg_date + '</span></div>',
        });
      $(".field-name-field-festival").after(elt_date);
    }

  });

  function customGetMonth(d) {
    if( d.getMonth() < 10) {
      return "0" + d.getMonth();
    } else return d.getMonth();
  }
  function customGetDate(d) {
    if( d.getDate() < 10 ) {
      return "0" + d.getDate();
    } else return d.getDate();
  }
});