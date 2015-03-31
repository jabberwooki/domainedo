jQuery(function($) {
  var showDelay = 200,
      hideDelay = 1500,
      timerShow = null,
      allOver = $(".over-map"); 
  
  allOver.hide();
  $("#map03").mouseout(function(){
    if (timerShow) {
      window.clearTimeout(timerShow);
    }
    allOver.hide();
  });
  
  $("area").each(function() {
    var area = $(this);
    var idArea = area.attr("id");
    var idLink = idArea.replace("area","over");
    var link = $("#"+idLink);
    area.hover(function () {
      showHover(link);
    });
  });
  
  function showHover(element) {
    if (timerShow) {
      window.clearTimeout(timerShow);
    }
    timerShow = window.setTimeout(function () {
      allOver.hide(); // Cache tout
      element.show();              
      timerShow = null; // dès que l'élément est montré, j'annule le 
    }, showDelay);
  }
  function hideHover(element) {
      window.setTimeout(function () {
          element.hide();
      }, hideDelay);
  }

});