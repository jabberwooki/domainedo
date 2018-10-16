jQuery(function($){
  var buttons_festival = {};
  $(".view-display-id-block_quick_acces .views-row").each(function(){
    buttons_festival[$(this).text()] = $(this);
  });
  $(".view-display-id-block_quick_acces .views-row").hide(0);

  for (var cle in buttons_festival) {
    buttons_festival[cle].show(0);
  }
});