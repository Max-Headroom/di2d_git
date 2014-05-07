<?php
/**
 * @file
 * Template for Di2D Double Double.
 */
?>

<div class="panel-display di2d-double clearfix <?php
if (!empty($class)) {
  print $class;
}
?>" <?php
if (!empty($css_id)) {
  print "id=\"$css_id\"";
}
?>>

  <?php
  $total = 4;
  $width = 12;
  $left = 6;
  $right = 6;
  ?>

  <?php for ($num = 1; $num <= $total; $num++) : ?>
    <?php if (isset($content['section' . $num . '-row']) || isset($content['section' . $num . '-column1']) || isset($content['section' . $num . '-column2'])): ?>
      <div class="divider" id="section<?php print $num; ?>"></div>

      <?php if (isset($content['section' . $num . '-row'])): ?>
        <div class="row section<?php print $num; ?>-row">
          <div class="col-md-<?php print $width; ?> section<?php print $num; ?>-row-content panel-panel">
            <div class="panel-panel-inner">
              <?php print $content['section' . $num . '-row']; ?>
            </div><!--content inner-->
          </div><!--content wrap-->
        </div><!--row-->
      <?php endif; ?>

      <!--row 2 columns-->
      <?php if (isset($content['section' . $num . '-column1']) || isset($content['section' . $num . '-column2'])): ?>
        <div class="row">

          <!--    column 1-->
          <?php if (isset($content['section' . $num . '-column1'])): ?>
            <div class="col-md-<?php print $left; ?> section<?php print$num; ?>-column1 panel-panel">
              <div class="panel-panel-inner">
                <?php print $content['section' . $num . '-column1']; ?>
              </div><!--column inner-->
            </div> <!--column wrap-->
          <?php endif; ?>

          <!--    column 2-->
          <?php if (isset($content['section' . $num . '-column2'])): ?>
            <div class=" col-md-<?php print $right; ?> section<?php print $num; ?>-column2 panel-panel">
              <div class="panel-panel-inner">
                <?php print $content['section' . $num . '-column2']; ?>
              </div><!--column inner-->
            </div><!--column wrap-->
          <?php endif; ?>
        </div><!-- columns row container-->
      <?php endif; ?><!-- columns-->

    <?php endif; ?><!-- section -->

  <?php endfor; ?>
