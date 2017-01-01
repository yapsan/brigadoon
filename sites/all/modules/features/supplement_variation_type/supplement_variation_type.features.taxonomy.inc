<?php
/**
 * @file
 * supplement_variation_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function supplement_variation_type_taxonomy_default_vocabularies() {
  return array(
    'item_name' => array(
      'name' => 'Item Name',
      'machine_name' => 'item_name',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'product_brand' => array(
      'name' => 'Product Brand',
      'machine_name' => 'product_brand',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'product_flavor' => array(
      'name' => 'Product Flavor',
      'machine_name' => 'product_flavor',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'product_primary_category' => array(
      'name' => 'Product Primary Category',
      'machine_name' => 'product_primary_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'product_secondary_category' => array(
      'name' => 'Product Secondary Category',
      'machine_name' => 'product_secondary_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'product_size' => array(
      'name' => 'Product Size',
      'machine_name' => 'product_size',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
