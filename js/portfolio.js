(function ($, Drupal, window, document, undefined) {

// Ready Code
$(document).ready(function() {
  
  $('#widget_pager_bottom_portfolio-page_1').elastislide({onReady: function(){
	  $('.view-portfolio nav').append('<span class="placeholder left" />').append('<span class="placeholder right" />');
	}});
  
}); // Ready

})(jQuery, Drupal, this, this.document);