<?php
/**
 * @file
 * Alpha's theme implementation to display a block.
 */
//dpm($block);
?>

<div<?php print $attributes; ?>>
    <?php 
        if($block->bid == 'menu-menu-contact' || $block->bid == 'menu-menu-top-courtesy-nav' || $block->bid == 'menu-menu-bottom-courtesy'){ 
            print '<nav class="block-inner clearfix">';
        }else  print '<div class="block-inner clearfix">';
    ?>
    <?php print render($title_prefix); ?>
    <?php if ($block->subject): ?>
      <h2<?php print $title_attributes; ?>><?php print $block->subject; ?></h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

    <div<?php print $content_attributes; ?>>
      <?php print $content ?>
    </div>
  <?php 
        if($block->bid == 'menu-menu-contact' || $block->bid == 'menu-menu-top-courtesy-nav' || $block->bid == 'menu-menu-bottom-courtesy') print '</nav>';
        else  print '</div>';
    ?>
</div>
