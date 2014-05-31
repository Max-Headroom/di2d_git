<div class="<?php print $classes ?>" <?php
if (!empty($css_id)) {
  print "id=\"$css_id\"";
}
?>>

  <?php if ($content['row1']) : ?>
    <div class="row">
      <?php print $content['row1']; ?>
    </div>
  <?php endif; ?>

  <?php if ($content['left1'] || $content['right1']) : ?>
    <div class="row column-row">
      <div class="container">
        <?php print $content['left1']; ?>
        <?php print $content['right1']; ?>
      </div>
    </div>
  <?php endif; ?>

  <?php if ($content['row2']) : ?>
    <div class="row">
      <?php print $content['row2']; ?>
    </div>
  <?php endif; ?>

  <?php if ($content['left2'] || $content['right2']) : ?>
    <div class="row column-row">
      <div class="container">
        <?php print $content['left2']; ?>
        <?php print $content['right2']; ?>
      </div>
    </div>
  <?php endif; ?>

  <?php if ($content['row3']) : ?>
    <div class="row">
      <?php print $content['row3']; ?>
    </div>
  <?php endif; ?>

  <?php if ($content['left3'] || $content['right3']) : ?>
    <div class="row column-row">
      <div class="container">
        <?php print $content['left3']; ?>
        <?php print $content['right3']; ?>
      </div>
    </div>
  <?php endif; ?>

  <?php if ($content['row4']) : ?>
    <div class="row">
      <?php print $content['row4']; ?>
    </div>
  <?php endif; ?>

  <?php if ($content['left4'] || $content['right4']) : ?>
    <div class="row column-row">
      <div class="container">
        <?php print $content['left4']; ?>
        <?php print $content['right4']; ?>
      </div>
    </div>
  <?php endif; ?>

  <?php if ($content['row5']) : ?>
    <div class="row">
      <?php print $content['row5']; ?>
    </div>
  <?php endif; ?>
</div>
