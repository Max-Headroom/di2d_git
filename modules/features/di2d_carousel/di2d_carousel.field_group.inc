<?php
/**
 * @file
 * di2d_carousel.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function di2d_carousel_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_carousel|node|carousel|form';
  $field_group->group_name = 'group_carousel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'carousel';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Carousel',
    'weight' => '2',
    'children' => array(
      0 => 'field_image',
      1 => 'field_image_caption',
    ),
    'format_type' => 'field_group_multiple_container',
    'format_settings' => array(
      'label' => 'Carousel',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-carousel field-group-field_group_multiple_container',
        'description' => '',
        'parent_format_type' => 'div',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_carousel|node|carousel|form'] = $field_group;

  return $export;
}
