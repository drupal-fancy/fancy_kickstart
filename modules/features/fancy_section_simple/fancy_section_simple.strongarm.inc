<?php
/**
 * @file
 * fancy_section_simple.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fancy_section_simple_strongarm() {
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
  $strongarm->name = 'auto_entitylabel_fancy_section_2_columns';
  $strongarm->value = '2';
  $export['auto_entitylabel_fancy_section_2_columns'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_fancy_section_1_column';
  $strongarm->value = '1 column section created by [current-user:name] at [current-user:created:short]';
  $export['auto_entitylabel_pattern_fancy_section_1_column'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_fancy_section_2_columns';
  $strongarm->value = '2 columns section created by [current-user:name] at [current-user:created:short]';
  $export['auto_entitylabel_pattern_fancy_section_2_columns'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_fancy_section_1_column';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_fancy_section_1_column'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_fancy_section_2_columns';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_fancy_section_2_columns'] = $strongarm;

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
      'inline_entity_form_preview' => array(
        'custom_settings' => TRUE,
      ),
      'view_mode_selector' => array(
        'custom_settings' => TRUE,
      ),
      '25_to_75' => array(
        'custom_settings' => FALSE,
      ),
      '75_to_25' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_fancy_section__1_column'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fancy_section__2_columns';
  $strongarm->value = array(
    'view_modes' => array(
      'inline_entity_form_preview' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'field_fancy_rel_contents_1' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'inline_entity_form_preview' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_fancy_section__2_columns'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_split_config_fancy_section__2_columns';
  $strongarm->value = array(
    'field_fancy_rel_contents' => array(
      'enable' => 1,
      'values' => '2',
    ),
  );
  $export['field_split_config_fancy_section__2_columns'] = $strongarm;

  return $export;
}
