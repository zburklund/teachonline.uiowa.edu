<?php
/**
 * @file
 * teach_core.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function teach_core_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: filter
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|0"] = 'bs-*';
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|10"] = 'fa-*';
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|12"] = 'col-md-*';
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|14"] = 'container-fluid';
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|16"] = 'layout-column*';
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|18"] = 'layout-container';
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|2"] = 'btn';
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|20"] = 'layout-row';
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|22"] = 'layoutmanager';
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|24"] = 'row';
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|4"] = 'text';
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|6"] = 'btn-*';
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|8"] = 'fa';

  // Exported overrides for: wysiwyg
  $overrides["wysiwyg.filtered_html.settings|advanced__active_tab"] = 'edit-basic';
  $overrides["wysiwyg.filtered_html.settings|buttons|btbutton"] = array(
    'btbutton' => 1,
  );
  $overrides["wysiwyg.filtered_html.settings|buttons|layoutmanager"] = array(
    'AddLayout' => 1,
  );

 return $overrides;
}
