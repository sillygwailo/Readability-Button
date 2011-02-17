<?php
// $Id$

/**
 * @file
 * Administration functions for the Readability module
 */
function readability_admin_settings() {
  $form = array();
  $form['verification'] = array(
    '#type' => 'fieldset',
    '#title' => t('Readability site verifcation'),
  );
  $form['verification']['readability_verification'] = array(
    '#title' => t('Verification code'),
    '#description' => t('Copy the code from http://www.readability.com/ under domain validation, which should be in the format of &lt;meta name="readability-verification" content="[VERIFICATION CODE]"/&gt;'),
    '#type' => 'textfield',
    '#default_value' => variable_get('readability_verification', '<meta name="readability-verification" content="[VERIFICATION CODE]"/>'),
    '#size' => 125,
    '#max_length' => 255,
  );
  $form['verification']['readability_verify_domain'] = array(
    '#type' => 'checkbox',
    '#title' => t('Verify domain?'),
    '#description' => t("Check this box if you wish the verification code to appear in your site's HTML header"),
    '#default_value' => variable_get('readability_verify_domain', 0),
  );
  return system_settings_form($form);
}
