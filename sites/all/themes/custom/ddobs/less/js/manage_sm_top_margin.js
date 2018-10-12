jQuery(function($){
  var top = true;
  if($( document ).width() < 768) {
    $(document).scroll(function() {

      if($(window).scrollTop() !== 0) {
        if (top) {
          $("header#navbar").addClass("top-smartphone");
        }
        top = false;

      }
      else {
        top = true;
        $("header#navbar").removeClass("top-smartphone");
      }
    });
  }

});