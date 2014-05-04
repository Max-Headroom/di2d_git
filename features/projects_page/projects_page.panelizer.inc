<?php
/**
 * @file
 * projects_page.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function projects_page_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:projects:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'projects';
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
    'sidebar' => array(
      'style' => 'kalacustomize',
    ),
    'contentmain' => array(
      'style' => 'kalacustomize',
    ),
    'footer' => array(
      'style' => 'kalacustomize',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '1df77d80-8c9a-4c65-952e-852a9753a3d8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-248b26df-207b-496b-9639-60793909dc1f';
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
    $pane->uuid = '248b26df-207b-496b-9639-60793909dc1f';
    $display->content['new-248b26df-207b-496b-9639-60793909dc1f'] = $pane;
    $display->panels['contentmain'][0] = 'new-248b26df-207b-496b-9639-60793909dc1f';
    $pane = new stdClass();
    $pane->pid = 'new-62d6c657-bb39-44ba-8f7d-c29b680e70bd';
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
    $pane->uuid = '62d6c657-bb39-44ba-8f7d-c29b680e70bd';
    $display->content['new-62d6c657-bb39-44ba-8f7d-c29b680e70bd'] = $pane;
    $display->panels['contentmain'][1] = 'new-62d6c657-bb39-44ba-8f7d-c29b680e70bd';
    $pane = new stdClass();
    $pane->pid = 'new-42b41f2d-d487-41ee-8321-21fe1a9efd22';
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
    $pane->uuid = '42b41f2d-d487-41ee-8321-21fe1a9efd22';
    $display->content['new-42b41f2d-d487-41ee-8321-21fe1a9efd22'] = $pane;
    $display->panels['contentmain'][2] = 'new-42b41f2d-d487-41ee-8321-21fe1a9efd22';
    $pane = new stdClass();
    $pane->pid = 'new-fa16f455-437a-41c1-810c-3e54c7df63ff';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'fa16f455-437a-41c1-810c-3e54c7df63ff';
    $display->content['new-fa16f455-437a-41c1-810c-3e54c7df63ff'] = $pane;
    $display->panels['contentmain'][3] = 'new-fa16f455-437a-41c1-810c-3e54c7df63ff';
    $pane = new stdClass();
    $pane->pid = 'new-257ca021-5022-4b52-b589-833f71d9e3f9';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '257ca021-5022-4b52-b589-833f71d9e3f9';
    $display->content['new-257ca021-5022-4b52-b589-833f71d9e3f9'] = $pane;
    $display->panels['contentmain'][4] = 'new-257ca021-5022-4b52-b589-833f71d9e3f9';
    $pane = new stdClass();
    $pane->pid = 'new-cc0899dd-4a7a-4aa2-9657-2d9925647fe3';
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
    $pane->uuid = 'cc0899dd-4a7a-4aa2-9657-2d9925647fe3';
    $display->content['new-cc0899dd-4a7a-4aa2-9657-2d9925647fe3'] = $pane;
    $display->panels['contentmain'][5] = 'new-cc0899dd-4a7a-4aa2-9657-2d9925647fe3';
    $pane = new stdClass();
    $pane->pid = 'new-07523146-75aa-4a81-9312-6adcc7d67ef0';
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
    $pane->uuid = '07523146-75aa-4a81-9312-6adcc7d67ef0';
    $display->content['new-07523146-75aa-4a81-9312-6adcc7d67ef0'] = $pane;
    $display->panels['footer'][0] = 'new-07523146-75aa-4a81-9312-6adcc7d67ef0';
    $pane = new stdClass();
    $pane->pid = 'new-9c95bf21-188f-4f23-ad3f-9a0935692027';
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
          'projects' => 'projects',
        ),
        'sort_order' => 'DESC',
        'sort_by' => 'changed',
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Other Projects',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9c95bf21-188f-4f23-ad3f-9a0935692027';
    $display->content['new-9c95bf21-188f-4f23-ad3f-9a0935692027'] = $pane;
    $display->panels['sidebar'][0] = 'new-9c95bf21-188f-4f23-ad3f-9a0935692027';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-42b41f2d-d487-41ee-8321-21fe1a9efd22';
  $panelizer->display = $display;
  $export['node:projects:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:projects:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'projects';
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
  $display->uuid = '66036c11-0864-4d3f-ba51-80d48f3b7baa';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b1eea4d4-5f25-4cc1-bb10-9f2023b3a210';
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
    $pane->uuid = 'b1eea4d4-5f25-4cc1-bb10-9f2023b3a210';
    $display->content['new-b1eea4d4-5f25-4cc1-bb10-9f2023b3a210'] = $pane;
    $display->panels['center'][0] = 'new-b1eea4d4-5f25-4cc1-bb10-9f2023b3a210';
    $pane = new stdClass();
    $pane->pid = 'new-006bf184-b2fb-44f9-bda2-7547fc09c71b';
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
    $pane->uuid = '006bf184-b2fb-44f9-bda2-7547fc09c71b';
    $display->content['new-006bf184-b2fb-44f9-bda2-7547fc09c71b'] = $pane;
    $display->panels['center'][1] = 'new-006bf184-b2fb-44f9-bda2-7547fc09c71b';
    $pane = new stdClass();
    $pane->pid = 'new-e92acd44-c695-47f3-bcf1-09386a85f7ad';
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
    $pane->uuid = 'e92acd44-c695-47f3-bcf1-09386a85f7ad';
    $display->content['new-e92acd44-c695-47f3-bcf1-09386a85f7ad'] = $pane;
    $display->panels['center'][2] = 'new-e92acd44-c695-47f3-bcf1-09386a85f7ad';
    $pane = new stdClass();
    $pane->pid = 'new-c924511d-b2c0-4d3f-b9f9-5853fb761c99';
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
    $pane->uuid = 'c924511d-b2c0-4d3f-b9f9-5853fb761c99';
    $display->content['new-c924511d-b2c0-4d3f-b9f9-5853fb761c99'] = $pane;
    $display->panels['center'][3] = 'new-c924511d-b2c0-4d3f-b9f9-5853fb761c99';
    $pane = new stdClass();
    $pane->pid = 'new-0f42e373-05ca-4bd3-afbe-9d2c3c4a510b';
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
    $pane->uuid = '0f42e373-05ca-4bd3-afbe-9d2c3c4a510b';
    $display->content['new-0f42e373-05ca-4bd3-afbe-9d2c3c4a510b'] = $pane;
    $display->panels['center'][4] = 'new-0f42e373-05ca-4bd3-afbe-9d2c3c4a510b';
    $pane = new stdClass();
    $pane->pid = 'new-1de50e44-6711-4767-9689-abcbce4fc37f';
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
    $pane->uuid = '1de50e44-6711-4767-9689-abcbce4fc37f';
    $display->content['new-1de50e44-6711-4767-9689-abcbce4fc37f'] = $pane;
    $display->panels['center'][5] = 'new-1de50e44-6711-4767-9689-abcbce4fc37f';
    $pane = new stdClass();
    $pane->pid = 'new-db6becb6-078b-4feb-84b6-e00a35da1aff';
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
    $pane->uuid = 'db6becb6-078b-4feb-84b6-e00a35da1aff';
    $display->content['new-db6becb6-078b-4feb-84b6-e00a35da1aff'] = $pane;
    $display->panels['center'][6] = 'new-db6becb6-078b-4feb-84b6-e00a35da1aff';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-db6becb6-078b-4feb-84b6-e00a35da1aff';
  $panelizer->display = $display;
  $export['node:projects:default:default'] = $panelizer;

  return $export;
}
