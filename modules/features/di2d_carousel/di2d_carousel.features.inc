<?php
/**
 * @file
 * di2d_carousel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function di2d_carousel_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function di2d_carousel_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function di2d_carousel_node_info() {
  $items = array(
    'carousel' => array(
      'name' => t('Carousel'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}