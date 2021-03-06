<?php
/**
 * @file
 * supplement_variation_type.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function supplement_variation_type_commerce_product_default_types() {
  $items = array(
    'supplement' => array(
      'type' => 'supplement',
      'name' => 'Supplement',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function supplement_variation_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function supplement_variation_type_node_info() {
  $items = array(
    'supplement' => array(
      'name' => t('Supplement'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
