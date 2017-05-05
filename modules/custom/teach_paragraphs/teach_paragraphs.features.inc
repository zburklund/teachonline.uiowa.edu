<?php
/**
 * @file
 * teach_paragraphs.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function teach_paragraphs_paragraphs_info() {
  $items = array(
    'accordian' => array(
      'name' => 'Accordion',
      'bundle' => 'accordian',
      'locked' => '1',
    ),
    'accordian_item' => array(
      'name' => 'Accordion Item',
      'bundle' => 'accordian_item',
      'locked' => '1',
    ),
    'text' => array(
      'name' => 'Text',
      'bundle' => 'text',
      'locked' => '1',
    ),
  );
  return $items;
}
