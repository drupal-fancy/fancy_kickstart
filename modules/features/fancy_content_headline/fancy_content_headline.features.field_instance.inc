<?php
/**
 * @file
 * fancy_content_headline.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fancy_content_headline_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fancy_content-headline-field_headline'
  $field_instances['fancy_content-headline-field_headline'] = array(
    'bundle' => 'headline',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'inline_entity_form_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'fancy_content',
    'field_name' => 'field_headline',
    'label' => 'Headline',
    'required' => 1,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Headline');

  return $field_instances;
}
