<?php
/**
 * @file
 * portfolio.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function portfolio_taxonomy_default_vocabularies() {
  return array(
    'portfolio_categories' => array(
      'name' => 'Portfolio Categories',
      'machine_name' => 'portfolio_categories',
      'description' => 'Organizes portfolio items into categories',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
