
<?php
drupal_add_css(drupal_get_path('module', 'di2d_panels_bootstrap') . '/css/affix_fixes.css', array('group' => CSS_DEFAULT, 'every_page' => FALSE));
?>

<?php
if (isset($variables['affix']) && $variables['affix']) {
  print $variables['affix'];
}
?>
<div id = "navbar" class = "navbar navbar-custom navbar-inverse navbar-static-top <?php if ($variables['container'] == 'all') {
  print 'container';
} ?>">
  <div class = "navbar-header">

    <button type = "button" class = "navbar-toggle" data-toggle = "collapse" data-target = ".navbar-collapse">
      <span class="sr-only">Toggle navigation</span>
      <span class = "icon-bar"></span>
      <span class = "icon-bar"></span>
      <span class = "icon-bar"></span>
    </button>
  </div>

  <div class = "collapse navbar-collapse">
    <ul class = "nav navbar-nav nav-justified <?php if ($variables['container'] == 'items') {
  print 'container';
} ?>">
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
