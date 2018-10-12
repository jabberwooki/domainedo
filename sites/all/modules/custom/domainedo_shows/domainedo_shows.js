jQuery(function($) {
    /*
     * Hide link "link-listshows" if there is no result
     */
    if(!$("#block-system-main .node-show").length &&
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