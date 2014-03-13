jQuery(function($) {
    var menu = $('<h2 id="menu-accordion">Menu</h2>');
    var accordion = $('#zone-menu-wrapper');
    var hide = true;
    if($(document).width() < 800){
        $('div.block-menu',accordion).hide();  
        menu.prependTo(accordion);

        menu.click(function(){
            if(hide){
                $('div',accordion).show();
                hide = false;
            }else {
                $('div',accordion).hide();
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