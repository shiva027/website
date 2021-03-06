<?php
/**
 * @file
 * cod_news.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function cod_news_taxonomy_default_vocabularies() {
  return array(
    'topics' => array(
      'name' => 'Topics',
      'machine_name' => 'topics',
      'description' => 'Get off the island - tech topics',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
