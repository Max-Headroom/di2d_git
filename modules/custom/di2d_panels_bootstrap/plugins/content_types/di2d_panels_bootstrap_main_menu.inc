<?php

/*
 * @file
 */

$plugin = array(
    'single' => TRUE,
    'title' => t('Bootstrap main menu'),
    'description' => t('Render main menu in Bootstrap Nav'),
    'category' => t('Bootstrap panes'),
    'edit form' => 'bootstrap_main_menu_edit_form',
    'render callback' => 'bootstrap_main_menu_render',
    'admin info' => 'bootstrap_main_menu_admin_info',
    'defaults' => array(
        'menu_type' => 'main',
        'section_menu_text' => '',
        'section_menu_array' => array(),
    ),
    'all contexts' => TRUE,
);

function bootstrap_main_menu_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $form['affix'] = array(
      '#type' => 'item',
      '#title' => t('Affix menu'),
      '#description' => t('To affix menu, use Bootstrap affix style setting.'),
  );

  $form['menu_type'] = array(
      '#type' => 'select',
      '#title' => t('Menu type'),
      '#description' => t(''),
      '#options' => array(
          'main' => 'Drupal Main menu',
          'section' => 'Section anchor menu',
      //'custom' => 'Custom menu links',
      ),
      '#default_value' => $conf('menu_type'),
  );

  $form['section_menu_text'] = array(
      '#description' => t('Enter each menu item on a new line. In the form of section number|Item name'),
      '#type' => 'textarea',
      '#default_value' => $conf['section_menu_text'],
      '#title' => t('Menu sections'),
      '#states' => array(
          'visible' => array(
              ':input[name="menu_type"]' => array(
                  array('value' => 'section'),
              ),
          ),
      ),
  );
  return $form;
}

function bootstrap_main_menu_edit_form_submit($form, &$form_state) {
  $form_state['conf']['menu_type'] = $form_state['values']['menu_type'];
  $form_state['conf']['section_menu_text'] = $form_state['values']['section_menu_text'];

  $values = array();
  $list = explode("\n", $form_state['values']['section_menu_text']);
  $list = array_map('trim', $list);
  $list = array_filter($list, 'strlen');

  foreach ($list as $position => $text) {
    $value = $key = FALSE;

    // Check for an explicit key.
    $matches = array();
    if (preg_match('/(.*)\|(.*)/', $text, $matches)) {
      $key = $matches[1];
      $value = $matches[2];
    }
    $values[$key] = $value;
  }
  $form_state['conf']['section_menu_array'] = $values;
}

/**
 * 'admin info' callback for panel pane.
 */
function bootstrap_main_menu_admin_info($subtype, $conf, $contexts) {
  $block = new stdClass;
  $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
  $block->content = '';
  return $block;
}

function bootstrap_main_menu_render($subtype, $conf, $panel_args, $context = NULL) {
  $items = array();
  switch ($conf['menu_type']) {
    case 'main':
      $tree = menu_tree_all_data('main-menu');
      dpm($tree, 'menu');
      foreach ($tree as $branch) {
        $items[$branch['link']['link_path']] = $branch['link']['link_title'];
      }
      break;

    case 'section':
      foreach ($conf['section_menu_array'] as $key => $value) {
        $items['section' . $key] = $value;
      }
      break;
  }

  $block = new stdClass();

  // initial content is blank
  $block->title = t('Main menu'); // This will be overridden by the user within the panel options.
  $block->content = theme('bootstrap_main_menu', array('items' => $items));

  return $block;
}
