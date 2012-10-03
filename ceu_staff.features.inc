<?php
/**
 * @file
 * ceu_staff.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ceu_staff_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ceu_staff_node_info() {
  $items = array(
    'profile_staff' => array(
      'name' => t('Profile-Staff'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Full name (Last, First)'),
      'help' => '',
    ),
  );
  return $items;
}
