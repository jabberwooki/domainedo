jQuery(function($){
    // ne s'exécute pas en mode édition
    if(!$('body.page-node-edit').length) {
        $('.field-name-field-paragraphe-complexe').each(function (index) {
            if ($('.field-name-field-summary-page-complexe', $(this)).length
                && $('.field-name-field-texte-page-complexe', $(this)).length) {
                $('.field-name-field-texte-page-complexe', $(this)).hide(0);

                var context = $(this);
                $('.field-name-field-summary-page-complexe', $(this)).addClass("close-paragraph");
                $('.field-name-field-summary-page-complexe', $(this)).click(function(event) {
                    $('.field-name-field-texte-page-complexe', $(context)).toggle(0);
                    $('.field-name-field-summary-page-complexe', $(context)).toggleClass("open-paragraph").toggleClass("close-paragraph");
                });
            }
        })
    }

});

