jQuery(function($) {
    
    /*
     * resize frame for video for example
     */ 
    resizeFrame();
    
    window.onresize = resizeFrame();
    
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
        $(msg_date).insertBefore($(zone_date));        
        
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
    if ($(window).width() < 740){
 
      $(".field-name-field-show-dates",".node-show").clone().insertAfter(".field-name-field-by");
      $('<div id="practical_sm_button"><a href="#practical_div">Pratique</a></div>').insertAfter(".field-name-field-price");
      $('.group-right',".node-show").attr('id', 'practical_div');
    }
					
});