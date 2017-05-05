<?php
/**
 * @file
 * teach_page.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function teach_page_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-page-field_page_content'.
  $field_instances['node-page-field_page_content'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_page_content',
    'label' => 'Content',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'accordian' => 'accordian',
        'accordian_item' => -1,
        'text' => 'text',
      ),
      'bundle_weights' => array(
        'accordian' => 4,
        'accordian_item' => 5,
        'text' => -6,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');

  return $field_instances;
}
