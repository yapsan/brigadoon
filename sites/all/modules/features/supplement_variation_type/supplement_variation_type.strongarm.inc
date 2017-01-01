<?php
/**
 * @file
 * supplement_variation_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function supplement_variation_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_supplement';
  $strongarm->value = 0;
  $export['comment_anonymous_supplement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_supplement';
  $strongarm->value = 1;
  $export['comment_default_mode_supplement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_supplement';
  $strongarm->value = '50';
  $export['comment_default_per_page_supplement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_supplement';
  $strongarm->value = 1;
  $export['comment_form_location_supplement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_supplement';
  $strongarm->value = '1';
  $export['comment_preview_supplement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_supplement';
  $strongarm->value = 1;
  $export['comment_subject_field_supplement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_supplement';
  $strongarm->value = '1';
  $export['comment_supplement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__supplement';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'product_list' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '50',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '38',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '51',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '39',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '52',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '48',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
        'product:title_field' => array(
          'default' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '45',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '46',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
        'product:field_stockcode' => array(
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '44',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'product:field_collection_id' => array(
          'default' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '47',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
        ),
        'product:field_manufacturer_id' => array(
          'default' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '49',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
        ),
        'product:field_manufacturer_description' => array(
          'default' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '50',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
        ),
        'product:field_basic_description' => array(
          'default' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '51',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
        ),
        'product:field_description' => array(
          'default' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '52',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_details' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'product_list' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_line' => array(
          'default' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'product_list' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
        ),
        'product:field_size' => array(
          'default' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '27',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
        ),
        'product:field_flavor' => array(
          'default' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '28',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
        ),
        'product:field_labeled_as_gluten_free' => array(
          'default' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '29',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
        ),
        'product:field_supplier_number' => array(
          'default' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
        ),
        'product:field_supplier_name' => array(
          'default' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '31',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
        ),
        'product:field_primary_category' => array(
          'default' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '32',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
        ),
        'product:field_secondary_category' => array(
          'default' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '33',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
        ),
        'product:field_whole_sale_price' => array(
          'default' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '34',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '27',
            'visible' => FALSE,
          ),
        ),
        'product:field_map_price' => array(
          'default' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '35',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '28',
            'visible' => FALSE,
          ),
        ),
        'product:field_list_date' => array(
          'default' => array(
            'weight' => '27',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '36',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '29',
            'visible' => FALSE,
          ),
        ),
        'product:field_brand' => array(
          'default' => array(
            'weight' => '28',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'product_list' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
        ),
        'product:field_item_name' => array(
          'default' => array(
            'weight' => '29',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'product_list' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
        'product:field_discontinued' => array(
          'default' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '31',
            'visible' => FALSE,
          ),
        ),
        'product:field_mfg_address' => array(
          'default' => array(
            'weight' => '31',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '32',
            'visible' => FALSE,
          ),
        ),
        'product:field_copyright' => array(
          'default' => array(
            'weight' => '32',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '33',
            'visible' => FALSE,
          ),
        ),
        'product:field_item_size' => array(
          'default' => array(
            'weight' => '33',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '34',
            'visible' => FALSE,
          ),
        ),
        'product:field_item_measure' => array(
          'default' => array(
            'weight' => '34',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '35',
            'visible' => FALSE,
          ),
        ),
        'product:field_width' => array(
          'default' => array(
            'weight' => '35',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '36',
            'visible' => FALSE,
          ),
        ),
        'product:field_depth' => array(
          'default' => array(
            'weight' => '36',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '37',
            'visible' => FALSE,
          ),
        ),
        'product:field_mass' => array(
          'default' => array(
            'weight' => '37',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '38',
            'visible' => FALSE,
          ),
        ),
        'product:field_case_qty' => array(
          'default' => array(
            'weight' => '38',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '39',
            'visible' => FALSE,
          ),
        ),
        'product:field_directions' => array(
          'default' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '40',
            'visible' => FALSE,
          ),
        ),
        'product:field_ingredients' => array(
          'default' => array(
            'weight' => '39',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '41',
            'visible' => FALSE,
          ),
        ),
        'product:field_warnings' => array(
          'default' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '42',
            'visible' => FALSE,
          ),
        ),
        'product:field_post_date' => array(
          'default' => array(
            'weight' => '40',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '43',
            'visible' => FALSE,
          ),
        ),
        'product:field_supplier_web_address' => array(
          'default' => array(
            'weight' => '41',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '44',
            'visible' => FALSE,
          ),
        ),
        'product:field_thumbnail' => array(
          'default' => array(
            'weight' => '42',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '45',
            'visible' => FALSE,
          ),
        ),
        'product:field_logo' => array(
          'default' => array(
            'weight' => '43',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '46',
            'visible' => FALSE,
          ),
        ),
        'product:field_image500' => array(
          'default' => array(
            'weight' => '44',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '47',
            'visible' => FALSE,
          ),
        ),
        'product:field_image_name' => array(
          'default' => array(
            'weight' => '45',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '48',
            'visible' => FALSE,
          ),
        ),
        'product:field_image100' => array(
          'default' => array(
            'weight' => '46',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '49',
            'visible' => FALSE,
          ),
        ),
        'product:field_height' => array(
          'default' => array(
            'weight' => '47',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '50',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_dimension' => array(
          'default' => array(
            'weight' => '48',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '51',
            'visible' => FALSE,
          ),
        ),
        'product:field_suggested_retail_price' => array(
          'default' => array(
            'weight' => '49',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '52',
            'visible' => FALSE,
          ),
        ),
        'product:field_images' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'product_list' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__supplement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_supplement';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_supplement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_supplement';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_supplement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_supplement';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_supplement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_supplement';
  $strongarm->value = '1';
  $export['node_preview_supplement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_supplement';
  $strongarm->value = 0;
  $export['node_submitted_supplement'] = $strongarm;

  return $export;
}
