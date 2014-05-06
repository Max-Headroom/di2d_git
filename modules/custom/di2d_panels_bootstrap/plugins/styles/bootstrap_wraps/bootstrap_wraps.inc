<?php

/**
 * @file
 * Definition of the 'kalacustomize' panels style plugin.
 */
$plugin = array(
    'title' => t('Bootstrap Wraps'),
    'description' => t('Bootstrap wrapper classes (Stolen from Kalatheme)'),
    'render region' => 'bootstrap_wraps_render_region',
    'render pane' => 'bootstrap_wraps_render_pane',
    'settings form' => 'bootstrap_wraps_pane_settings_form',
    'pane settings form' => 'bootstrap_wraps_pane_settings_form',
    'weight' => 100,
);

/**
 * Theme fuction for the region style.
 */
function theme_bootstrap_wraps_render_region($vars) {
  $content = $vars['panes'];
  $settings = $vars['settings'];

  $affix = _bootstrap_wraps_attach_affix($settings['pane_style'], $settings['affix']['offset_top'], $settings['affix']['offset_bottom']);

  $settings['attributes'] = '';
  $settings['attributes'] .= _bootstrap_wraps_get_styles($settings['devices']);
  $settings['attributes'] .= _bootstrap_wraps_get_styles($settings['pane_style']);

  // Theme.
  if (!empty($settings['theme']) && $settings['theme']) {
    $output = theme('panels_default_style_render_region', $vars);
  }
  else {
    $output = implode(PHP_EOL, $content);
  }

  // Wrap
  if (!empty($output)) {
    $content_wrapper = _bootstrap_wraps_wrapper($settings);
    $wrapped_output = $affix;
    $wrapped_output .= $content_wrapper['prefix'] . $output . $content_wrapper['suffix'];

    if (isset($affix) && $affix) {
      $wrapped_output .= '</div>';
    }
  }

  return $wrapped_output;
}

/**
 * Theme function for the pane style.
 */
function theme_bootstrap_wraps_render_pane($vars) {
  $content = &$vars['content'];
  $settings = $vars['settings'];

  // This is needed to prevent throwing an error in php 5.5+
  if (!isset($content->css_class)) {
    $content->css_class = '';
  }

  $content->css_class .= _bootstrap_wraps_get_styles($settings['devices']);
  $content->css_class .= _bootstrap_wraps_get_styles($settings['pane_style']);

  $output = theme('panels_pane', $vars);

  return $output;
}

/**
 * Options for the Panels style plugin to help style panes.
 */
function bootstrap_wraps_pane_settings_form($style_settings) {

  $mobile_options = array(
      'hidden-xs' => 'Phone',
      'hidden-sm' => 'Tablet',
      'hidden-md' => 'Desktop',
      'hidden-lg' => 'Large Desktop',
  );
  $form['devices'] = array(
      '#prefix' => '<div class="well">',
      '#suffix' => '</div>',
      '#type' => 'checkboxes',
      '#options' => $mobile_options,
      '#title' => t('Hide this pane on the following devices.'),
      '#default_value' => $style_settings['devices'],
  );

  $pane_style_default_value = isset($style_settings['pane_style']) ? $style_settings['pane_style'] : '';
  $pane_options = array(
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
      '#prefix' => '<div class="well">',
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
      '#prefix' => '<div class="well">',
      '#suffix' => '</div>',
  );
  $form['affix']['offset_bottom'] = array(
      '#type' => 'textfield',
      '#title' => t('Offset Bottom (px)'),
      '#default_value' => (!empty($style_settings['affix']['offset_bottom'])) ? $style_settings['affix']['offset_bottom'] : '',
      '#prefix' => '<div class="well">',
      '#suffix' => '</div>',
  );
  return $form;
}

/**
 * Add affix JS.
 *
 * @return bool
 *   If there is an affix.
 */
function _bootstrap_wraps_attach_affix($styles, $offset_top, $offset_bottom) {

  if (isset($styles['affix'])) {
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
 * @return array
 *   Array with prefix and suffix keys.
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
    }
    return $styles ? ' ' . implode(' ', $styles) : '';
  }
}

/**
 * Create a region wrapper from provided attributes.
 *
 * @return array
 *   Array with prefix and suffix keys.
 */
function _bootstrap_wraps_wrapper($item = array()) {
  $wrap['prefix'] = NULL;
  $wrap['suffix'] = NULL;
  $wrap['attributes'] = NULL;

  if (!empty($item['attributes'])) {
    $value = $item['attributes'];
    $wrap['attributes'] .= " class=\"$value\"";
  }

  $wrap['prefix'] = '<div ' . $wrap['attributes'] . '>';
  $wrap['suffix'] = '</div>';

  if (!empty($item['prefix'])) {
    $wrap['prefix'] = $item['prefix'];
  }
  if (!empty($item['suffix'])) {
    $wrap['suffix'] = $item['suffix'];
  }

  $wrap['prefix'] = PHP_EOL . $wrap['prefix'];
  $wrap['suffix'] = $wrap['suffix'] . PHP_EOL;

  return $wrap;
}
