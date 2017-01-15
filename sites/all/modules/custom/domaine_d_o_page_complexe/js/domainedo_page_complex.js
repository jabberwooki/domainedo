jQuery(function($){
    // ne s'exécute pas en mode édition
    var context;
    if(!$('body.page-node-edit').length) {
        $('.field-name-field-paragraphe-complexe .field-item').each(function (index) {
            if ($('.field-name-field-summary-page-complexe', $(this)).length
                && $('.field-name-field-texte-page-complexe', $(this)).length) {
                context = $(this);
                $('.field-name-field-texte-page-complexe', $(this)).hide(0);
                $('.field-name-field-summary-page-complexe', $(this)).addClass("close-paragraph");
                (function(c) {
                    $('.field-name-field-summary-page-complexe', $(context)).click(function(event) {
                        $('.field-name-field-texte-page-complexe', $(c)).toggle(0);
                        $('.field-name-field-summary-page-complexe', $(c)).toggleClass("open-paragraph").toggleClass("close-paragraph");
                    });
                })(context);

            }
        })
    }

});

