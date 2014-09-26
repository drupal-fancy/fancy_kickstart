<?php
/**
 * @file
 * fancy_section_responsive.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fancy_section_responsive_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_fancy_section_2_columns_responsive';
  $strongarm->value = '2';
  $export['auto_entitylabel_fancy_section_2_columns_responsive'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_fancy_section_2_columns_responsive';
  $strongarm->value = '2 columns responsive section created by [current-user:name] at [current-user:created:short]';
  $export['auto_entitylabel_pattern_fancy_section_2_columns_responsive'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_fancy_section_2_columns_responsive';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_fancy_section_2_columns_responsive'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fancy_grid_compile';
  $strongarm->value = '1';
  $export['fancy_grid_compile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fancy_grid_compile_webservice';
  $strongarm->value = 'http://sleepy-harbor-6193.herokuapp.com/app/3.3/compile';
  $export['fancy_grid_compile_webservice'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fancy_grid_grid_max_width';
  $strongarm->value = '960px';
  $export['fancy_grid_grid_max_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fancy_grid_grid_width';
  $strongarm->value = '90%';
  $export['fancy_grid_grid_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fancy_grid_layouts';
  $strongarm->value = array(
    'mobile' => array(
      'title' => 'Mobile',
      'machine_name' => 'mobile',
      'columns' => '12',
      'gutters' => '2%',
      'breakpoint' => '0',
      'config' => '1|12
1,6|6

',
      'new' => FALSE,
    ),
    'desktop' => array(
      'title' => 'Desktop',
      'machine_name' => 'desktop',
      'columns' => '12',
      'gutters' => '2%',
      'breakpoint' => '600',
      'config' => '1|12
1,5|8
1,7|6
1,5,9|4
1,4,7,10|3
1,3,5,7,9,11|2',
      'new' => FALSE,
    ),
  );
  $export['fancy_grid_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fancy_section__2_columns_responsive';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'inline_entity_form_preview' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'view_mode_selector' => array(
        'custom_settings' => TRUE,
      ),
      '25_to_75' => array(
        'custom_settings' => TRUE,
      ),
      '75_to_25' => array(
        'custom_settings' => TRUE,
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
          '25_to_75' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          '75_to_25' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_fancy_section__2_columns_responsive'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_split_config_fancy_section__2_columns_responsive';
  $strongarm->value = array(
    'field_fancy_rel_contents' => array(
      'enable' => 1,
      'values' => '2',
    ),
  );
  $export['field_split_config_fancy_section__2_columns_responsive'] = $strongarm;

  return $export;
}
