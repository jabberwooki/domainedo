/**
 * Created by ubuntu on 21/04/16.
 */

(function ($) {

  Drupal.behaviors.domain_d_o_retours_sur = {
    attach: function (context, settings) {

      // gère les critiques
      if ( $('.field-name-field-critiques').length ) {
        $('.field-name-field-text-critique').hide();
        $('.field-name-field-critiques > .field-items > .field-item').each(function(){
          var read_more = $('<span class="read-more-critique">Lire la suite</span>');
          var read_less = $('<span class="read-less-critique">Réduire</span>');
          var context = $(this);
          context.append(read_less);
          read_less.hide();
          context.append(read_more);
          (function(ctx){
            read_more.click(function(){
              $('.field-name-field-text-critique').hide();
              $('.field-name-field-summary-critique').show();
              $('.read-more-critique').show();
              $('.field-name-field-critiques > .field-items > .field-item').css({'width': '44%', 'height': '150px'});
              $('.field-name-field-text-critique', ctx).show();
              $('.read-more-critique', ctx).hide();
              $('.read-less-critique', ctx).show();
              ctx.animate({'width': '95%', 'height': '100%'}, 1000);
              setTimeout(function(){$('html, body').animate({ scrollTop: ctx.offset().top }, 500);}, 1000);

            });
          })(context);
          (function(ctx){
            read_less.click(function(){
              $('.field-name-field-summary-critique', ctx).show();
              $('.field-name-field-text-critique', ctx).hide();
              $('.read-more-critique', ctx).show();
              $('.read-less-critique', ctx).hide();
              ctx.css({'width': '44%', 'height': '150px'});
            });
          })(context);
        });
      }
      // Gère les commentaires
      if ( $('.field-name-field-retour-comments').length ) {
        $('.field-name-field-text-comment').hide();
        $('.field-name-field-retour-comments > .field-items > .field-item').each(function(){
          var read_more_c = $('<span class="read-more-comment">Lire la suite</span>');
          var read_less_c = $('<span class="read-less-comment">Réduire</span>');
          var context_c = $(this);
          context_c.append(read_less_c);
          read_less_c.hide();
          context_c.append(read_more_c);
          (function(ctx){
            read_more_c.click(function(){
              $('.field-name-field-text-comment').hide();
              $('.field-name-field-summary-comment').show();
              $('.read-more-comment').show();
              $('.field-name-field-retour-comments > .field-items > .field-item').css({'width': '44%', 'height': '150px'});
              $('.field-name-field-text-comment', ctx).show();
              $('.read-more-comment', ctx).hide();
              $('.read-less-comment', ctx).show();
              ctx.animate({'width': '95%', 'height': '100%'}, 1000);
              setTimeout(function(){$('html, body').animate({ scrollTop: ctx.offset().top }, 500);}, 1000);

            });
          })(context_c);
          (function(ctx){
            read_less_c.click(function(){
              $('.field-name-field-summary-comment', ctx).show();
              $('.field-name-field-text-comment', ctx).hide();
              $('.read-more-comment', ctx).show();
              $('.read-less-comment', ctx).hide();
              ctx.css({'width': '44%', 'height': '150px'});
            });
          })(context_c);
        });
      }

      //gère les menus "fixed"
      var link_context = $('<div id="student-context" class="anchor-retour-sur">Contexte</div>');
      $('li.active-trail.active').append(link_context);
      link_context.click(function() {
        $('html, body').animate({ scrollTop: 0 }, 500);
      });
      if($(".field-name-field-critiques").length) {
        var link_critiques = $('<div id="student-critique" class="anchor-retour-sur">Critiques</div>');
        $('li.active-trail.active').append(link_critiques);
        link_critiques.click(function() {
          $('html, body').animate({ scrollTop: $('.field-name-field-critiques').offset().top }, 500);
        });
      }
      if($(".field-name-field-retour-comments").length) {
        var link_comments = $('<div id="student-comment" class="anchor-retour-sur">Commentaires</div>');
        $('li.active-trail.active').append(link_comments);
        link_comments.click(function() {
          $('html, body').animate({ scrollTop: $('.field-name-field-retour-comments').offset().top }, 500);
        });
      }

    }
  };
}(jQuery));