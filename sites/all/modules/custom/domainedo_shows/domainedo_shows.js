jQuery(function($) {
  if (window.location.hash == "#block-disqus-disqus-comments") {
    for(i=0;i<3;i++) {
      $("#block-disqus-disqus-comments").fadeTo(1000, 0.2).fadeTo('slow', 1.0);
    }
    setTimeout(function(){
      $("html, body").animate({ scrollTop: $(document).height() }, 1000);
    },2000);

  }
    /*
     * resize frame for video for example
     */ 
    resizeFrame();
    
    window.onresize = function(){
      resizeFrame();
      if ($(".node-show").length && $(window).width() < 980) managePracticalButton();
    }
    
    function resizeFrame() {
      $('iframe').each(function(){
          var width = $(this).parent().width();
          var height = Math.round(width*27/47);
          $(this).attr("width",width);
          $(this).attr("height",height);
      });
    }
    
    /*
     * calculate number of representations dates
     */
    $(".group-right","#block-system-main").each(function(index) {
        //console.log($(this));
        var nb_date = $("div > div > div.field-item > span.date-display-single",$(this)).length;
        var zone_date = $("div > div.field-items",$(this)).first();
        var msg_date = (nb_date > 1) ? '<div class="number_show_dates" >'+nb_date+' dates</div>' : '<div class="number_show_dates">'+nb_date+' date</div>';
        if (nb_date != 0 ) $(msg_date).insertBefore($(zone_date));        
        
    });
    
    /*
     * position of the static practical area in show full page
     */
    $(window).scroll(function() {
        var y = $(window).scrollTop();
        if(y>200)$('.node-show.view-mode-full > .group-right').css('top',(y-200));
    });
    
    /*
     * change practical element in show full page for smartphone
     */
    $(window).scroll(function() {
        var y = $(window).scrollTop();
        if(y>200)$('.node-show.view-mode-full > .group-right').css('top',(y-200));
    });
    
    /*
     * Change position of practicals element for smartphone show display
     */
    if ($(".node-show").length && $(window).width() < 980 ){
 
      $(".field-name-field-show-dates",".node-show").clone().insertAfter(".field-name-field-by");
      $('<div id="practical_sm_button"><a href="#practical_div">Pratique</a></div>').insertAfter(".field-name-field-price");
      $('.group-right',".node-show").attr('id', 'practical_div');
    }
    function managePracticalButton() {
       
      if(!$('#practical_sm_button').length) {
        $('<div id="practical_sm_button"><a href="#practical_div">Pratique</a></div>').insertAfter(".field-name-field-price");
      }
      if($('#practical_div').length) $('.group-right',".node-show").attr('id', 'practical_div');
      
    }
    /*
     *  Display or no the show search form
     */
    var zone_search = $(".page-spectacles-tous-les-spectacles .view-id-shows .view-header");
    var title_search = $('<h3 class="search-show-on">Rechercher un spectacle</h3>');
		if (zone_search.length && $(window).width() < 740 ){  
      zone_search.hide(); 
      title_search.insertBefore(zone_search);
      title_search.click(function(){
        zone_search.toggle();
        if($('.search-show-on').lenght){
          $('.search-show-on').addClass("search-show-off");
          $('.search-show-on').removeClass("search-show-on");
        }else{
          $('.search-show-off').addClass("search-show-on");
          $('.search-show-off').removeClass("search-show-off");
          
        }
      });
    }	
    
    /*
     * Hide link "link-listshows" if there is no result
     */
    if(!$("#block-system-main .node-show).length &&
        $("#link-listshows").length){
        $("#link-listshows").hide();
    }
    /*
     * Hide calendar if date form is not filled out
     */
    if($(".field-name-field-calendar-archive").length){
        if ($(".field-name-field-calendar-archive a").attr('href') == '/calendrier') $(".field-name-field-calendar-archive a").hide();
    }
});