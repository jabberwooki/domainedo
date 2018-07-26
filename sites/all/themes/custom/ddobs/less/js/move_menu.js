jQuery(function($){
  // Ajout d'un comportement au bouton custom close
  $("#menu-close").click(function( ev ) {
    ev.preventDefault();
    if ($("html").hasClass( "mm-opened" )) {
      $('#mmenu_left').mmenu().trigger( "close.mm" );
      $("#menu-close").hide();
    } else {
      $('#mmenu_left').mmenu().trigger( "open.mm" );
    }
  });
  $("#menu-close").hide();

  $("#mmenu-custom-buttom").click(function() {
    $("#menu-close").show();
  });

  // move menus
  var windowsize = $(window).width();
  mvMenus();

  $(window).resize(function() {
    windowsize = $(window).width();
    mvMenus();
  });
  function mvMenus() {
    if (windowsize < 769) {
      $('#megamenu').hide();
    } else {
     $('megamenu').show();
    }
  }
  // hide megamenu
  $("#megamenu").hide();
  // hide classes of menu
  $('#main-megamenu').find('*').removeAttr('class');

  $("<div></div>",{
    "id": "custom-mega-menu-button",
    "html": "<span>MENU</span>",
    "class": "open-menu-button",
  }).prependTo("#navbar-collapse")
    .click(function(){
      $(this).toggleClass("open-menu-button close-menu-button");
      $("#megamenu").slideToggle(400);
    });

});