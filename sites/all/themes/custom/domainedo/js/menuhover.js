jQuery(function($) {
    $("li.sf-depth-2>a","#superfish-1>li>ul").each(function( index ) {
        console.log( index + ": " + $( this).attr("title") );
        if($( this).attr("title")){
            var title = '<span class="festival-month"><span class="festival-month-text">'+$( this).attr("title")+'</span></span>';
            console.log("Ajout de "+title);
            $( this).append(title);
            $( this).removeAttr("title");
            $( this).addClass("li-date");
        }

    });
});
