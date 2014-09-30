<?php
/**
 * @file
 * fancy_config_fancy_grid.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fancy_config_fancy_grid_strongarm() {
  $export = array();

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
1,7|6
1,5,9|4
1,4,7,10|3',
      'new' => FALSE,
    ),
  );
  $export['fancy_grid_layouts'] = $strongarm;

  return $export;
}
