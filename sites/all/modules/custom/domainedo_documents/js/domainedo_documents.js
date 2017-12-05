(function ($) {

  Drupal.behaviors.needsFull = {
    attach: function (context, settings) {
      console.log("Docs techniques");
      $('.node-type-tech-document .field-name-field-references-techniques > .field-items > .field-item').matchHeight();
    }
  };
}(jQuery))