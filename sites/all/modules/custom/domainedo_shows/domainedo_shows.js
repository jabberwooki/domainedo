jQuery(function($) {
    
    //
    $(".group-right","#block-system-main").each(function(index) {
        //console.log($(this));
        var nb_date = $("div > div > div.field-item > span.date-display-single",$(this)).length;
        var zone_date = $("div > div.field-items",$(this)).first();
        var msg_date = (nb_date > 1) ? '<div class="number_show_dates">'+nb_date+' dates</div>' : '<div class="number_show_dates">'+nb_date+' date</div>';
        $(msg_date).insertBefore($(zone_date));
        
        
    });
    $(window).scroll(function(){
        var y = $(window).scrollTop();
        if(y>200)$('.node-show.view-mode-full > .group-right').css('top',(y-200));
    });
   
					
});