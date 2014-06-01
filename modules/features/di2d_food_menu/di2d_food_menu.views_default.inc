<?php
/**
 * @file
 * di2d_food_menu.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function di2d_food_menu_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'food_menu_panes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'food menu panes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'food-menu-container';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'food-menu-item clearfix';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Food menu items (field_food_menu_items) */
  $handler->display->display_options['relationships']['field_food_menu_items_value']['id'] = 'field_food_menu_items_value';
  $handler->display->display_options['relationships']['field_food_menu_items_value']['table'] = 'field_data_field_food_menu_items';
  $handler->display->display_options['relationships']['field_food_menu_items_value']['field'] = 'field_food_menu_items_value';
  $handler->display->display_options['relationships']['field_food_menu_items_value']['label'] = 'food menu items';
  $handler->display->display_options['relationships']['field_food_menu_items_value']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['empty_zero'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Field collection item: Item title */
  $handler->display->display_options['fields']['field_item_title']['id'] = 'field_item_title';
  $handler->display->display_options['fields']['field_item_title']['table'] = 'field_data_field_item_title';
  $handler->display->display_options['fields']['field_item_title']['field'] = 'field_item_title';
  $handler->display->display_options['fields']['field_item_title']['relationship'] = 'field_food_menu_items_value';
  $handler->display->display_options['fields']['field_item_title']['label'] = '';
  $handler->display->display_options['fields']['field_item_title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_item_title']['element_class'] = 'food-menu-item-title';
  $handler->display->display_options['fields']['field_item_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_item_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_item_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_item_title']['field_api_classes'] = TRUE;
  /* Field: Field collection item: Item description */
  $handler->display->display_options['fields']['field_item_description']['id'] = 'field_item_description';
  $handler->display->display_options['fields']['field_item_description']['table'] = 'field_data_field_item_description';
  $handler->display->display_options['fields']['field_item_description']['field'] = 'field_item_description';
  $handler->display->display_options['fields']['field_item_description']['relationship'] = 'field_food_menu_items_value';
  $handler->display->display_options['fields']['field_item_description']['label'] = '';
  $handler->display->display_options['fields']['field_item_description']['element_type'] = 'article';
  $handler->display->display_options['fields']['field_item_description']['element_class'] = 'food-menu-item-description';
  $handler->display->display_options['fields']['field_item_description']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Item price 1 */
  $handler->display->display_options['fields']['field_item_price_1']['id'] = 'field_item_price_1';
  $handler->display->display_options['fields']['field_item_price_1']['table'] = 'field_data_field_item_price_1';
  $handler->display->display_options['fields']['field_item_price_1']['field'] = 'field_item_price_1';
  $handler->display->display_options['fields']['field_item_price_1']['relationship'] = 'field_food_menu_items_value';
  $handler->display->display_options['fields']['field_item_price_1']['label'] = '';
  $handler->display->display_options['fields']['field_item_price_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_item_price_1']['element_class'] = 'food-menu-item-price-1';
  $handler->display->display_options['fields']['field_item_price_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_item_price_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_item_price_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_item_price_1']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_item_price_1']['field_api_classes'] = TRUE;
  /* Field: Field collection item: Item price 2 */
  $handler->display->display_options['fields']['field_item_price_2']['id'] = 'field_item_price_2';
  $handler->display->display_options['fields']['field_item_price_2']['table'] = 'field_data_field_item_price_2';
  $handler->display->display_options['fields']['field_item_price_2']['field'] = 'field_item_price_2';
  $handler->display->display_options['fields']['field_item_price_2']['relationship'] = 'field_food_menu_items_value';
  $handler->display->display_options['fields']['field_item_price_2']['label'] = '';
  $handler->display->display_options['fields']['field_item_price_2']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_item_price_2']['element_class'] = 'food-menu-item-price-2';
  $handler->display->display_options['fields']['field_item_price_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_item_price_2']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_item_price_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_item_price_2']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_item_price_2']['field_api_classes'] = TRUE;
  /* Field: Field collection item: Item price 3 */
  $handler->display->display_options['fields']['field_item_price_3']['id'] = 'field_item_price_3';
  $handler->display->display_options['fields']['field_item_price_3']['table'] = 'field_data_field_item_price_3';
  $handler->display->display_options['fields']['field_item_price_3']['field'] = 'field_item_price_3';
  $handler->display->display_options['fields']['field_item_price_3']['relationship'] = 'field_food_menu_items_value';
  $handler->display->display_options['fields']['field_item_price_3']['label'] = '';
  $handler->display->display_options['fields']['field_item_price_3']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_item_price_3']['element_class'] = 'food-menu-item-price-3';
  $handler->display->display_options['fields']['field_item_price_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_item_price_3']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_item_price_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_item_price_3']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_item_price_3']['field_api_classes'] = TRUE;
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
    'food_menu' => 'food_menu',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Menu title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;

  /* Display: Food menu pane */
  $handler = $view->new_display('panel_pane', 'Food menu pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'food-menu-header';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'food-menu-main-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'food-menu-main-title-wrapper';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Overview */
  $handler->display->display_options['fields']['field_overview']['id'] = 'field_overview';
  $handler->display->display_options['fields']['field_overview']['table'] = 'field_data_field_overview';
  $handler->display->display_options['fields']['field_overview']['field'] = 'field_overview';
  $handler->display->display_options['fields']['field_overview']['label'] = '';
  $handler->display->display_options['fields']['field_overview']['element_type'] = 'article';
  $handler->display->display_options['fields']['field_overview']['element_class'] = 'food-menu-overview';
  $handler->display->display_options['fields']['field_overview']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_overview']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_overview']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_overview']['empty'] = '<span class="nothing">&nbsp;</span>';
  $handler->display->display_options['fields']['field_overview']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_overview']['field_api_classes'] = TRUE;
  /* Field: Content: Label Column 1 */
  $handler->display->display_options['fields']['field_label_column_1']['id'] = 'field_label_column_1';
  $handler->display->display_options['fields']['field_label_column_1']['table'] = 'field_data_field_label_column_1';
  $handler->display->display_options['fields']['field_label_column_1']['field'] = 'field_label_column_1';
  $handler->display->display_options['fields']['field_label_column_1']['label'] = '';
  $handler->display->display_options['fields']['field_label_column_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_label_column_1']['alter']['text'] = '<span class="food-menu-item-label">[field_label_column_1]</span>';
  $handler->display->display_options['fields']['field_label_column_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_label_column_1']['element_class'] = 'food-menu-item-price-label-1';
  $handler->display->display_options['fields']['field_label_column_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_label_column_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_label_column_1']['empty'] = '<span class="nothing">&nbsp;</span>';
  $handler->display->display_options['fields']['field_label_column_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_label_column_1']['field_api_classes'] = TRUE;
  /* Field: Content: Label Column 2 */
  $handler->display->display_options['fields']['field_label_column_2']['id'] = 'field_label_column_2';
  $handler->display->display_options['fields']['field_label_column_2']['table'] = 'field_data_field_label_column_2';
  $handler->display->display_options['fields']['field_label_column_2']['field'] = 'field_label_column_2';
  $handler->display->display_options['fields']['field_label_column_2']['label'] = '';
  $handler->display->display_options['fields']['field_label_column_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_label_column_2']['alter']['text'] = '<span class="food-menu-item-label">[field_label_column_2]</span>';
  $handler->display->display_options['fields']['field_label_column_2']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_label_column_2']['element_class'] = 'food-menu-item-price-label-2';
  $handler->display->display_options['fields']['field_label_column_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_label_column_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_label_column_2']['empty'] = '<span class="nothing">&nbsp;</span>';
  $handler->display->display_options['fields']['field_label_column_2']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_label_column_2']['field_api_classes'] = TRUE;
  /* Field: Content: Label Column 3 */
  $handler->display->display_options['fields']['field_label_column_3']['id'] = 'field_label_column_3';
  $handler->display->display_options['fields']['field_label_column_3']['table'] = 'field_data_field_label_column_3';
  $handler->display->display_options['fields']['field_label_column_3']['field'] = 'field_label_column_3';
  $handler->display->display_options['fields']['field_label_column_3']['label'] = '';
  $handler->display->display_options['fields']['field_label_column_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_label_column_3']['alter']['text'] = '<span class="food-menu-item-label">[field_label_column_3]</span>';
  $handler->display->display_options['fields']['field_label_column_3']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_label_column_3']['element_class'] = 'food-menu-item-price-label-3 clearfix';
  $handler->display->display_options['fields']['field_label_column_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_label_column_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_label_column_3']['empty'] = '<span class="nothing">&nbsp;</span>';
  $handler->display->display_options['fields']['field_label_column_3']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_label_column_3']['field_api_classes'] = TRUE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'panel_pane_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_arguments'] = FALSE;
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Food menu items pane */
  $handler = $view->new_display('panel_pane', 'Food menu items pane', 'panel_pane_2');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['food_menu_panes'] = $view;

  return $export;
}
