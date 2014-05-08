<?php

/**
 * @file
 * Definition of the 'kalacustomize' panels style plugin.
 */
$plugin = array(
    'title' => t('Bootstrap Wraps'),
    'description' => t('Bootstrap wrapper classes (Stolen from Kalatheme and others)'),
    'render region' => 'bootstrap_wraps_render_region',
    'render pane' => 'bootstrap_wraps_render_pane',
    'settings form' => 'bootstrap_wraps_pane_settings_form',
    'pane settings form' => 'bootstrap_wraps_pane_settings_form',
    'weight' => 100,
);

/**
 * Theme function for the region style.
 */
function theme_bootstrap_wraps_render_region($vars) {
  $content = $vars['panes'];
  $settings = $vars['settings'];

  $settings['attributes'] = '';
  $settings['attributes'] .= _bootstrap_wraps_get_styles($settings['devices']);
  $settings['attributes'] .= _bootstrap_wraps_get_styles($settings['pane_style']);
  $settings['attributes'] .= _bootstrap_wraps_column_classes($vars);

  // Theme.
  if (!empty($settings['theme']) && $settings['theme']) {
    $output = theme('panels_default_style_render_region', $vars);
  }
  else {
    $output = implode(PHP_EOL, $content);
  }

  // Wrap
  if (!empty($output)) {
    $content_wrapper = _bootstrap_wraps_class_wrapper($settings);
    $output = $content_wrapper['prefix'] . $output . $content_wrapper['suffix'];
    $wrapped_output = _bootstrap_wraps_final_wrap($output, $settings);
    return $wrapped_output;
  }

  return $output;
}

/**
 * Theme function for the pane style.
 */
function theme_bootstrap_wraps_render_pane($vars) {
  $content = &$vars['content'];
  $settings = $vars['settings'];

  $affix = _bootstrap_wraps_attach_affix($settings['pane_style'], $settings['affix']['offset_top'], $settings['affix']['offset_bottom']);

  // This is needed to prevent throwing an error in php 5.5+
  if (!isset($content->css_class)) {
    $content->css_class = '';
  }

  $content->css_class .= _bootstrap_wraps_get_styles($settings['devices']);
  $content->css_class .= _bootstrap_wraps_get_styles($settings['pane_style']);

  $output = theme('panels_pane', $vars);

  // Wrap
  if (!empty($output)) {
    $wrapped_output = _bootstrap_wraps_final_wrap($output, $settings);
    return $wrapped_output;
  }

  return $output;
}

/**
 * Options for the Panels style plugin to help style panes.
 */
function bootstrap_wraps_pane_settings_form($style_settings, $display, $pid, $type, $form_state) {

  $pane_style_default_value = isset($style_settings['pane_style']) ? $style_settings['pane_style'] : '';
  $pane_options = array(
      'container' => 'Container',
      'start-container' => 'Start Container (For groups)',
      'end-container' => 'End Container (For groups)',
      'pull-left' => 'Float Left',
      'pull-right' => 'Float Right',
      'clearfix' => 'Clearfix',
      'jumbotron' => 'Jumbotron',
      'well' => 'Well',
      'pane' => 'Pane',
      'alert' => 'Alert',
      'affix' => 'Affix',
  );

  $form['pane_style'] = array(
      '#title' => t('Styles'),
      '#prefix' => '<div class="well container-inline">',
      '#suffix' => '</div>',
      '#type' => 'checkboxes',
      '#options' => $pane_options,
      '#default_value' => $pane_style_default_value,
  );

  $form['affix'] = array(
      '#collapsed' => '0',
      '#type' => 'fieldset',
      '#collapsible' => '0',
      '#title' => t('Affix settings'),
      '#states' => array(
          'visible' => array(
              ':input[name="settings[pane_style][affix]"]' => array('checked' => TRUE),
          ),
      ),
  );

  $form['affix']['offset_top'] = array(
      '#type' => 'textfield',
      '#title' => t('Offset Top (px)'),
      '#default_value' => (!empty($style_settings['affix']['offset_top'])) ? $style_settings['affix']['offset_top'] : '',
      '#prefix' => '<div class="well container-inline">',
      '#suffix' => '</div>',
  );
  $form['affix']['offset_bottom'] = array(
      '#type' => 'textfield',
      '#title' => t('Offset Bottom (px)'),
      '#default_value' => (!empty($style_settings['affix']['offset_bottom'])) ? $style_settings['affix']['offset_bottom'] : '',
      '#prefix' => '<div class="well container-inline">',
      '#suffix' => '</div>',
  );

  $mobile_options = array(
      'hidden-xs' => 'Phone',
      'hidden-sm' => 'Tablet',
      'hidden-md' => 'Desktop',
      'hidden-lg' => 'Large Desktop',
  );
  $form['devices'] = array(
      '#prefix' => '<div class="well container-inline">',
      '#suffix' => '</div>',
      '#type' => 'checkboxes',
      '#options' => $mobile_options,
      '#title' => t('Hide this pane on the following devices.'),
      '#default_value' => $style_settings['devices'],
  );

  $pane_id_default_value = isset($style_settings['pane_id']) ? $style_settings['pane_id'] : '';
  $pane_id_options = array(
      'header' => 'Header',
      'footer' => 'Footer',
  );

  $form['pane_id'] = array(
      '#title' => t('ID wraps'),
      '#prefix' => '<div class="well container-inline">',
      '#suffix' => '</div>',
      '#type' => 'radios',
      '#options' => $pane_id_options,
      '#default_value' => $pane_id_default_value,
  );


  $pane_sections_default_value = isset($style_settings['pane_sections']) ? $style_settings['pane_sections'] : '';
  $pane_sections_options = array(
      '1' => 'Section 1',
      '2' => 'Section 2',
      '3' => 'Section 3',
      '4' => 'Section 4',
      '5' => 'Section 5',
      '6' => 'Section 6',
      '7' => 'Section 7',
      '8' => 'Section 8',
      '9' => 'Section 9',
      '10' => 'Section 10',
  );

  $form['pane_sections'] = array(
      '#title' => t('Sections(Anchors)'),
      '#prefix' => '<div class="well container-inline">',
      //'#suffix' => '</div>',
      '#type' => 'radios',
      '#options' => $pane_sections_options,
      '#default_value' => $pane_sections_default_value,
  );

  $form['section_divider'] = array(
      '#title' => t('Add divider class to section'),
      //'#prefix' => '<div class="well container-inline">',
      '#suffix' => '</div>',
      '#type' => 'checkbox',
      '#default_value' => isset($style_settings['section_divider']) ? $style_settings['section_divider'] : '',
  );

  //Bootstrap columns
  $options = range(0, 12);
  $options[0] = t('-- None --');

  $form['column'] = array(
      '#collapsed' => '1',
      '#type' => 'fieldset',
      '#collapsible' => '1',
      '#title' => t('Column'),
      '#prefix' => '<div class="well">',
      '#suffix' => '</div>',
  );

  $form['column']['column_size_xs'] = array(
      '#type' => 'select',
      '#title' => t('Column size XS'),
      '#options' => $options,
      '#default_value' => isset($style_settings['column_size_xs']) ? $style_settings['column_size_xs'] : _bootstrap_wraps_get_default_column_size($display->layout, $pid),
      '#description' => t('Column size for Extra small devices (col-xs-*)'),
  );

  $form['column']['column_size_sm'] = array(
      '#type' => 'select',
      '#title' => t('Column size SM'),
      '#options' => $options,
      '#default_value' => isset($style_settings['column_size_sm']) ? $style_settings['column_size_sm'] : _bootstrap_wraps_get_default_column_size($display->layout, $pid),
      '#description' => t('Column size for Small devices (col-sm-*)'),
  );

  $form['column']['column_size_md'] = array(
      '#type' => 'select',
      '#title' => t('Сolumn size MD'),
      '#options' => $options,
      '#default_value' => isset($style_settings['column_size_md']) ? $style_settings['column_size_md'] : _bootstrap_wraps_get_default_column_size($display->layout, $pid),
      '#description' => t('Column size for Medium devices (col-md-*)'),
  );

  $form['column']['column_size_lg'] = array(
      '#type' => 'select',
      '#title' => t('Column size LG'),
      '#options' => $options,
      '#default_value' => isset($style_settings['column_size_lg']) ? $style_settings['column_size_lg'] : _bootstrap_wraps_get_default_column_size($display->layout, $pid),
      '#description' => t('Column size for Large devices (col-lg-*)'),
  );

  $form['offset'] = array(
      '#collapsed' => '1',
      '#type' => 'fieldset',
      '#collapsible' => '1',
      '#title' => t('Offset'),
      '#prefix' => '<div class="well">',
      '#suffix' => '</div>',
  );
  $form['offset']['offset_size_xs'] = array(
      '#type' => 'select',
      '#title' => t('Offset size XS'),
      '#options' => $options,
      '#default_value' => isset($style_settings['offset_size_xs']) ? $style_settings['offset_size_xs'] : 0,
  );

  $form['offset']['offset_size_sm'] = array(
      '#type' => 'select',
      '#title' => t('Offset size SM'),
      '#options' => $options,
      '#default_value' => isset($style_settings['offset_size_sm']) ? $style_settings['offset_size_sm'] : 0,
  );

  $form['offset']['offset_size_md'] = array(
      '#type' => 'select',
      '#title' => t('Offset size MD'),
      '#options' => $options,
      '#default_value' => isset($style_settings['offset_size_md']) ? $style_settings['offset_size_md'] : 0,
  );

  $form['offset']['offset_size_lg'] = array(
      '#type' => 'select',
      '#title' => t('Offset size LG'),
      '#options' => $options,
      '#default_value' => isset($style_settings['offset_size_lg']) ? $style_settings['offset_size_lg'] : 0,
  );

  $form['push'] = array(
      '#collapsed' => '1',
      '#type' => 'fieldset',
      '#collapsible' => '1',
      '#title' => t('Push'),
      '#prefix' => '<div class="well">',
      '#suffix' => '</div>',
  );

  $form['push']['push_size_xs'] = array(
      '#type' => 'select',
      '#title' => t('Push size XS'),
      '#options' => $options,
      '#default_value' => isset($style_settings['push_size_xs']) ? $style_settings['push_size_xs'] : 0,
  );

  $form['push']['push_size_sm'] = array(
      '#type' => 'select',
      '#title' => t('Push size SM'),
      '#options' => $options,
      '#default_value' => isset($style_settings['push_size_sm']) ? $style_settings['push_size_sm'] : 0,
  );

  $form['push']['push_size_md'] = array(
      '#type' => 'select',
      '#title' => t('Push size MD'),
      '#options' => $options,
      '#default_value' => isset($style_settings['push_size_md']) ? $style_settings['push_size_md'] : 0,
  );

  $form['push']['push_size_lg'] = array(
      '#type' => 'select',
      '#title' => t('Push size LG'),
      '#options' => $options,
      '#default_value' => isset($style_settings['push_size_lg']) ? $style_settings['push_size_lg'] : 0,
  );

  $form['pull'] = array(
      '#collapsed' => '1',
      '#type' => 'fieldset',
      '#collapsible' => '1',
      '#title' => t('Pull'),
      '#prefix' => '<div class="well">',
      '#suffix' => '</div>',
  );

  $form['pull']['pull_size_xs'] = array(
      '#type' => 'select',
      '#title' => t('Pull size XS'),
      '#options' => $options,
      '#default_value' => isset($style_settings['pull_size_xs']) ? $style_settings['pull_size_xs'] : 0,
  );

  $form['pull']['pull_size_sm'] = array(
      '#type' => 'select',
      '#title' => t('Pull size SM'),
      '#options' => $options,
      '#default_value' => isset($style_settings['pull_size_sm']) ? $style_settings['pull_size_sm'] : 0,
  );

  $form['pull']['pull_size_md'] = array(
      '#type' => 'select',
      '#title' => t('Pull size MD'),
      '#options' => $options,
      '#default_value' => isset($style_settings['pull_size_md']) ? $style_settings['pull_size_md'] : 0,
  );

  $form['pull']['pull_size_lg'] = array(
      '#type' => 'select',
      '#title' => t('Pull size LG'),
      '#options' => $options,
      '#default_value' => isset($style_settings['pull_size_lg']) ? $style_settings['pull_size_lg'] : 0,
  );

  return $form;
}

/**
 * Add affix JS.
 *
 * @return string
 *   Affix wrapper start.
 */
function _bootstrap_wraps_attach_affix($styles, $offset_top, $offset_bottom) {

  if (isset($styles['affix']) && $styles['affix']) {
    //<div data-spy="affix" data-offset-top="60" data-offset-bottom="200">
    $affix_styles = '<div';
    $affix_styles .= ' data-spy="affix"';
    $affix_styles .= isset($offset_top) ? ' data-offset-top="' . $offset_top . '"' : 0;

    if (isset($offset_bottom) && $offset_bottom) {
      $affix_styles .= ' data-offset-bottom = "' . $offset_bottom . '"';
    }
    $affix_styles .= '>';

    return $affix_styles;
  }
  else {
    return '';
  }
}

/**
 * Get pane/region styles depending on chosen classes.
 *
 * @return string
 *   build class string.
 */
function _bootstrap_wraps_get_styles($styles = array()) {
  if (isset($styles)) {
    foreach ($styles as $key => $class) {
      if ($class === 0) {
        unset($styles[$key]);
      }

      if ($class === 'affix') {
        unset($styles[$key]);
      }

      if ($class === 'container') {
        unset($styles[$key]);
      }

      if ($class === 'start-container') {
        unset($styles[$key]);
      }

      if ($class === 'end-container') {
        unset($styles[$key]);
      }
    }
    return $styles ? ' ' . implode(' ', $styles) : '';
  }
}

/** Apply Bootstrap column classes
 *
 * @return string
 * build class string
 */
function _bootstrap_wraps_column_classes($vars) {
  $display = $vars['display'];
  $panes = $vars['panes'];
  $settings = $vars['settings'];

  $column_sizes = array(
      'xs', // Extra small devices
      'sm', // Small devices
      'md', // Medium devices
      'lg', // Large devices
  );

  $layouts = array(
      'bootstrap_twocol_stacked',
      'bootstrap_threecol_stacked',
  );

  if (in_array($display->layout, $layouts) && $panes) {
    $class = array('panel-panel', $vars['region_id']);

    foreach ($column_sizes as $size) {
      $column_size = 'column_size_' . $size;
      $offset_size = 'offset_size_' . $size;
      $push_size = 'push_size_' . $size;
      $pull_size = 'pull_size_' . $size;
      if (isset($settings[$column_size]) && !empty($settings[$column_size])) {
        $class[] = 'col-' . $size . '-' . $settings[$column_size];
      }
      if (isset($settings[$offset_size]) && !empty($settings[$offset_size])) {
        $class[] = 'col-' . $size . '-offset-' . $settings[$offset_size];
      }
      if (isset($settings[$push_size]) && !empty($settings[$push_size])) {
        $class[] = 'col-' . $size . '-push-' . $settings[$push_size];
      }
      if (isset($settings[$pull_size]) && !empty($settings[$pull_size])) {
        $class[] = 'col-' . $size . '-pull-' . $settings[$pull_size];
      }
    }

    $class = ' ' . implode(' ', $class);

    return $class;
  }
}

/**
 * Create a region wrapper from provided attributes.
 *
 * @return array
 *   Array with prefix and suffix keys.
 */
function _bootstrap_wraps_class_wrapper($item = array()) {
  $wrap = array();
  $wrap_class = '';

  if (!empty($item['attributes'])) {
    $value = $item['attributes'];
    $wrap_class = " class=\"$value\"";
  }

  $wrap['prefix'] = '<div ' . $wrap_class . '>';
  $wrap['suffix'] = '</div>';

  $wrap['prefix'] = PHP_EOL . $wrap['prefix'];
  $wrap['suffix'] = $wrap['suffix'] . PHP_EOL;

  return $wrap;
}

function _bootstrap_wraps_get_default_column_size($layout, $pid) {
  if (in_array($pid, array('top', 'bottom'))) {
    return 12;
  }

  if ($layout == 'bootstrap_twocol_stacked') {
    return 6;
  }

  if ($layout == 'bootstrap_threecol_stacked') {
    return 4;
  }

  return 1;
}

/** Do final wrap of output with all settings
 *
 * @return string
 *
 */
function _bootstrap_wraps_final_wrap($content, $settings) {
  //dpm($settings);
  $affix = _bootstrap_wraps_attach_affix($settings['pane_style'], $settings['affix']['offset_top'], $settings['affix']['offset_bottom']);
  $wrapped_output = '';

  //Section and divider
  if (isset($settings['pane_sections']) && $settings['pane_sections']) {
    $wrapped_output .= '<div id = "section' . $settings['pane_sections'] . '"';

    if (isset($settings['section_divider']) && $settings['section_divider']) {
      $wrapped_output .= ' class = "divider" ';
    }

    $wrapped_output .= '></div>' . PHP_EOL; //Section is not a wrapper
  }

  //Div ID
  if (isset($settings['pane_id']) && $settings['pane_id']) {
    $wrapped_output .= '<div id = "' . $settings['pane_id'] . '">' . PHP_EOL;
  }

  //Container
  if ((isset($settings['pane_style']['container']) && $settings['pane_style']['container']) || (isset($settings['pane_style']['start-container']) && $settings['pane_style']['start-container'])) {
    $wrapped_output .= '<div class = "container">' . PHP_EOL;
  }

  //Affix
  $wrapped_output .= $affix . PHP_EOL;

  //Actual content with classes
  $wrapped_output .= $content;

  //Close Affix
  if (isset($affix) && $affix) {
    $wrapped_output .= '</div>' . PHP_EOL;
  }

  //Close Container
  if ((isset($settings['pane_style']['container']) && $settings['pane_style']['container']) || (isset($settings['pane_style']['end-container']) && $settings['pane_style']['end-container'])) {
    $wrapped_output .= '</div>' . PHP_EOL;
  }

  //Close Div ID
  if (isset($settings['pane_id']) && $settings['pane_id']) {
    $wrapped_output .= '</div>' . PHP_EOL;
  }

  return $wrapped_output;
}
