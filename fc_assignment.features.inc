<?php
/**
 * @file
 * fc_assignment.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fc_assignment_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function fc_assignment_node_info() {
  $items = array(
    'assignment' => array(
      'name' => t('Assignment'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
