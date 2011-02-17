<?php
// $Id$

/**
 * @file
 * Administration functions for the Readability module
 */
function readability_admin_settings() {
  $form = array();
  return system_settings_form($form);
}
