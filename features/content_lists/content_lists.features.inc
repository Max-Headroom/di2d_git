<?php
/**
 * @file
 * content_lists.features.inc
 */

/**
 * Implements hook_views_api().
 */
function content_lists_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function content_lists_image_default_styles() {
  $styles = array();

  // Exported image style: list-thumbs.
  $styles['list-thumbs'] = array(
    'name' => 'list-thumbs',
    'label' => 'List-thumbs',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 140,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sidebar-list-thumbs.
  $styles['sidebar-list-thumbs'] = array(
    'name' => 'sidebar-list-thumbs',
    'label' => 'sidebar-list-thumbs',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 80,
          'height' => 50,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
