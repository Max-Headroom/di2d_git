<?php
/**
 * @file
 * services_page.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function services_page_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:services:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'services';
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
      'footer' => array(
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
    ),
    'contentmain' => array(
      'style' => 'kalacustomize',
    ),
    'sidebar' => array(
      'style' => 'kalacustomize',
    ),
    'footer' => array(
      'style' => 'kalacustomize',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '3a511e6e-651f-4060-a515-590eb17fbed0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3572ccfb-4af7-4610-9bad-b8d1da8a4ad3';
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
    $pane->uuid = '3572ccfb-4af7-4610-9bad-b8d1da8a4ad3';
    $display->content['new-3572ccfb-4af7-4610-9bad-b8d1da8a4ad3'] = $pane;
    $display->panels['contentmain'][0] = 'new-3572ccfb-4af7-4610-9bad-b8d1da8a4ad3';
    $pane = new stdClass();
    $pane->pid = 'new-50c6fd3a-e342-4c32-bdd5-37e64a26c7af';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'content-flexslider',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '50c6fd3a-e342-4c32-bdd5-37e64a26c7af';
    $display->content['new-50c6fd3a-e342-4c32-bdd5-37e64a26c7af'] = $pane;
    $display->panels['contentmain'][1] = 'new-50c6fd3a-e342-4c32-bdd5-37e64a26c7af';
    $pane = new stdClass();
    $pane->pid = 'new-b13df2a8-b0b0-4238-b624-1ffaf55b0340';
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
    $pane->uuid = 'b13df2a8-b0b0-4238-b624-1ffaf55b0340';
    $display->content['new-b13df2a8-b0b0-4238-b624-1ffaf55b0340'] = $pane;
    $display->panels['contentmain'][2] = 'new-b13df2a8-b0b0-4238-b624-1ffaf55b0340';
    $pane = new stdClass();
    $pane->pid = 'new-dea7ce24-1a67-4b9e-a952-e1d25309447c';
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
    $pane->uuid = 'dea7ce24-1a67-4b9e-a952-e1d25309447c';
    $display->content['new-dea7ce24-1a67-4b9e-a952-e1d25309447c'] = $pane;
    $display->panels['contentmain'][3] = 'new-dea7ce24-1a67-4b9e-a952-e1d25309447c';
    $pane = new stdClass();
    $pane->pid = 'new-d2c6a63a-8da8-4fea-a488-c39e92155265';
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
    $pane->uuid = 'd2c6a63a-8da8-4fea-a488-c39e92155265';
    $display->content['new-d2c6a63a-8da8-4fea-a488-c39e92155265'] = $pane;
    $display->panels['contentmain'][4] = 'new-d2c6a63a-8da8-4fea-a488-c39e92155265';
    $pane = new stdClass();
    $pane->pid = 'new-c3fb2d95-6f9e-4ecd-92a3-1ccbae54ae95';
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
    $pane->uuid = 'c3fb2d95-6f9e-4ecd-92a3-1ccbae54ae95';
    $display->content['new-c3fb2d95-6f9e-4ecd-92a3-1ccbae54ae95'] = $pane;
    $display->panels['contentmain'][5] = 'new-c3fb2d95-6f9e-4ecd-92a3-1ccbae54ae95';
    $pane = new stdClass();
    $pane->pid = 'new-3f5d4960-49f6-44b9-8888-1db1c2639b52';
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
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3f5d4960-49f6-44b9-8888-1db1c2639b52';
    $display->content['new-3f5d4960-49f6-44b9-8888-1db1c2639b52'] = $pane;
    $display->panels['footer'][0] = 'new-3f5d4960-49f6-44b9-8888-1db1c2639b52';
    $pane = new stdClass();
    $pane->pid = 'new-af45dc3c-0d90-4cbd-bb15-6d89e51c8b50';
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
      'widget_title' => 'Other Services',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'af45dc3c-0d90-4cbd-bb15-6d89e51c8b50';
    $display->content['new-af45dc3c-0d90-4cbd-bb15-6d89e51c8b50'] = $pane;
    $display->panels['sidebar'][0] = 'new-af45dc3c-0d90-4cbd-bb15-6d89e51c8b50';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b13df2a8-b0b0-4238-b624-1ffaf55b0340';
  $panelizer->display = $display;
  $export['node:services:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:services:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'services';
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
  $display->uuid = 'db55954b-3eda-4f4e-b3d6-40bb1a7f96a8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-13acba55-d759-4702-aa56-1442275afe5a';
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
    $pane->uuid = '13acba55-d759-4702-aa56-1442275afe5a';
    $display->content['new-13acba55-d759-4702-aa56-1442275afe5a'] = $pane;
    $display->panels['center'][0] = 'new-13acba55-d759-4702-aa56-1442275afe5a';
    $pane = new stdClass();
    $pane->pid = 'new-80233a20-69b3-4124-bb22-16eb7a02f4c5';
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
    $pane->uuid = '80233a20-69b3-4124-bb22-16eb7a02f4c5';
    $display->content['new-80233a20-69b3-4124-bb22-16eb7a02f4c5'] = $pane;
    $display->panels['center'][1] = 'new-80233a20-69b3-4124-bb22-16eb7a02f4c5';
    $pane = new stdClass();
    $pane->pid = 'new-cab22fab-b1b6-4881-afab-77254cfe70ee';
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
    $pane->uuid = 'cab22fab-b1b6-4881-afab-77254cfe70ee';
    $display->content['new-cab22fab-b1b6-4881-afab-77254cfe70ee'] = $pane;
    $display->panels['center'][2] = 'new-cab22fab-b1b6-4881-afab-77254cfe70ee';
    $pane = new stdClass();
    $pane->pid = 'new-ddf5d5d6-c036-4050-a2ac-f6d2037dc47d';
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
    $pane->uuid = 'ddf5d5d6-c036-4050-a2ac-f6d2037dc47d';
    $display->content['new-ddf5d5d6-c036-4050-a2ac-f6d2037dc47d'] = $pane;
    $display->panels['center'][3] = 'new-ddf5d5d6-c036-4050-a2ac-f6d2037dc47d';
    $pane = new stdClass();
    $pane->pid = 'new-060d0659-2d7c-4006-a515-58ff5f21fb22';
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
    $pane->uuid = '060d0659-2d7c-4006-a515-58ff5f21fb22';
    $display->content['new-060d0659-2d7c-4006-a515-58ff5f21fb22'] = $pane;
    $display->panels['center'][4] = 'new-060d0659-2d7c-4006-a515-58ff5f21fb22';
    $pane = new stdClass();
    $pane->pid = 'new-2676f73a-bdff-4378-9d37-f24421b4a564';
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
    $pane->uuid = '2676f73a-bdff-4378-9d37-f24421b4a564';
    $display->content['new-2676f73a-bdff-4378-9d37-f24421b4a564'] = $pane;
    $display->panels['center'][5] = 'new-2676f73a-bdff-4378-9d37-f24421b4a564';
    $pane = new stdClass();
    $pane->pid = 'new-d9126ca8-60b0-4da2-b81f-d3ec72550852';
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
    $pane->uuid = 'd9126ca8-60b0-4da2-b81f-d3ec72550852';
    $display->content['new-d9126ca8-60b0-4da2-b81f-d3ec72550852'] = $pane;
    $display->panels['center'][6] = 'new-d9126ca8-60b0-4da2-b81f-d3ec72550852';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d9126ca8-60b0-4da2-b81f-d3ec72550852';
  $panelizer->display = $display;
  $export['node:services:default:default'] = $panelizer;

  return $export;
}
