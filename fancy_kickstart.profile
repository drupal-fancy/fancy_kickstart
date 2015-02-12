<?php

/**
 * @file
 * Enables modules and site configuration for a Fancy Kickstart installation.
 */

use Drupal\Core\Form\FormStateInterface;

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 */
function wk_form_install_configure_form_alter(&$form, FormStateInterface $form_state) {
  $form['site_information']['site_name']['#default_value'] = 'Fancy Kickstart';
}
