<?php
/**
 * @file
 * di2d_food_menu.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function di2d_food_menu_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function di2d_food_menu_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function di2d_food_menu_node_info() {
  $items = array(
    'food_menu' => array(
      'name' => t('Food menu'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
