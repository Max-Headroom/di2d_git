<?php
/**
 * @file
 * di2d_homepages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function di2d_homepages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'One page home page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_onepage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row1' => array(
        'pane_style' => array(
          'container' => 0,
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
          'jumbotron' => 0,
          'well' => 0,
          'pane' => 0,
          'alert' => 0,
          'affix' => 0,
        ),
        'affix' => array(
          'offset_top' => '',
          'offset_bottom' => '',
        ),
        'devices' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'pane_id' => '0',
        'pane_sections' => '0',
        'section_divider' => 0,
        'column' => array(
          'column_size_xs' => '12',
          'column_size_sm' => '12',
          'column_size_md' => '12',
          'column_size_lg' => '12',
        ),
        'offset' => array(
          'offset_size_xs' => '0',
          'offset_size_sm' => '0',
          'offset_size_md' => '0',
          'offset_size_lg' => '0',
        ),
        'push' => array(
          'push_size_xs' => '0',
          'push_size_sm' => '0',
          'push_size_md' => '0',
          'push_size_lg' => '0',
        ),
        'pull' => array(
          'pull_size_xs' => '0',
          'pull_size_sm' => '0',
          'pull_size_md' => '0',
          'pull_size_lg' => '0',
        ),
      ),
      'left1' => array(
        'pane_style' => array(
          'container' => 0,
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
          'jumbotron' => 0,
          'well' => 0,
          'pane' => 0,
          'alert' => 0,
          'affix' => 0,
        ),
        'affix' => array(
          'offset_top' => '',
          'offset_bottom' => '',
        ),
        'devices' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'pane_id' => '0',
        'pane_sections' => '0',
        'section_divider' => 0,
        'column' => array(
          'column_size_xs' => '12',
          'column_size_sm' => '12',
          'column_size_md' => '6',
          'column_size_lg' => '6',
        ),
        'offset' => array(
          'offset_size_xs' => '0',
          'offset_size_sm' => '0',
          'offset_size_md' => '0',
          'offset_size_lg' => '0',
        ),
        'push' => array(
          'push_size_xs' => '0',
          'push_size_sm' => '0',
          'push_size_md' => '0',
          'push_size_lg' => '0',
        ),
        'pull' => array(
          'pull_size_xs' => '0',
          'pull_size_sm' => '0',
          'pull_size_md' => '0',
          'pull_size_lg' => '0',
        ),
      ),
      'right1' => array(
        'pane_style' => array(
          'container' => 0,
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
          'jumbotron' => 0,
          'well' => 0,
          'pane' => 0,
          'alert' => 0,
          'affix' => 0,
        ),
        'affix' => array(
          'offset_top' => '',
          'offset_bottom' => '',
        ),
        'devices' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'pane_id' => '0',
        'pane_sections' => '0',
        'section_divider' => 0,
        'column' => array(
          'column_size_xs' => '12',
          'column_size_sm' => '12',
          'column_size_md' => '6',
          'column_size_lg' => '6',
        ),
        'offset' => array(
          'offset_size_xs' => '0',
          'offset_size_sm' => '0',
          'offset_size_md' => '0',
          'offset_size_lg' => '0',
        ),
        'push' => array(
          'push_size_xs' => '0',
          'push_size_sm' => '0',
          'push_size_md' => '0',
          'push_size_lg' => '0',
        ),
        'pull' => array(
          'pull_size_xs' => '0',
          'pull_size_sm' => '0',
          'pull_size_md' => '0',
          'pull_size_lg' => '0',
        ),
      ),
      'row2' => array(
        'pane_style' => array(
          'container' => 0,
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
          'jumbotron' => 0,
          'well' => 0,
          'pane' => 0,
          'alert' => 0,
          'affix' => 0,
        ),
        'affix' => array(
          'offset_top' => '',
          'offset_bottom' => '',
        ),
        'devices' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'pane_id' => '0',
        'pane_sections' => '0',
        'section_divider' => 0,
        'column' => array(
          'column_size_xs' => '12',
          'column_size_sm' => '12',
          'column_size_md' => '12',
          'column_size_lg' => '12',
        ),
        'offset' => array(
          'offset_size_xs' => '0',
          'offset_size_sm' => '0',
          'offset_size_md' => '0',
          'offset_size_lg' => '0',
        ),
        'push' => array(
          'push_size_xs' => '0',
          'push_size_sm' => '0',
          'push_size_md' => '0',
          'push_size_lg' => '0',
        ),
        'pull' => array(
          'pull_size_xs' => '0',
          'pull_size_sm' => '0',
          'pull_size_md' => '0',
          'pull_size_lg' => '0',
        ),
      ),
      'left2' => array(
        'pane_style' => array(
          'container' => 0,
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
          'jumbotron' => 0,
          'well' => 0,
          'pane' => 0,
          'alert' => 0,
          'affix' => 0,
        ),
        'affix' => array(
          'offset_top' => '',
          'offset_bottom' => '',
        ),
        'devices' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'pane_id' => '0',
        'pane_sections' => '0',
        'section_divider' => 0,
        'column' => array(
          'column_size_xs' => '12',
          'column_size_sm' => '12',
          'column_size_md' => '6',
          'column_size_lg' => '6',
        ),
        'offset' => array(
          'offset_size_xs' => '0',
          'offset_size_sm' => '0',
          'offset_size_md' => '0',
          'offset_size_lg' => '0',
        ),
        'push' => array(
          'push_size_xs' => '0',
          'push_size_sm' => '0',
          'push_size_md' => '0',
          'push_size_lg' => '0',
        ),
        'pull' => array(
          'pull_size_xs' => '0',
          'pull_size_sm' => '0',
          'pull_size_md' => '0',
          'pull_size_lg' => '0',
        ),
      ),
      'right2' => array(
        'pane_style' => array(
          'container' => 0,
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
          'jumbotron' => 0,
          'well' => 0,
          'pane' => 0,
          'alert' => 0,
          'affix' => 0,
        ),
        'affix' => array(
          'offset_top' => '',
          'offset_bottom' => '',
        ),
        'devices' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'pane_id' => '0',
        'pane_sections' => '0',
        'section_divider' => 0,
        'column' => array(
          'column_size_xs' => '12',
          'column_size_sm' => '12',
          'column_size_md' => '6',
          'column_size_lg' => '6',
        ),
        'offset' => array(
          'offset_size_xs' => '0',
          'offset_size_sm' => '0',
          'offset_size_md' => '0',
          'offset_size_lg' => '0',
        ),
        'push' => array(
          'push_size_xs' => '0',
          'push_size_sm' => '0',
          'push_size_md' => '0',
          'push_size_lg' => '0',
        ),
        'pull' => array(
          'pull_size_xs' => '0',
          'pull_size_sm' => '0',
          'pull_size_md' => '0',
          'pull_size_lg' => '0',
        ),
      ),
      'row3' => array(
        'pane_style' => array(
          'container' => 0,
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
          'jumbotron' => 0,
          'well' => 0,
          'pane' => 0,
          'alert' => 0,
          'affix' => 0,
        ),
        'affix' => array(
          'offset_top' => '',
          'offset_bottom' => '',
        ),
        'devices' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'pane_id' => '0',
        'pane_sections' => '0',
        'section_divider' => 0,
        'column' => array(
          'column_size_xs' => '12',
          'column_size_sm' => '12',
          'column_size_md' => '12',
          'column_size_lg' => '12',
        ),
        'offset' => array(
          'offset_size_xs' => '0',
          'offset_size_sm' => '0',
          'offset_size_md' => '0',
          'offset_size_lg' => '0',
        ),
        'push' => array(
          'push_size_xs' => '0',
          'push_size_sm' => '0',
          'push_size_md' => '0',
          'push_size_lg' => '0',
        ),
        'pull' => array(
          'pull_size_xs' => '0',
          'pull_size_sm' => '0',
          'pull_size_md' => '0',
          'pull_size_lg' => '0',
        ),
      ),
      'left3' => array(
        'pane_style' => array(
          'container' => 0,
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
          'jumbotron' => 0,
          'well' => 0,
          'pane' => 0,
          'alert' => 0,
          'affix' => 0,
        ),
        'affix' => array(
          'offset_top' => '',
          'offset_bottom' => '',
        ),
        'devices' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'pane_id' => '0',
        'pane_sections' => '0',
        'section_divider' => 0,
        'column' => array(
          'column_size_xs' => '12',
          'column_size_sm' => '12',
          'column_size_md' => '6',
          'column_size_lg' => '6',
        ),
        'offset' => array(
          'offset_size_xs' => '0',
          'offset_size_sm' => '0',
          'offset_size_md' => '0',
          'offset_size_lg' => '0',
        ),
        'push' => array(
          'push_size_xs' => '0',
          'push_size_sm' => '0',
          'push_size_md' => '0',
          'push_size_lg' => '0',
        ),
        'pull' => array(
          'pull_size_xs' => '0',
          'pull_size_sm' => '0',
          'pull_size_md' => '0',
          'pull_size_lg' => '0',
        ),
      ),
      'right3' => array(
        'pane_style' => array(
          'container' => 0,
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
          'jumbotron' => 0,
          'well' => 0,
          'pane' => 0,
          'alert' => 0,
          'affix' => 0,
        ),
        'affix' => array(
          'offset_top' => '',
          'offset_bottom' => '',
        ),
        'devices' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'pane_id' => '0',
        'pane_sections' => '0',
        'section_divider' => 0,
        'column' => array(
          'column_size_xs' => '12',
          'column_size_sm' => '12',
          'column_size_md' => '6',
          'column_size_lg' => '6',
        ),
        'offset' => array(
          'offset_size_xs' => '0',
          'offset_size_sm' => '0',
          'offset_size_md' => '0',
          'offset_size_lg' => '0',
        ),
        'push' => array(
          'push_size_xs' => '0',
          'push_size_sm' => '0',
          'push_size_md' => '0',
          'push_size_lg' => '0',
        ),
        'pull' => array(
          'pull_size_xs' => '0',
          'pull_size_sm' => '0',
          'pull_size_md' => '0',
          'pull_size_lg' => '0',
        ),
      ),
      'row4' => array(
        'pane_style' => array(
          'container' => 0,
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
          'jumbotron' => 0,
          'well' => 0,
          'pane' => 0,
          'alert' => 0,
          'affix' => 0,
        ),
        'affix' => array(
          'offset_top' => '',
          'offset_bottom' => '',
        ),
        'devices' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'pane_id' => '0',
        'pane_sections' => '0',
        'section_divider' => 0,
        'column' => array(
          'column_size_xs' => '12',
          'column_size_sm' => '12',
          'column_size_md' => '12',
          'column_size_lg' => '12',
        ),
        'offset' => array(
          'offset_size_xs' => '0',
          'offset_size_sm' => '0',
          'offset_size_md' => '0',
          'offset_size_lg' => '0',
        ),
        'push' => array(
          'push_size_xs' => '0',
          'push_size_sm' => '0',
          'push_size_md' => '0',
          'push_size_lg' => '0',
        ),
        'pull' => array(
          'pull_size_xs' => '0',
          'pull_size_sm' => '0',
          'pull_size_md' => '0',
          'pull_size_lg' => '0',
        ),
      ),
      'left4' => array(
        'pane_style' => array(
          'container' => 0,
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
          'jumbotron' => 0,
          'well' => 0,
          'pane' => 0,
          'alert' => 0,
          'affix' => 0,
        ),
        'affix' => array(
          'offset_top' => '',
          'offset_bottom' => '',
        ),
        'devices' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'pane_id' => '0',
        'pane_sections' => '0',
        'section_divider' => 0,
        'column' => array(
          'column_size_xs' => '12',
          'column_size_sm' => '12',
          'column_size_md' => '6',
          'column_size_lg' => '6',
        ),
        'offset' => array(
          'offset_size_xs' => '0',
          'offset_size_sm' => '0',
          'offset_size_md' => '0',
          'offset_size_lg' => '0',
        ),
        'push' => array(
          'push_size_xs' => '0',
          'push_size_sm' => '0',
          'push_size_md' => '0',
          'push_size_lg' => '0',
        ),
        'pull' => array(
          'pull_size_xs' => '0',
          'pull_size_sm' => '0',
          'pull_size_md' => '0',
          'pull_size_lg' => '0',
        ),
      ),
      'right4' => array(
        'pane_style' => array(
          'container' => 0,
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
          'jumbotron' => 0,
          'well' => 0,
          'pane' => 0,
          'alert' => 0,
          'affix' => 0,
        ),
        'affix' => array(
          'offset_top' => '',
          'offset_bottom' => '',
        ),
        'devices' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'pane_id' => '0',
        'pane_sections' => '0',
        'section_divider' => 0,
        'column' => array(
          'column_size_xs' => '12',
          'column_size_sm' => '12',
          'column_size_md' => '6',
          'column_size_lg' => '6',
        ),
        'offset' => array(
          'offset_size_xs' => '0',
          'offset_size_sm' => '0',
          'offset_size_md' => '0',
          'offset_size_lg' => '0',
        ),
        'push' => array(
          'push_size_xs' => '0',
          'push_size_sm' => '0',
          'push_size_md' => '0',
          'push_size_lg' => '0',
        ),
        'pull' => array(
          'pull_size_xs' => '0',
          'pull_size_sm' => '0',
          'pull_size_md' => '0',
          'pull_size_lg' => '0',
        ),
      ),
      'row5' => array(
        'pane_style' => array(
          'container' => 0,
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
          'jumbotron' => 0,
          'well' => 0,
          'pane' => 0,
          'alert' => 0,
          'affix' => 0,
        ),
        'affix' => array(
          'offset_top' => '',
          'offset_bottom' => '',
        ),
        'devices' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'pane_id' => '0',
        'pane_sections' => '0',
        'section_divider' => 0,
        'column' => array(
          'column_size_xs' => '12',
          'column_size_sm' => '12',
          'column_size_md' => '12',
          'column_size_lg' => '12',
        ),
        'offset' => array(
          'offset_size_xs' => '0',
          'offset_size_sm' => '0',
          'offset_size_md' => '0',
          'offset_size_lg' => '0',
        ),
        'push' => array(
          'push_size_xs' => '0',
          'push_size_sm' => '0',
          'push_size_md' => '0',
          'push_size_lg' => '0',
        ),
        'pull' => array(
          'pull_size_xs' => '0',
          'pull_size_sm' => '0',
          'pull_size_md' => '0',
          'pull_size_lg' => '0',
        ),
      ),
    ),
    'left1' => array(
      'style' => 'bootstrap_wraps',
    ),
    'row1' => array(
      'style' => 'bootstrap_wraps',
    ),
    'right1' => array(
      'style' => 'bootstrap_wraps',
    ),
    'row2' => array(
      'style' => 'bootstrap_wraps',
    ),
    'left2' => array(
      'style' => 'bootstrap_wraps',
    ),
    'right2' => array(
      'style' => 'bootstrap_wraps',
    ),
    'row3' => array(
      'style' => 'bootstrap_wraps',
    ),
    'left3' => array(
      'style' => 'bootstrap_wraps',
    ),
    'right3' => array(
      'style' => 'bootstrap_wraps',
    ),
    'row4' => array(
      'style' => 'bootstrap_wraps',
    ),
    'left4' => array(
      'style' => 'bootstrap_wraps',
    ),
    'right4' => array(
      'style' => 'bootstrap_wraps',
    ),
    'row5' => array(
      'style' => 'bootstrap_wraps',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8afd8490-4ea7-4aa5-8d24-e376409f3581';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-58683042-e760-4818-a63d-3cd2afa07055';
    $pane->panel = 'row1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Welcome. Now let&#39;s build!</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '58683042-e760-4818-a63d-3cd2afa07055';
    $display->content['new-58683042-e760-4818-a63d-3cd2afa07055'] = $pane;
    $display->panels['row1'][0] = 'new-58683042-e760-4818-a63d-3cd2afa07055';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
