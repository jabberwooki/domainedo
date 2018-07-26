jQuery(function($){
  var window_width = $( window ).width();
  if (window_width < 768) {
    moveSocial();
  }

  $( window ).resize(function() {
    window_width = $( window ).width();
    if (window_width < 768) {
      moveSocial();
    }

  });
  function moveSocial() {
    $("#ul-social").appendTo('#social-bottom');
  }
});