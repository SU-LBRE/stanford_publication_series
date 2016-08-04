<?php
/**
 * @file
 * stanford_publication_series.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_publication_series_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advanced|node|stanford_publication_series|form';
  $field_group->group_name = 'group_advanced';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_publication_series';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Advanced',
    'weight' => '3',
    'children' => array(
      0 => 'field_s_pubseries_sorting_weight',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Advanced',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_advanced|node|stanford_publication_series|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_image_style|node|stanford_publication_series|default';
  $field_group->group_name = 'group_featured_image_style';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_publication_series';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Featured Image Style',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_image_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Featured Image Style',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'float-right border-simple-nowidth border-shadow group_s_postcard_image group-s-featured-image-style field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_featured_image_style|node|stanford_publication_series|default'] = $field_group;

  return $export;
}
