<?php

/**
 * Implements hook_install_tasks()
 */
function di2d_install_tasks(&$install_state) {

  $tasks = array();
  // Add our custom CSS file for the installation process
  drupal_add_css(drupal_get_path('profile', 'di2d') . '/css/di2d_install.css');

  // Add the Panopoly theme selection to the installation process
  require_once(drupal_get_path('module', 'panopoly_theme') . '/panopoly_theme.profile.inc');
  $tasks = $tasks + panopoly_theme_profile_theme_selection_install_task($install_state);

  return $tasks;
}

/**
 * Implements hook_install_tasks_alter()
 */
function di2d_install_tasks_alter(&$tasks, $install_state) {

  // Magically go one level deeper in solving years of dependency problems
  require_once(drupal_get_path('module', 'panopoly_core') . '/panopoly_core.profile.inc');
  $tasks['install_load_profile']['function'] = 'panopoly_core_install_load_profile';

  // If we only offer one language, define a callback to set this
  require_once(drupal_get_path('module', 'panopoly_core') . '/panopoly_core.profile.inc');
  if (!(count(install_find_locales($install_state['parameters']['profile'])) > 1)) {
    $tasks['install_select_locale']['function'] = 'panopoly_core_install_locale_selection';
  }
}

/**
 * Implements hook_form_FORM_ID_alter()
 */
function di2d_form_install_configure_form_alter(&$form, $form_state) {

  // Hide some messages from various modules that are just too chatty.
  drupal_get_messages('status');
  drupal_get_messages('warning');

  // Set reasonable defaults for site configuration form
  $form['site_information']['site_name']['#default_value'] = 'DI2D';
  $form['admin_account']['account']['name']['#default_value'] = 'Admin';
  $form['server_settings']['site_default_country']['#default_value'] = 'ZA';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'Africa/Johannesburg'; // My Country!

    $form['site_information']['site_mail']['#default_value'] = 'admin@maxheadroom.co.za';
    $form['admin_account']['account']['mail']['#default_value'] = 'admin@maxheadroom.co.za';
}
