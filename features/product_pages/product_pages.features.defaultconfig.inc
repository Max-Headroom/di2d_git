<?php
/**
 * @file
 * product_pages.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function product_pages_defaultconfig_features() {
  return array(
    'product_pages' => array(
      'default_page_manager_pages' => 'default_page_manager_pages',
      'panelizer_defaults' => 'panelizer_defaults',
    ),
  );
}

/**
 * Implements hook_defaultconfig_default_page_manager_pages().
 */
function product_pages_defaultconfig_default_page_manager_pages() {
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
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_products_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'products';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'products-lp',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'moscone_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Products';
  $display->uuid = '8531cc12-87fd-482c-9028-63c814756bc7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f12830dd-f1d9-46e3-a0f4-da11bbfd504f';
    $pane->panel = 'contentmain';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'Full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f12830dd-f1d9-46e3-a0f4-da11bbfd504f';
    $display->content['new-f12830dd-f1d9-46e3-a0f4-da11bbfd504f'] = $pane;
    $display->panels['contentmain'][0] = 'new-f12830dd-f1d9-46e3-a0f4-da11bbfd504f';
    $pane = new stdClass();
    $pane->pid = 'new-f753267e-abcd-4fb5-8da1-834deee6b204';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'lists-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '10',
      'fields_override' => array(
        'title' => 1,
        'field_basic_image_image' => 1,
        'field_teaser' => 1,
        'view_node' => 1,
      ),
      'exposed' => array(
        'type' => array(
          'products' => 'products',
        ),
        'sort_order' => 'DESC',
        'sort_by' => 'title',
      ),
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f753267e-abcd-4fb5-8da1-834deee6b204';
    $display->content['new-f753267e-abcd-4fb5-8da1-834deee6b204'] = $pane;
    $display->panels['contentmain'][1] = 'new-f753267e-abcd-4fb5-8da1-834deee6b204';
    $pane = new stdClass();
    $pane->pid = 'new-c3e87c69-95c3-4fc3-a4ce-4458f69e2015';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'lists-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'fields_override' => array(
        'title' => 1,
        'field_basic_image_image' => 0,
        'view_node' => 0,
      ),
      'exposed' => array(
        'type' => array(
          'services' => 'services',
        ),
        'sort_order' => 'DESC',
        'sort_by' => 'title',
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Our Services',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c3e87c69-95c3-4fc3-a4ce-4458f69e2015';
    $display->content['new-c3e87c69-95c3-4fc3-a4ce-4458f69e2015'] = $pane;
    $display->panels['sidebar'][0] = 'new-c3e87c69-95c3-4fc3-a4ce-4458f69e2015';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['products'] = $page;

  return $pages;

}

/**
 * Implements hook_defaultconfig_panelizer_defaults().
 */
function product_pages_defaultconfig_panelizer_defaults() {
  $export = array();

  return $export;
}
