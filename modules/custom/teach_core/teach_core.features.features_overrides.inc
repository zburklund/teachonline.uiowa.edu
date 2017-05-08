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
  $overrides["filter.filtered_html.filters|pathologic|settings|local_paths"] = 'teachonline.uiowa.edu.dd
  teachonline.dev.drupal.uiowa.edu
  teachonline.stage.drupal.uiowa.edu
  teachonline.prod.drupal.uiowa.edu
  teachonline.uiowa.edu';
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
  $overrides["filter.filtered_html.filters|wysiwyg|settings|valid_elements"] = '@[class|style|title],
  a[href|target|title|name|rel],
  img[style|src|width|height|alt|title],
  em, strong, strike, s, del, sub, sup, i, b, q[cite], acronym, abbr , samp, kbd,
  ul, ol[start], li, dl, dt, dd,
  p[align<center?justify?left?right], br, hr,
  div[align<center?justify?left?right], span,
  table[width|cellpadding|cellspacing|border|align|summary], tr[align|valign], td[align|valign|width|colspan|rowspan], tbody, th[align|valign|width|colspan|rowspan|scope], thead, tfoot, colgroup, col, caption,
  address, blockquote, pre, cite, code,
  h1, h2, h3, h4, h5, h6,
  figure, figcaption,
  small';

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
