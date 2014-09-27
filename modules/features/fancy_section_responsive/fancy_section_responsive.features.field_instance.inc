<?php
/**
 * @file
 * fancy_section_responsive.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fancy_section_responsive_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fancy_section-2_columns_responsive-field_fancy_rel_contents'
  $field_instances['fancy_section-2_columns_responsive-field_fancy_rel_contents'] = array(
    'bundle' => '2_columns_responsive',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      '25_to_75' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
      '75_to_25' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
      'inline_entity_form_preview' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
      'view_mode_selector' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'fancy_section',
    'field_name' => 'field_fancy_rel_contents',
    'label' => 'Content',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => 1,
          'delete_references' => 0,
          'label_plural' => 'entities',
          'label_singular' => 'entity',
          'match_operator' => 'CONTAINS',
          'override_labels' => 0,
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'fancy_section-2_columns_responsive-field_fancy_view_mode_selector'
  $field_instances['fancy_section-2_columns_responsive-field_fancy_view_mode_selector'] = array(
    'bundle' => '2_columns_responsive',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      '25_to_75' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      '75_to_25' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'view_mode_selector',
        'settings' => array(),
        'type' => 'view_mode_selector',
        'weight' => 1,
      ),
      'inline_entity_form_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_selector' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'fancy_section',
    'field_name' => 'field_fancy_view_mode_selector',
    'label' => 'View mode',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
      'view_modes' => array(
        '25_to_75' => array(
          'enable' => 1,
        ),
        '75_to_25' => array(
          'enable' => 1,
        ),
        'default' => array(
          'enable' => 1,
        ),
        'inline_entity_form_preview' => array(
          'enable' => 0,
        ),
        'teaser' => array(
          'enable' => 0,
        ),
        'token' => array(
          'enable' => 0,
        ),
      ),
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'view_mode_selector',
      'settings' => array(),
      'type' => 'view_mode_selector_select',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('View mode');

  return $field_instances;
}
