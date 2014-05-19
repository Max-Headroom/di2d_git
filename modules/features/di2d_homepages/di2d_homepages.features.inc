<?php
/**
 * @file
 * di2d_homepages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function di2d_homepages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
