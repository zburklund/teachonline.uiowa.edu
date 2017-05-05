<?php

function teach_preprocess_entity(&$variables) {
  // Only run with paragraphs_item entity.
  if (!empty($variables['entity_type']) == 'paragraphs_item') {
    if ($variables['elements']['#bundle'] == 'accordian_item') {
      $variables['content_id'] = 'accordianItem' . $variables['id'];
      $variables['heading_id'] = 'heading' . $variables['id'];
      $variables['heading_level'] = $variables['field_accordian_heading_level'][0]['value'];
    }
  }
}
