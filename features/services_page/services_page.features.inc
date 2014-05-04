<?php
/**
 * @file
 * services_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function services_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function services_page_node_info() {
  $items = array(
    'services' => array(
      'name' => t('Services'),
      'base' => 'node_content',
      'description' => t('Services the company offers'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
