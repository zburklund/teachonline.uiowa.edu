<?php
/**
 * @file
 * teach_page.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function teach_page_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_page_content'.
  $field_bases['field_page_content'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_page_content',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  return $field_bases;
}
