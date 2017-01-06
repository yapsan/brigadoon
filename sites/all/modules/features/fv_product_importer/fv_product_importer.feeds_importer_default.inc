<?php
/**
 * @file
 * fv_product_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function fv_product_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'fv_product_diaplay_importer';
  $feeds_importer->config = array(
    'name' => 'fv product diaplay importer',
    'description' => 'import fv product display nodes',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml html htm',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'Title',
          'xpathparser:1' => 'UPC',
          'xpathparser:2' => 'Title',
          'xpathparser:3' => 'Brand',
          'xpathparser:5' => 'ItemName',
          'xpathparser:6' => 'PrimaryCategory',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
        ),
        'context' => '//Product',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_product:sku',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_brand',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_item_name',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_primary_category',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'supplement',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['fv_product_diaplay_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'fv_product_importer';
  $feeds_importer->config = array(
    'name' => 'fv product importer',
    'description' => 'import products from xml source - (europa product datafeed)',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml html htm',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'UPC',
          'xpathparser:1' => 'StockCode',
          'xpathparser:2' => 'Title',
          'xpathparser:3' => 'WholeSalePrice',
          'xpathparser:4' => 'BasicDescription',
          'xpathparser:5' => 'Brand',
          'xpathparser:6' => 'CaseQty',
          'xpathparser:7' => 'CollectionID',
          'xpathparser:8' => 'Copyright',
          'xpathparser:9' => 'Depth',
          'xpathparser:10' => 'Description',
          'xpathparser:11' => 'Directions',
          'xpathparser:12' => 'Discontinued',
          'xpathparser:13' => 'Flavor',
          'xpathparser:14' => 'Height',
          'xpathparser:15' => 'Ingredients',
          'xpathparser:16' => 'ItemMeasure',
          'xpathparser:17' => 'ItemName',
          'xpathparser:18' => 'ItemSize',
          'xpathparser:19' => 'LabelasGlutenFree',
          'xpathparser:35' => 'WholeSalePrice',
          'xpathparser:37' => 'SuggestedRetailPrice',
          'xpathparser:20' => 'MAPPrice',
          'xpathparser:21' => 'ManufacturerDescription',
          'xpathparser:22' => 'ManufacturerID',
          'xpathparser:23' => 'MfgAddress',
          'xpathparser:25' => 'PrimaryCategory',
          'xpathparser:26' => 'ProductDetails',
          'xpathparser:27' => 'ProductLine',
          'xpathparser:28' => 'GeneralCategory',
          'xpathparser:29' => 'ExtendedSize',
          'xpathparser:31' => 'SupplierName',
          'xpathparser:32' => 'SupplierNumber',
          'xpathparser:33' => 'SupplierWebAddress',
          'xpathparser:34' => 'Warnings',
          'xpathparser:36' => 'Width',
          'xpathparser:38' => 'Title',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:11' => 0,
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
          'xpathparser:14' => 0,
          'xpathparser:15' => 0,
          'xpathparser:16' => 0,
          'xpathparser:17' => 0,
          'xpathparser:18' => 0,
          'xpathparser:19' => 0,
          'xpathparser:35' => 0,
          'xpathparser:37' => 0,
          'xpathparser:20' => 0,
          'xpathparser:21' => 0,
          'xpathparser:22' => 0,
          'xpathparser:23' => 0,
          'xpathparser:25' => 0,
          'xpathparser:26' => 0,
          'xpathparser:27' => 0,
          'xpathparser:28' => 0,
          'xpathparser:29' => 0,
          'xpathparser:31' => 0,
          'xpathparser:32' => 0,
          'xpathparser:33' => 0,
          'xpathparser:34' => 0,
          'xpathparser:36' => 0,
          'xpathparser:38' => 0,
        ),
        'context' => '//Product',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
            'xpathparser:10' => 0,
            'xpathparser:11' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
            'xpathparser:14' => 0,
            'xpathparser:15' => 0,
            'xpathparser:16' => 0,
            'xpathparser:17' => 0,
            'xpathparser:18' => 0,
            'xpathparser:19' => 0,
            'xpathparser:35' => 0,
            'xpathparser:37' => 0,
            'xpathparser:20' => 0,
            'xpathparser:21' => 0,
            'xpathparser:22' => 0,
            'xpathparser:23' => 0,
            'xpathparser:25' => 0,
            'xpathparser:26' => 0,
            'xpathparser:27' => 0,
            'xpathparser:28' => 0,
            'xpathparser:29' => 0,
            'xpathparser:31' => 0,
            'xpathparser:32' => 0,
            'xpathparser:33' => 0,
            'xpathparser:34' => 0,
            'xpathparser:36' => 0,
            'xpathparser:38' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsCommerceProductProcessor',
      'config' => array(
        'product_type' => 'supplement',
        'author' => 0,
        'tax_rate' => TRUE,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'sku',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_stockcode',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'title_field',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'commerce_price:amount',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_basic_description',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_brand',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_case_qty',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_collection_id',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_copyright',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_depth',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_description',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_directions',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_discontinued',
            'unique' => FALSE,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_flavor',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_height',
            'unique' => FALSE,
            'language' => 'und',
          ),
          15 => array(
            'source' => 'xpathparser:15',
            'target' => 'field_ingredients',
            'unique' => FALSE,
            'language' => 'und',
          ),
          16 => array(
            'source' => 'xpathparser:16',
            'target' => 'field_item_measure',
            'unique' => FALSE,
            'language' => 'und',
          ),
          17 => array(
            'source' => 'xpathparser:17',
            'target' => 'field_item_name',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          18 => array(
            'source' => 'xpathparser:18',
            'target' => 'field_item_size',
            'unique' => FALSE,
            'language' => 'und',
          ),
          19 => array(
            'source' => 'xpathparser:19',
            'target' => 'field_labeled_as_gluten_free',
            'unique' => FALSE,
            'language' => 'und',
          ),
          20 => array(
            'source' => 'xpathparser:35',
            'target' => 'field_whole_sale_price:amount',
            'unique' => FALSE,
            'language' => 'und',
          ),
          21 => array(
            'source' => 'xpathparser:37',
            'target' => 'field_suggested_retail_price:amount',
            'unique' => FALSE,
            'language' => 'und',
          ),
          22 => array(
            'source' => 'xpathparser:20',
            'target' => 'field_map_price:amount',
            'unique' => FALSE,
            'language' => 'und',
          ),
          23 => array(
            'source' => 'xpathparser:21',
            'target' => 'field_manufacturer_description',
            'unique' => FALSE,
            'language' => 'und',
          ),
          24 => array(
            'source' => 'xpathparser:22',
            'target' => 'field_manufacturer_id',
            'unique' => FALSE,
            'language' => 'und',
          ),
          25 => array(
            'source' => 'xpathparser:23',
            'target' => 'field_mfg_address',
            'unique' => FALSE,
            'language' => 'und',
          ),
          26 => array(
            'source' => 'xpathparser:25',
            'target' => 'field_primary_category',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          27 => array(
            'source' => 'xpathparser:26',
            'target' => 'field_product_details',
            'unique' => FALSE,
            'language' => 'und',
          ),
          28 => array(
            'source' => 'xpathparser:27',
            'target' => 'field_product_line',
            'unique' => FALSE,
            'language' => 'und',
          ),
          29 => array(
            'source' => 'xpathparser:28',
            'target' => 'field_secondary_category',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          30 => array(
            'source' => 'xpathparser:29',
            'target' => 'field_size',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          31 => array(
            'source' => 'xpathparser:31',
            'target' => 'field_supplier_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          32 => array(
            'source' => 'xpathparser:32',
            'target' => 'field_supplier_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          33 => array(
            'source' => 'xpathparser:33',
            'target' => 'field_supplier_web_address:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          34 => array(
            'source' => 'xpathparser:34',
            'target' => 'field_warnings',
            'unique' => FALSE,
            'language' => 'und',
          ),
          35 => array(
            'source' => 'xpathparser:36',
            'target' => 'field_width',
            'unique' => FALSE,
            'language' => 'und',
          ),
          36 => array(
            'source' => 'xpathparser:38',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '1',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'supplement',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['fv_product_importer'] = $feeds_importer;

  return $export;
}