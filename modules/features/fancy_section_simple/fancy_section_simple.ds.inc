<?php
/**
 * @file
 * fancy_section_simple.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function fancy_section_simple_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'fancy_section|1_column|inline_entity_form_preview';
  $ds_fieldsetting->entity_type = 'fancy_section';
  $ds_fieldsetting->bundle = '1_column';
  $ds_fieldsetting->view_mode = 'inline_entity_form_preview';
  $ds_fieldsetting->settings = array(
    'field_fancy_rel_contents' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['fancy_section|1_column|inline_entity_form_preview'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function fancy_section_simple_ds_layout_settings_info() {
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
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['fancy_section|1_column|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'fancy_section|1_column|inline_entity_form_preview';
  $ds_layout->entity_type = 'fancy_section';
  $ds_layout->bundle = '1_column';
  $ds_layout->view_mode = 'inline_entity_form_preview';
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
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['fancy_section|1_column|inline_entity_form_preview'] = $ds_layout;

  return $export;
}
