<?php
/**
 * @file
 */
?>
<div id="page-wrapper wrap"><div id="page">

    <!-- Page Header -->
    <header class="masthead">

      <?php if ($site_name): ?>
        <div id="site-name-slogan" class="brand <?php
        if ($hide_site_name) {
          print ' element-invisible';
        }
        ?>">

          <?php if ($site_name): ?>
            <h1 id="site-name"<?php
            if ($hide_site_name) {
              print ' class="element-invisible"';
            }
            ?>>
              <strong>
                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
              </strong>
            </h1>
          <?php endif; ?>
        </div> <!-- /#name-and-slogan -->

      <?php endif; ?>

      <?php if (isset($page['header']) && $page['header']): ?>
        <div class="header-region1">
          <div class="header-region1-inner">
            <?php print render($page['header']); ?>
          </div>
        </div>
      <?php endif; ?>

      <?php if (isset($page['header2']) && $page['header2']): ?>
        <div class="header-region2">
          <div class="header-region2-inner">
            <?php print render($page['header2']); ?>
          </div>
        </div>
      <?php endif; ?>

    </header>

    <!-- Fixed navbar -->
    <?php if (isset($page['navigation']) && $page['navigation']): ?>
      <div class="navbar-region">
        <div class="navbar-region-inner">
          <?php print render($page['navigation']); ?>
        </div>
      </div><!--/.navbar -->
    <?php endif; ?>

    <!-- Begin page content -->

    <!-- Page Main -->
    <div id="main-wrapper" class="clearfix"><div id="main" class="clearfix">

        <div id="top-content" class="column container">

          <a id="main-content"></a>
          <?php if (($no_panels || $always_show_page_title) && $title): ?>
            <h1 id="page-title" class="title">
              <?php print $title; ?>
            </h1>
          <?php endif; ?>

          <?php if ($messages): ?>
            <div id="messages">
              <?php print $messages; ?>
            </div>
          <?php endif; ?>

          <?php if ($tabs): ?>
            <div id="tabs">
              <?php print render($tabs); ?>
            </div>
          <?php endif; ?>

          <?php if ($action_links): ?>
            <div id="action-links">
              <?php print render($action_links); ?>
            </div>
          <?php endif; ?>
        </div> <!-- /.section, /#top-content -->

        <div id="content" class="column <?php $no_panels ? print 'container' : ''; ?>">
          <?php print render($page['content']); ?>
        </div> <!-- /.section, /#content -->

        <?php if (isset($page['footer']) && $page['footer']): ?>
          <footer id="footer">
            <div class="footer-inner">
              <?php print render($page['footer']); ?>
            </div>
          </footer>
        <?php endif; ?>

      </div></div> <!-- /#main, /#main-wrapper -->

  </div></div> <!-- /#page, /#page-wrapper -->
