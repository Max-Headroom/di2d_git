<?php
/**
 * @file
 * content_lists.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function content_lists_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'lists';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Lists';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No content to display.';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_basic_image_image']['id'] = 'field_basic_image_image';
  $handler->display->display_options['fields']['field_basic_image_image']['table'] = 'field_data_field_basic_image_image';
  $handler->display->display_options['fields']['field_basic_image_image']['field'] = 'field_basic_image_image';
  $handler->display->display_options['fields']['field_basic_image_image']['label'] = '';
  $handler->display->display_options['fields']['field_basic_image_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_basic_image_image']['element_class'] = 'list-item-image';
  $handler->display->display_options['fields']['field_basic_image_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_basic_image_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_basic_image_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_basic_image_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_basic_image_image']['settings'] = array(
    'image_style' => 'list-thumbs',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_basic_image_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_basic_image_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_basic_image_image']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'list-item-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_teaser']['element_class'] = 'list-item-teaser';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['field_api_classes'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'read-more-link';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more...';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Updated date';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['sorts']['random']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['random']['expose']['label'] = 'Random';
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
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;

  /* Display: Content list pane */
  $handler = $view->new_display('panel_pane', 'Content list pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';

  /* Display: Sidebar Content list pane */
  $handler = $view->new_display('panel_pane', 'Sidebar Content list pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_basic_image_image']['id'] = 'field_basic_image_image';
  $handler->display->display_options['fields']['field_basic_image_image']['table'] = 'field_data_field_basic_image_image';
  $handler->display->display_options['fields']['field_basic_image_image']['field'] = 'field_basic_image_image';
  $handler->display->display_options['fields']['field_basic_image_image']['label'] = '';
  $handler->display->display_options['fields']['field_basic_image_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_basic_image_image']['element_class'] = 'list-item-image';
  $handler->display->display_options['fields']['field_basic_image_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_basic_image_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_basic_image_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_basic_image_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_basic_image_image']['settings'] = array(
    'image_style' => 'sidebar-list-thumbs',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_basic_image_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_basic_image_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_basic_image_image']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = 'sidebar-list-item-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $export['lists'] = $view;

  return $export;
}
