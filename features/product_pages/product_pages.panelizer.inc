<?php
/**
 * @file
 * product_pages.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function product_pages_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:products:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'products';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
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
          'clearfix' => 'clearfix',
          'well' => 'well',
          'equal-row-1' => 'equal-row-1',
          'pull-left' => 0,
          'pull-right' => 0,
          'jumbotron' => 0,
          'blue-well' => 0,
          'dark-blue-well' => 0,
          'orange-well' => 0,
          'equal-row-2' => 0,
        ),
      ),
      'footer' => NULL,
    ),
    'contentmain' => array(
      'style' => 'kalacustomize',
    ),
    'sidebar' => array(
      'style' => 'kalacustomize',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'd8efb330-427f-4fab-abfd-dd03ee44efc5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a772d1e1-03a3-48de-a01e-f56d444b0023';
    $pane->panel = 'contentmain';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h2',
      'id' => '',
      'class' => 'content-title',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a772d1e1-03a3-48de-a01e-f56d444b0023';
    $display->content['new-a772d1e1-03a3-48de-a01e-f56d444b0023'] = $pane;
    $display->panels['contentmain'][0] = 'new-a772d1e1-03a3-48de-a01e-f56d444b0023';
    $pane = new stdClass();
    $pane->pid = 'new-c73d3609-8956-4b03-a8c7-087530f11b14';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_basic_image_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'flexslider',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'image_style' => 'content_main',
        'image_link' => '',
        'optionset' => 'product_slider',
        'caption' => 0,
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c73d3609-8956-4b03-a8c7-087530f11b14';
    $display->content['new-c73d3609-8956-4b03-a8c7-087530f11b14'] = $pane;
    $display->panels['contentmain'][1] = 'new-c73d3609-8956-4b03-a8c7-087530f11b14';
    $pane = new stdClass();
    $pane->pid = 'new-5bf7585f-0809-4cc3-b84f-4758813e9b6b';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5bf7585f-0809-4cc3-b84f-4758813e9b6b';
    $display->content['new-5bf7585f-0809-4cc3-b84f-4758813e9b6b'] = $pane;
    $display->panels['contentmain'][2] = 'new-5bf7585f-0809-4cc3-b84f-4758813e9b6b';
    $pane = new stdClass();
    $pane->pid = 'new-978ea399-b2d0-45a0-b670-5f49bc41ea39';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_video_file';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'file_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '978ea399-b2d0-45a0-b670-5f49bc41ea39';
    $display->content['new-978ea399-b2d0-45a0-b670-5f49bc41ea39'] = $pane;
    $display->panels['contentmain'][3] = 'new-978ea399-b2d0-45a0-b670-5f49bc41ea39';
    $pane = new stdClass();
    $pane->pid = 'new-58c3fca1-a4ce-48ce-8c54-4e29140f64ba';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_basic_file_file';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'file_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '58c3fca1-a4ce-48ce-8c54-4e29140f64ba';
    $display->content['new-58c3fca1-a4ce-48ce-8c54-4e29140f64ba'] = $pane;
    $display->panels['contentmain'][4] = 'new-58c3fca1-a4ce-48ce-8c54-4e29140f64ba';
    $pane = new stdClass();
    $pane->pid = 'new-59f6b859-623c-4513-bd06-533866046c9f';
    $pane->panel = 'contentmain';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '59f6b859-623c-4513-bd06-533866046c9f';
    $display->content['new-59f6b859-623c-4513-bd06-533866046c9f'] = $pane;
    $display->panels['contentmain'][5] = 'new-59f6b859-623c-4513-bd06-533866046c9f';
    $pane = new stdClass();
    $pane->pid = 'new-fcffe452-3426-4aae-b839-fece7445eb3f';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'lists-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '10',
      'fields_override' => array(
        'field_basic_image_image' => 0,
        'title' => 1,
      ),
      'exposed' => array(
        'type' => array(
          'products' => 'products',
        ),
        'sort_order' => 'DESC',
        'sort_by' => 'changed',
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fcffe452-3426-4aae-b839-fece7445eb3f';
    $display->content['new-fcffe452-3426-4aae-b839-fece7445eb3f'] = $pane;
    $display->panels['sidebar'][0] = 'new-fcffe452-3426-4aae-b839-fece7445eb3f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5bf7585f-0809-4cc3-b84f-4758813e9b6b';
  $panelizer->display = $display;
  $export['node:products:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:products:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'products';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '564a3dc9-671a-450c-9de1-add0a8caed5b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e5482f87-3c88-4197-a72d-dae2d5146959';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e5482f87-3c88-4197-a72d-dae2d5146959';
    $display->content['new-e5482f87-3c88-4197-a72d-dae2d5146959'] = $pane;
    $display->panels['center'][0] = 'new-e5482f87-3c88-4197-a72d-dae2d5146959';
    $pane = new stdClass();
    $pane->pid = 'new-d4815581-a629-4a65-aeeb-066291a5ca3d';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_video_file';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'file_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd4815581-a629-4a65-aeeb-066291a5ca3d';
    $display->content['new-d4815581-a629-4a65-aeeb-066291a5ca3d'] = $pane;
    $display->panels['center'][1] = 'new-d4815581-a629-4a65-aeeb-066291a5ca3d';
    $pane = new stdClass();
    $pane->pid = 'new-3b631d0d-0d98-4e76-a7b3-4455c4ae1b6e';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_basic_image_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3b631d0d-0d98-4e76-a7b3-4455c4ae1b6e';
    $display->content['new-3b631d0d-0d98-4e76-a7b3-4455c4ae1b6e'] = $pane;
    $display->panels['center'][2] = 'new-3b631d0d-0d98-4e76-a7b3-4455c4ae1b6e';
    $pane = new stdClass();
    $pane->pid = 'new-0bb7777a-2cc9-47ba-86c5-3f4f2709acd3';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_teaser';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0bb7777a-2cc9-47ba-86c5-3f4f2709acd3';
    $display->content['new-0bb7777a-2cc9-47ba-86c5-3f4f2709acd3'] = $pane;
    $display->panels['center'][3] = 'new-0bb7777a-2cc9-47ba-86c5-3f4f2709acd3';
    $pane = new stdClass();
    $pane->pid = 'new-d8215040-8c6e-4a0e-9b72-561e442b7711';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_status';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd8215040-8c6e-4a0e-9b72-561e442b7711';
    $display->content['new-d8215040-8c6e-4a0e-9b72-561e442b7711'] = $pane;
    $display->panels['center'][4] = 'new-d8215040-8c6e-4a0e-9b72-561e442b7711';
    $pane = new stdClass();
    $pane->pid = 'new-08a0448e-79de-43c2-996e-961d37586d2b';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_basic_file_file';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'file_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '08a0448e-79de-43c2-996e-961d37586d2b';
    $display->content['new-08a0448e-79de-43c2-996e-961d37586d2b'] = $pane;
    $display->panels['center'][5] = 'new-08a0448e-79de-43c2-996e-961d37586d2b';
    $pane = new stdClass();
    $pane->pid = 'new-641700b4-298d-4e20-913a-b214e8dd50af';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '641700b4-298d-4e20-913a-b214e8dd50af';
    $display->content['new-641700b4-298d-4e20-913a-b214e8dd50af'] = $pane;
    $display->panels['center'][6] = 'new-641700b4-298d-4e20-913a-b214e8dd50af';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-641700b4-298d-4e20-913a-b214e8dd50af';
  $panelizer->display = $display;
  $export['node:products:default:default'] = $panelizer;

  return $export;
}
