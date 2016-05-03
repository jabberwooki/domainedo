/**
 * Created by ubuntu on 21/04/16.
 */

(function ($) {

  Drupal.behaviors.domain_d_o_retours_sur = {
    attach: function (context, settings) {

      // cache les critiques
      if ( $('.field-name-field-critiques').length ) {
        $('.field-name-field-text-critique').hide();
        $('.field-name-field-critiques > .field-items > .field-item').each(function(){
          var read_more = $('<span class="read-more-critique">Lire la suite</span>');
          var context = $(this);
          context.append(read_more);
          (function(ctx){
            read_more.click(function(){
              $('.field-name-field-text-critique').hide();
              $('.field-name-field-summary-critique').show();
              $('.read-more-critique').show();
              $('.field-name-field-critiques > .field-items > .field-item').css({'width': '44%'});

              $('.field-name-field-summary-critique', ctx).hide();
              $('.field-name-field-text-critique', ctx).show();
              $('.read-more-critique', ctx).hide();
              ctx.animate({'width': '100%', 'height': '100%'}, 1000);
            });
          })(context);

        });
      }


    }
  };
}(jQuery));