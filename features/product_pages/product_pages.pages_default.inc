<?php
/**
 * @file
 * product_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function product_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'products';
  $page->task = 'page';
  $page->admin_title = 'Products';
  $page->admin_description = '';
  $page->path = 'products';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Products',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $pages['products'] = $page;

  return $pages;

}
