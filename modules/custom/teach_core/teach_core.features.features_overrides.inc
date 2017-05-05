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
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|10"] = 'text';
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|2"] = 'btn';
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|4"] = 'btn-*';
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|6"] = 'fa';
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|8"] = 'fa-*';

  // Exported overrides for: wysiwyg
  $overrides["wysiwyg.filtered_html.settings|advanced__active_tab"] = 'edit-basic';
  $overrides["wysiwyg.filtered_html.settings|buttons|btbutton"] = array(
    'btbutton' => 1,
  );

 return $overrides;
}
