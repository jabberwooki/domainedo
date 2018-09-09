jQuery(function($){
  // Create the close button
  $("<div></div>",{
    "id": "close-custom-search",
  }).appendTo("#search-block-form")
    .click(function(){
      $("#search-region").slideUp();
    });


  $("#search-region").hide();
  $("#top-search-icon").click(function(){
    $("#search-region").slideToggle();
    $("#edit-search-block-form--2").focus();
  });
});