jQuery(function($) {
    
    var menu = $('<h2 id="menu-accordion" class="menu-off">Menu</h2>');
    var accordion = $('#zone-menu-wrapper');
    var hide = true;
    if($(document).width() < 1200){
        $('section.block-menu',accordion).hide();  
        menu.prependTo(accordion);

        menu.click(function(){
            if(hide){
                $('section',accordion).show();
                menu.addClass("menu-on");
                menu.removeClass("menu-off");
                hide = false;
            }else {
                $('section',accordion).hide();
                menu.removeClass("menu-on");
                menu.addClass("menu-off");
                hide = true;
            }
        });

        accordion.dcAccordion({
                eventType: 'click',
                autoClose: false,
                saveState: true,
                disableLink: true,
                speed: 'fast',
                classActive: 'test',
                showCount: true
        });
    }
					
});