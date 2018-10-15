jQuery(function($) {
  function resizedw(){
    // Haven't resized in 100ms!
    if ($('.page-header').height() > 50) {
      $('.page-header').addClass("title-several-lines");
    } else {
      $('.page-header').removeClass("title-several-lines");

    }
  }

  var doit;
  window.onresize = function(){
    clearTimeout(doit);
    doit = setTimeout(resizedw, 100);
  };

  if ($('.page-header').height() > 50) {
    $('.page-header').addClass("title-several-lines");
  }
});
