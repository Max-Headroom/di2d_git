<?php
/**
 * @file
 * di2d_carousel.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function di2d_carousel_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'carousel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Carousel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
  $handler->display->display_options['style_options']['interval'] = '5000';
  $handler->display->display_options['style_options']['navigation'] = 1;
  $handler->display->display_options['style_options']['indicators'] = 0;
  $handler->display->display_options['style_options']['pause'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = 'figure';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_image']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = TRUE;
  /* Field: Content: Image Caption */
  $handler->display->display_options['fields']['field_image_caption']['id'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['table'] = 'field_data_field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['field'] = 'field_image_caption';
  $handler->display->display_options['fields']['field_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption']['element_type'] = 'figcaption';
  $handler->display->display_options['fields']['field_image_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image_caption']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_image_caption']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_image_caption']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'carousel' => 'carousel',
  );

  /* Display: Main carousel pane */
  $handler = $view->new_display('panel_pane', 'Main carousel pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $export['carousel'] = $view;

  return $export;
}
