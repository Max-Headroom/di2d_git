<?php
/**
 * @file
 * services_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function services_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'services';
  $page->task = 'page';
  $page->admin_title = 'Services';
  $page->admin_description = '';
  $page->path = 'services';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Services',
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
  $handler->name = 'page_services_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'services';
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
  );
  $display = new panels_display();
  $display->layout = 'moscone_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => array(
        'devices' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'pane_style' => array(
          'well' => 'well',
          'equal-row-2' => 'equal-row-2',
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
          'jumbotron' => 0,
          'blue-well' => 0,
          'dark-blue-well' => 0,
          'orange-well' => 0,
          'equal-row-1' => 0,
        ),
      ),
      'contentmain' => array(
        'devices' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'pane_style' => array(
          'well' => 'well',
          'equal-row-1' => 'equal-row-1',
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
          'jumbotron' => 0,
          'blue-well' => 0,
          'dark-blue-well' => 0,
          'orange-well' => 0,
          'equal-row-2' => 0,
        ),
      ),
      'footer' => NULL,
    ),
    'sidebar' => array(
      'style' => 'kalacustomize',
    ),
    'contentmain' => array(
      'style' => 'kalacustomize',
    ),
  );
  $display->cache = array();
  $display->title = 'Services';
  $display->uuid = '8531cc12-87fd-482c-9028-63c814756bc7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-322cdafc-c40f-4e9f-8551-6410c3188627';
    $pane->panel = 'contentmain';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'Full',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '322cdafc-c40f-4e9f-8551-6410c3188627';
    $display->content['new-322cdafc-c40f-4e9f-8551-6410c3188627'] = $pane;
    $display->panels['contentmain'][0] = 'new-322cdafc-c40f-4e9f-8551-6410c3188627';
    $pane = new stdClass();
    $pane->pid = 'new-f753267e-abcd-4fb5-8da1-834deee6b204';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'lists-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '5',
      'fields_override' => array(
        'field_basic_image_image' => 1,
        'title' => 1,
        'field_teaser' => 1,
        'view_node' => 1,
      ),
      'exposed' => array(
        'type' => array(
          'services' => 'services',
        ),
        'sort_order' => 'DESC',
        'sort_by' => 'title',
      ),
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'more_link' => 0,
      'override_title' => '',
      'override_title_text' => '',
      'widget_title' => '',
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
    $pane->pid = 'new-de18ae49-fb6c-49f2-8166-e57d1a326507';
    $pane->panel = 'footer';
    $pane->type = 'panels_mini';
    $pane->subtype = 'footer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'devices' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'pane_style' => array(
          'well' => 'well',
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
          'jumbotron' => 0,
          'blue-well' => 0,
          'dark-blue-well' => 0,
          'orange-well' => 0,
        ),
      ),
      'style' => 'kalacustomize',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'de18ae49-fb6c-49f2-8166-e57d1a326507';
    $display->content['new-de18ae49-fb6c-49f2-8166-e57d1a326507'] = $pane;
    $display->panels['footer'][0] = 'new-de18ae49-fb6c-49f2-8166-e57d1a326507';
    $pane = new stdClass();
    $pane->pid = 'new-f4c62e10-b622-4663-a028-723381b96a5b';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'lists-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '0',
      'fields_override' => array(
        'field_basic_image_image' => 0,
        'title' => 1,
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
    $pane->style = array(
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f4c62e10-b622-4663-a028-723381b96a5b';
    $display->content['new-f4c62e10-b622-4663-a028-723381b96a5b'] = $pane;
    $display->panels['sidebar'][0] = 'new-f4c62e10-b622-4663-a028-723381b96a5b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['services'] = $page;

  return $pages;

}
