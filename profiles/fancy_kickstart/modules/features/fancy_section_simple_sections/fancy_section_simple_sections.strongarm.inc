<?php
/**
 * @file
 * fancy_section_simple_sections.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fancy_section_simple_sections_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_fancy_section_1_column';
  $strongarm->value = '2';
  $export['auto_entitylabel_fancy_section_1_column'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_fancy_section_1_column';
  $strongarm->value = '1 column section created by [current-user:name] at [current-user:created:short]';
  $export['auto_entitylabel_pattern_fancy_section_1_column'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_fancy_section_1_column';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_fancy_section_1_column'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fancy_section__1_column';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_fancy_section__1_column'] = $strongarm;

  return $export;
}
