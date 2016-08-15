<?php
/**
 * @file
 * stanford_publication_series.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_publication_series_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function stanford_publication_series_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function stanford_publication_series_node_info() {
  $items = array(
    'stanford_publication_series' => array(
      'name' => t('Stanford Publication Series'),
      'base' => 'node_content',
      'description' => t('The Stanford Publication Series displays a collection of related publications.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
