/**
 * Created by ubuntu on 27/06/19.
 */

(function ($) {

  Drupal.behaviors.ddoWebpush = {
    attach: function (context, settings) {

      var requiredSpan = '<span class="form-required" title="This field is required.">*</span>';
      if ($('#edit-field-topic-mode-und input:checked').val() == 'select') {
        $('#edit-field-topics label[for=edit-field-topics-und] span').remove();
        $('#edit-field-topics label[for=edit-field-topics-und]').append(requiredSpan);
      }

      $('#edit-field-topic-mode-und').on('click', function() {
        var selected = $('#edit-field-topic-mode-und input:checked').val();

        if (selected == 'select') {

          $('#edit-field-topics').show();
          $('#edit-field-topics label[for=edit-field-topics-und] span').remove();
          $('#edit-field-topics label[for=edit-field-topics-und]').append(requiredSpan);
        }
        else {
          $('#edit-field-topics label[for=edit-field-topics-und] span').remove();
          $('#edit-field-topics').hide();
        }
      });
    }
  };
}(jQuery))
