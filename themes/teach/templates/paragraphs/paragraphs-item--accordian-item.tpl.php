<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>
<div class="panel panel-default">
  <div class="panel-heading" role="tab" id="<?php print $heading_id; ?>">
    <<?php print $heading_level; ?> class="panel-title">
      <a class="collapsed" role="button" data-toggle="collapse" data-parent="#accordion" href="#<?php print $content_id; ?>" aria-expanded="false" aria-controls="<?php print $content_id; ?>">
        <?php print render($content['field_accordian_item_heading']); ?>
      </a>
    </<?php print $heading_level; ?>>
  </div>
  <div id="<?php print $content_id; ?>" class="panel-collapse collapse" role="tabpanel" aria-labelledby="<?php print $heading_id; ?>">
    <div class="panel-body">
      <?php print render($content['field_accordian_item_content']); ?>
    </div>
  </div>
</div>
