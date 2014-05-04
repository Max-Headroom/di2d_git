(function($) {
  Drupal.behaviors.kalaSpectrum = {
    attach: function(context) {
      $(window).load(function() {
        var firstHeight = $('.equal-row-1').height();
        var secondHeight = $('.equal-row-2').height();

        if (window.matchMedia("(min-width: 990px)").matches) {

          if (firstHeight > secondHeight) {
            $('.equal-row-2').height(firstHeight + 40);

          }
          else {
            $('.equal-row-1').height(secondHeight + 40);

          }
        }
        else {
          $('.equal-row-1').height(firstHeight);
          $('.equal-row-2').height(secondHeight);
        }
      });

      /* affix the navbar after scroll below header */
      $('#nav').affix({
        offset: {
          top: $('header').height()
        }
      });

      /*add class to section1 so that height can be altered*/
      $('#nav').on('affix.bs.affix', function() {
        $('#section1').addClass('nav-affixed');
      });

      /*remove class to section1 so that height can be altered*/
      $('#nav').on('affix-top.bs.affix', function() {
        $('#section1').removeClass('nav-affixed');
      });

      /* highlight the top nav as scrolling occurs */
      $('body').scrollspy({target: '#nav'});

      /* smooth scrolling for scroll to top */
      $('.scroll-top').click(function() {
        $('body,html').animate({scrollTop: 0}, 1000);
      });

      /* smooth scrolling for nav sections */
      $('#nav .navbar-nav li>a').click(function() {
        var link = $(this).attr('href');
        var posi = $(link).offset().top;
        $('body,html').animate({scrollTop: posi}, 700);
      });

    }
  };
})(jQuery);

