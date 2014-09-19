<?php
/**
 * @file
 * fancy_section_simple_sections.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function fancy_section_simple_sections_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'fancy_section|1_column|default';
  $ds_layout->entity_type = 'fancy_section';
  $ds_layout->bundle = '1_column';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_fancy_rel_contents',
      ),
    ),
    'fields' => array(
      'field_fancy_rel_contents' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['fancy_section|1_column|default'] = $ds_layout;

  return $export;
}
