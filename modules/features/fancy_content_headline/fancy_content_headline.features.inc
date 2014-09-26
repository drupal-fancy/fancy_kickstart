<?php
/**
 * @file
 * fancy_content_headline.features.inc
 */

/**
 * Implements hook_eck_bundle_info().
 */
function fancy_content_headline_eck_bundle_info() {
  $items = array(
    'fancy_content_headine' => array(
      'machine_name' => 'fancy_content_headine',
      'entity_type' => 'fancy_content',
      'name' => 'headine',
      'label' => 'Headine',
    ),
  );
  return $items;
}
