<?php

/**
 * @file
 * template.php
 */
function basic_bootstrap_preprocess_image_style(&$vars) {
  $vars['attributes']['class'][] = 'img-responsive'; // http://getbootstrap.com/css/#overview-responsive-images
}
