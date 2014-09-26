<?php
/**
 * @file
 * fancy_section_responsive.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function fancy_section_responsive_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'fancy_section|2_columns_responsive|25_to_75';
  $ds_layout->entity_type = 'fancy_section';
  $ds_layout->bundle = '2_columns_responsive';
  $ds_layout->view_mode = '25_to_75';
  $ds_layout->layout = 'fancy_grid_two';
  $ds_layout->settings = array(
    'regions' => array(
      'one' => array(
        0 => 'field_fancy_rel_contents',
      ),
      'two' => array(
        1 => 'field_fancy_rel_contents_1',
      ),
    ),
    'fields' => array(
      'field_fancy_rel_contents' => 'one',
      'field_fancy_rel_contents_1' => 'two',
    ),
    'classes' => array(),
    'wrappers' => array(
      'one' => 'div',
      'two' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'fancy_grid' => array(
      'enabled' => 1,
      'wrapper' => array(
        'additional_classes' => '',
        'no_alignment' => 0,
        'is_container' => 0,
        'is_wrapper' => 0,
        'extra_wrapper' => 0,
        'layouts' => array(
          'mobile' => array(
            'position' => '1|12',
            'linebreak' => 0,
            'hidden' => 0,
          ),
          'desktop' => array(
            'position' => '1|12',
            'linebreak' => 0,
            'hidden' => 0,
          ),
        ),
      ),
      'regions' => array(
        'one' => array(
          'additional_classes' => '',
          'no_alignment' => 0,
          'is_container' => 0,
          'is_wrapper' => 0,
          'extra_wrapper' => 0,
          'layouts' => array(
            'mobile' => array(
              'position' => '1|12',
              'linebreak' => 0,
              'hidden' => 0,
            ),
            'desktop' => array(
              'position' => '1|4',
              'linebreak' => 0,
              'hidden' => 0,
            ),
          ),
        ),
        'two' => array(
          'additional_classes' => '',
          'no_alignment' => 0,
          'is_container' => 0,
          'is_wrapper' => 0,
          'extra_wrapper' => 0,
          'layouts' => array(
            'mobile' => array(
              'position' => '1|12',
              'linebreak' => 1,
              'hidden' => 0,
            ),
            'desktop' => array(
              'position' => '5|8',
              'linebreak' => 0,
              'hidden' => 0,
            ),
          ),
        ),
      ),
    ),
  );
  $export['fancy_section|2_columns_responsive|25_to_75'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'fancy_section|2_columns_responsive|75_to_25';
  $ds_layout->entity_type = 'fancy_section';
  $ds_layout->bundle = '2_columns_responsive';
  $ds_layout->view_mode = '75_to_25';
  $ds_layout->layout = 'fancy_grid_two';
  $ds_layout->settings = array(
    'regions' => array(
      'one' => array(
        0 => 'field_fancy_rel_contents',
      ),
      'two' => array(
        1 => 'field_fancy_rel_contents_1',
      ),
    ),
    'fields' => array(
      'field_fancy_rel_contents' => 'one',
      'field_fancy_rel_contents_1' => 'two',
    ),
    'classes' => array(),
    'wrappers' => array(
      'one' => 'div',
      'two' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'fancy_grid' => array(
      'enabled' => 1,
      'wrapper' => array(
        'additional_classes' => '',
        'no_alignment' => 0,
        'is_container' => 0,
        'is_wrapper' => 0,
        'extra_wrapper' => 0,
        'layouts' => array(
          'mobile' => array(
            'position' => '1|12',
            'linebreak' => 0,
            'hidden' => 0,
          ),
          'desktop' => array(
            'position' => '1|12',
            'linebreak' => 0,
            'hidden' => 0,
          ),
        ),
      ),
      'regions' => array(
        'one' => array(
          'additional_classes' => '',
          'no_alignment' => 0,
          'is_container' => 0,
          'is_wrapper' => 0,
          'extra_wrapper' => 0,
          'layouts' => array(
            'mobile' => array(
              'position' => '1|12',
              'linebreak' => 0,
              'hidden' => 0,
            ),
            'desktop' => array(
              'position' => '1|8',
              'linebreak' => 0,
              'hidden' => 0,
            ),
          ),
        ),
        'two' => array(
          'additional_classes' => '',
          'no_alignment' => 0,
          'is_container' => 0,
          'is_wrapper' => 0,
          'extra_wrapper' => 0,
          'layouts' => array(
            'mobile' => array(
              'position' => '1|12',
              'linebreak' => 1,
              'hidden' => 0,
            ),
            'desktop' => array(
              'position' => '9|4',
              'linebreak' => 0,
              'hidden' => 0,
            ),
          ),
        ),
      ),
    ),
  );
  $export['fancy_section|2_columns_responsive|75_to_25'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'fancy_section|2_columns_responsive|default';
  $ds_layout->entity_type = 'fancy_section';
  $ds_layout->bundle = '2_columns_responsive';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'fancy_grid_two';
  $ds_layout->settings = array(
    'regions' => array(
      'one' => array(
        0 => 'field_fancy_rel_contents',
      ),
      'two' => array(
        1 => 'field_fancy_rel_contents_1',
      ),
    ),
    'fields' => array(
      'field_fancy_rel_contents' => 'one',
      'field_fancy_rel_contents_1' => 'two',
    ),
    'classes' => array(),
    'wrappers' => array(
      'one' => 'div',
      'two' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'fancy_grid' => array(
      'enabled' => 1,
      'wrapper' => array(
        'additional_classes' => '',
        'no_alignment' => 0,
        'is_container' => 0,
        'is_wrapper' => 0,
        'extra_wrapper' => 0,
        'layouts' => array(
          'mobile' => array(
            'position' => '1|12',
            'linebreak' => 0,
            'hidden' => 0,
          ),
          'desktop' => array(
            'position' => '1|12',
            'linebreak' => 0,
            'hidden' => 0,
          ),
        ),
      ),
      'regions' => array(
        'one' => array(
          'additional_classes' => '',
          'no_alignment' => 0,
          'is_container' => 0,
          'is_wrapper' => 0,
          'extra_wrapper' => 0,
          'layouts' => array(
            'mobile' => array(
              'position' => '1|12',
              'linebreak' => 0,
              'hidden' => 0,
            ),
            'desktop' => array(
              'position' => '1|6',
              'linebreak' => 0,
              'hidden' => 0,
            ),
          ),
        ),
        'two' => array(
          'additional_classes' => '',
          'no_alignment' => 0,
          'is_container' => 0,
          'is_wrapper' => 0,
          'extra_wrapper' => 0,
          'layouts' => array(
            'mobile' => array(
              'position' => '1|12',
              'linebreak' => 1,
              'hidden' => 0,
            ),
            'desktop' => array(
              'position' => '7|6',
              'linebreak' => 0,
              'hidden' => 0,
            ),
          ),
        ),
      ),
    ),
  );
  $export['fancy_section|2_columns_responsive|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'fancy_section|2_columns_responsive|inline_entity_form_preview';
  $ds_layout->entity_type = 'fancy_section';
  $ds_layout->bundle = '2_columns_responsive';
  $ds_layout->view_mode = 'inline_entity_form_preview';
  $ds_layout->layout = 'fancy_grid_two';
  $ds_layout->settings = array(
    'regions' => array(
      'one' => array(
        0 => 'field_fancy_rel_contents',
      ),
      'two' => array(
        1 => 'field_fancy_rel_contents_1',
      ),
    ),
    'fields' => array(
      'field_fancy_rel_contents' => 'one',
      'field_fancy_rel_contents_1' => 'two',
    ),
    'classes' => array(),
    'wrappers' => array(
      'one' => 'div',
      'two' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'fancy_grid' => array(
      'enabled' => 1,
      'wrapper' => array(
        'additional_classes' => '',
        'no_alignment' => 0,
        'is_container' => 0,
        'is_wrapper' => 0,
        'extra_wrapper' => 0,
        'layouts' => array(
          'mobile' => array(
            'position' => '1|12',
            'linebreak' => 0,
            'hidden' => 0,
          ),
          'desktop' => array(
            'position' => '1|12',
            'linebreak' => 0,
            'hidden' => 0,
          ),
        ),
      ),
      'regions' => array(
        'one' => array(
          'additional_classes' => '',
          'no_alignment' => 0,
          'is_container' => 0,
          'is_wrapper' => 0,
          'extra_wrapper' => 0,
          'layouts' => array(
            'mobile' => array(
              'position' => '1|12',
              'linebreak' => 0,
              'hidden' => 0,
            ),
            'desktop' => array(
              'position' => '1|6',
              'linebreak' => 0,
              'hidden' => 0,
            ),
          ),
        ),
        'two' => array(
          'additional_classes' => '',
          'no_alignment' => 0,
          'is_container' => 0,
          'is_wrapper' => 0,
          'extra_wrapper' => 0,
          'layouts' => array(
            'mobile' => array(
              'position' => '1|12',
              'linebreak' => 1,
              'hidden' => 0,
            ),
            'desktop' => array(
              'position' => '7|6',
              'linebreak' => 0,
              'hidden' => 0,
            ),
          ),
        ),
      ),
    ),
  );
  $export['fancy_section|2_columns_responsive|inline_entity_form_preview'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function fancy_section_responsive_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = '25_to_75';
  $ds_view_mode->label = '25% to 75%';
  $ds_view_mode->entities = array(
    'fancy_section' => 'fancy_section',
  );
  $export['25_to_75'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = '75_to_25';
  $ds_view_mode->label = '75% to 25%';
  $ds_view_mode->entities = array(
    'fancy_section' => 'fancy_section',
  );
  $export['75_to_25'] = $ds_view_mode;

  return $export;
}
