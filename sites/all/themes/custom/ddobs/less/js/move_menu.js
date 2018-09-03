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

  // show hide menus
  var windowsize = $(window).width();
  showHideMenus();

  // Mv menus
  mvMenus();

  $(window).resize(function() {
    windowsize = $(window).width();
    showHideMenus();
  });
  function showHideMenus() {
    if (windowsize < 769) {
      $('#megamenu').hide();
    } else {
     $('megamenu').show();
    }
  }
  // hide megamenu
  $("#megamenu").hide();
  // hide classes of menu
  $('.megamenu-code').find('*').removeAttr('class');

  $("<div></div>",{
    "id": "custom-mega-menu-button",
    "html": "<span>MENU</span>",
    "class": "open-menu-button",
  }).prependTo("#navbar-collapse")
    .click(function(){
      var h = window.innerHeight;
      $(this).toggleClass("open-menu-button close-menu-button");
      $("#megamenu").height(h)
      $("#megamenu").fadeToggle(400);
    });
  /**
   * mv last li of main menu to put it on the second meganmenu's columns
   * clone the remmain of main menu and put it in the first meganmenu's columns
   * clone top courtesy nav and put it in the third meganmenu's columns
   * clone bottom courtesy nav and put it in the third meganmenu's columns
   */
  function mvMenus() {
    $( "#initial-main-nav > ul > li.last" ).appendTo( "#megamenu-col2 ul" );
    $( "#initial-main-nav > ul" ).clone().appendTo( "#megamenu-col1" );
    $( "#block-menu-menu-top-courtesy-nav > ul.menu" ).clone().appendTo( "#megamenu-col3" );
    $( "#block-menu-menu-bottom-courtesy > ul.menu" ).clone().appendTo( "#megamenu-col3" );
  }
});