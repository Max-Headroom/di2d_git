<?php
/**
 * @file
 * di2d_fieldable_panes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function di2d_fieldable_panes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "fieldable_panels_panes" && $api == "fieldable_panels_pane_type") {
    return array("version" => "1");
  }
}
