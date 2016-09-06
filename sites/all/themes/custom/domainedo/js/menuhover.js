jQuery(function($) {
    console.log("avant scroll");
    $("li.sf-depth-2>a","#superfish-1>li>ul").each(function( index ) {
        //console.log( index + ": " + $( this).attr("title") );
        if($( this).attr("title")){
            var title = '<span class="festival-month"><span class="festival-month-text">'+$( this).attr("title")+'</span></span>';
            //console.log("Ajout de "+title);
            $( this).append(title);
            $( this).removeAttr("title");
            $( this).addClass("li-date");
        }

    });
    $(window).scroll(function() {
        //console.log("après scroll " + $("#zone-content").scrollTop());
        if($(window).scrollTop() != 0) {
            $("#zone-header").addClass('remove-headband');
            $(".under-header").addClass('header-remove-headband');
            $("body").addClass('body-remove-headband');

        } else {
            $("#zone-header").removeClass('remove-headband');
            $(".under-header").removeClass('header-remove-headband');
            $("body").removeClass('body-remove-headband');
        }
    });
});
