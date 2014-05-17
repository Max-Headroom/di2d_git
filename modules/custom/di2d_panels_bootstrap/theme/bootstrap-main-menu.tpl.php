
<?php
if (isset($variables['affix']) && $variables['affix']) {
  print $variables['affix'];
}
?>
<div class = "navbar navbar-custom navbar-inverse navbar-static-top" id = "nav">
  <div class = "navbar-header">

    <button type = "button" class = "navbar-toggle" data-toggle = "collapse" data-target = ".navbar-collapse">
      <span class = "icon-bar"></span>
      <span class = "icon-bar"></span>
      <span class = "icon-bar"></span>
    </button>
  </div>

  <div class = "collapse navbar-collapse">
    <ul class = "nav navbar-nav nav-justified">
      <?php foreach ($variables['items'] as $link => $title):
        ?>
        <li><a href="<?php print $link; ?>" data-toggle="collapse" data-target=".navbar-collapse"><?php print $title; ?></a></li>
      <?php endforeach; ?>
    </ul>
  </div>
</div><!--/.navbar -->

<?php
if (isset($variables['affix']) && $variables['affix']) {
  print '</div>';
}
?>
