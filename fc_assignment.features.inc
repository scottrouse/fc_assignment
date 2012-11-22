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
 * Implements hook_views_api().
 */
function fc_assignment_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function fc_assignment_node_info() {
  $items = array(
    'assignment' => array(
      'name' => t('Assignment'),
      'base' => 'node_content',
      'description' => t('An <em>Assignment</em> is a specific incident to which various staff may be assigned.'),
      'has_title' => '1',
      'title_label' => t('Assignment Name'),
      'help' => '',
    ),
  );
  return $items;
}
