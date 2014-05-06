(function($) {

  Drupal.behaviors.bootstrap_affix = {
    attach: function(context, settings) {
      $('.bootstrap-wraps-affix').affix({
        offset: {
          top: Drupal.settings.offset_top
          , bottom: Drupal.settings.offset_bottom
        }
      });
    }
  };

})(jQuery);
