<?php
/**
 * @file
 * Theme and preprocess functions for nodes.
 */
function teach_preprocess_node(&$vars) {
  // Add theme hook suggestion for view mode.
  $vars['theme_hook_suggestions'][] = 'node__' . $vars['type'] . '__' . $vars['view_mode'];
}
