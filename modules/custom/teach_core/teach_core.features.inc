<?php
/**
 * @file
 * teach_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function teach_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_filter_default_formats_alter().
 */
function teach_core_filter_default_formats_alter(&$data) {
  if (isset($data['filtered_html'])) {
    $data['filtered_html']['filters']['wysiwyg']['settings']['rule_valid_classes'][0] = 'bs-*'; /* WAS: 'plain-button' */
    $data['filtered_html']['filters']['wysiwyg']['settings']['rule_valid_classes'][10] = 'fa-*'; /* WAS: '' */
    $data['filtered_html']['filters']['wysiwyg']['settings']['rule_valid_classes'][12] = 'col-md-*'; /* WAS: '' */
    $data['filtered_html']['filters']['wysiwyg']['settings']['rule_valid_classes'][14] = 'container-fluid'; /* WAS: '' */
    $data['filtered_html']['filters']['wysiwyg']['settings']['rule_valid_classes'][16] = 'layout-column*'; /* WAS: '' */
    $data['filtered_html']['filters']['wysiwyg']['settings']['rule_valid_classes'][18] = 'layout-container'; /* WAS: '' */
    $data['filtered_html']['filters']['wysiwyg']['settings']['rule_valid_classes'][2] = 'btn'; /* WAS: 'small' */
    $data['filtered_html']['filters']['wysiwyg']['settings']['rule_valid_classes'][20] = 'layout-row'; /* WAS: '' */
    $data['filtered_html']['filters']['wysiwyg']['settings']['rule_valid_classes'][22] = 'layoutmanager'; /* WAS: '' */
    $data['filtered_html']['filters']['wysiwyg']['settings']['rule_valid_classes'][24] = 'row'; /* WAS: '' */
    $data['filtered_html']['filters']['wysiwyg']['settings']['rule_valid_classes'][4] = 'text'; /* WAS: '' */
    $data['filtered_html']['filters']['wysiwyg']['settings']['rule_valid_classes'][6] = 'btn-*'; /* WAS: '' */
    $data['filtered_html']['filters']['wysiwyg']['settings']['rule_valid_classes'][8] = 'fa'; /* WAS: '' */
  }
}

/**
 * Implements hook_wysiwyg_default_profiles_alter().
 */
function teach_core_wysiwyg_default_profiles_alter(&$data) {
  if (isset($data['filtered_html'])) {
    $data['filtered_html']['settings']['advanced__active_tab'] = 'edit-basic'; /* WAS: 'edit-output' */
    $data['filtered_html']['settings']['buttons']['btbutton'] = array(
      'btbutton' => 1,
    ); /* WAS: '' */
    $data['filtered_html']['settings']['buttons']['layoutmanager'] = array(
      'AddLayout' => 1,
    ); /* WAS: '' */
  }
}
