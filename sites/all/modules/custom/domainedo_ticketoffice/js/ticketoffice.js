(function ($) {
  Drupal.behaviors.ticketoffice =  {
    attach: function(context, settings) {
      $('#edit-field-boxoffice-url-und-0-url').attr('readonly', 'readonly');
   }
 };
})(jQuery);