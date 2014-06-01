<?php

/**
 * @file
 * template.php
 */
function pizza_bootstrap_preprocess_image_style(&$vars) {
  $vars['attributes']['class'][] = 'img-responsive'; // http://getbootstrap.com/css/#overview-responsive-images
}

function pizza_bootstrap_preprocess_page(&$vars) {
  if (variable_get('maintenance_mode', 0)) {
    $message_count = count($_SESSION['messages']['status']);
    if ($message_count > 1) {
      array_shift($_SESSION['messages']['status']);
    }
    else {
      unset($_SESSION['messages']['status']);
    }
  }
}
