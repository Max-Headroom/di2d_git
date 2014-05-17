<div class="<?php print $classes ?>" <?php
if (!empty($css_id)) {
  print "id=\"$css_id\"";
}
?>>
  <div class="row">
    <?php print $content['row1']; ?>
  </div>
  <div class="row">
    <div class="container">
      <?php print $content['left1']; ?>
      <?php print $content['right1']; ?>
    </div>
  </div>
  <div class="row">
    <?php print $content['row2']; ?>
  </div>
  <div class="row">
    <div class="container">
      <?php print $content['left2']; ?>
      <?php print $content['right2']; ?>
    </div>
  </div>
  <div class="row">
    <?php print $content['row3']; ?>
  </div>
  <div class="row">
    <div class="container">
      <?php print $content['left3']; ?>
      <?php print $content['right3']; ?>
    </div>
  </div>
  <div class="row">
    <?php print $content['row4']; ?>
  </div>
  <div class="row">
    <div class="container">
      <?php print $content['left4']; ?>
      <?php print $content['right4']; ?>
    </div>
  </div>
  <div class="row">
    <?php print $content['row5']; ?>
  </div>
</div>
