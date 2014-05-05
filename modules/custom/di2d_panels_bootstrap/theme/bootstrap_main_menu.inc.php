

/*
* @file
*/

<div class="navbar navbar-custom navbar-inverse navbar-static-top" id="nav">
  <div class="container">
    <div class="navbar-header">

      <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </button>
    </div>

    <div class="collapse navbar-collapse">
      <ul class="nav navbar-nav nav-justified">
        <?php foreach ($items as $link => $title): ?>
          <li><a href="<?php print $link; ?>" data-toggle="collapse" data-target=".navbar-collapse"><?php print $title; ?></a></li>
          <li><a href="<?php print $link; ?>" data-toggle="collapse" data-target=".navbar-collapse"><?php print $title; ?></a></li>
          <li><a href="<?php print $link; ?>" data-toggle="collapse" data-target=".navbar-collapse"><?php print $title; ?></a></li>
          <li><a href="<?php print $link; ?>" data-toggle="collapse" data-target=".navbar-collapse"><?php print $title; ?></a></li>
        <?php endforeach; ?>
      </ul>
    </div>
  </div>
</div><!--/.navbar -->