jQuery(function($){
  // move menus
  var windowsize = $(window).width();
  mvMenus();

  $(window).resize(function() {
    windowsize = $(window).width();
    mvMenus();
  });
  function mvMenus() {
    if (windowsize < 769) {
      $("#others-menu-megamenu").appendTo(".navbar-collapse nav");
      $('#main-megamenu').hide();
    } else {
      $('#main-megamenu').show();
      $("#others-menu-megamenu").appendTo("#megamenu");
    }
  }

  //hide classes of menu
  $('#main-megamenu').find('*').removeAttr('class');
});