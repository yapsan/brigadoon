<?php
/**
 * @file
 * fv_product_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function fv_product_importer_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'fv_product_importer-xpathparser_20-math';
  $feeds_tamper->importer = 'fv_product_importer';
  $feeds_tamper->source = 'xpathparser:20';
  $feeds_tamper->plugin_id = 'math';
  $feeds_tamper->settings = array(
    'operation' => 'multiplication',
    'flip' => 0,
    'value' => '100',
    'log' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Mathematical operation';
  $export['fv_product_importer-xpathparser_20-math'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'fv_product_importer-xpathparser_3-math';
  $feeds_tamper->importer = 'fv_product_importer';
  $feeds_tamper->source = 'xpathparser:3';
  $feeds_tamper->plugin_id = 'math';
  $feeds_tamper->settings = array(
    'operation' => 'multiplication',
    'flip' => 0,
    'value' => '100',
    'log' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Mathematical operation';
  $export['fv_product_importer-xpathparser_3-math'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'fv_product_importer-xpathparser_35-math';
  $feeds_tamper->importer = 'fv_product_importer';
  $feeds_tamper->source = 'xpathparser:35';
  $feeds_tamper->plugin_id = 'math';
  $feeds_tamper->settings = array(
    'operation' => 'multiplication',
    'flip' => 0,
    'value' => '100',
    'log' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Mathematical operation';
  $export['fv_product_importer-xpathparser_35-math'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'fv_product_importer-xpathparser_37-math';
  $feeds_tamper->importer = 'fv_product_importer';
  $feeds_tamper->source = 'xpathparser:37';
  $feeds_tamper->plugin_id = 'math';
  $feeds_tamper->settings = array(
    'operation' => 'multiplication',
    'flip' => 0,
    'value' => '100',
    'log' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Mathematical operation';
  $export['fv_product_importer-xpathparser_37-math'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'fv_product_importer-xpathparser_38-rewrite';
  $feeds_tamper->importer = 'fv_product_importer';
  $feeds_tamper->source = 'xpathparser:38';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[xpathparser:2] [xpathparser:18][xpathparser:16] [xpathparser:13]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['fv_product_importer-xpathparser_38-rewrite'] = $feeds_tamper;

  return $export;
}
