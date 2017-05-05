<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 */
?>
<header id="header" class="header page-header" role="header">
  <div class="container-smooth">
    <nav class="header-navbar" role="navigation">
      <!-- Branding -->
      <?php if ($logo || $site_name || $site_slogan): ?>
        <a href="<?php print $front_page; ?>" class="navbar-branding" rel="home" title="<?php print t('Home'); ?>">
          <?php if ($logo): ?>
            <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" id="site-logo" class="site-logo" />
          <?php endif; ?>
          <?php if ($site_name): ?>
            <span class="site-name"><?php print $site_name; ?></span>
          <?php endif; ?>
          <?php if ($site_slogan): ?>
            <span class="site-slogan"><?php print $site_slogan; ?></span>
          <?php endif; ?>
        </a>
      <?php endif; ?>
      <?php if ($page['main_nav']): ?>
        <?php print render($page['main_nav']); ?>
      <?php endif; ?>
    </nav><!-- /.navbar -->
  </div> <!-- /.container-smooth -->
</header>

<div id="main-wrapper">
  <div id="main" class="main" role="main">
    <?php if ($breadcrumb || $title || !empty($tabs) || $action_links || $messages || $page['header']): ?>
      <div class="main-header">
        <div class="container-smooth">
          <?php if ($breadcrumb): ?>
            <div id="breadcrumbs" class="breadcrumbs">
              <?php print $breadcrumb; ?>
            </div>
          <?php endif; ?>
          <?php if ($title): ?>
            <h1 id="page-title" class="page-title">
              <?php print $title; ?>
            </h1>
          <?php endif; ?>
          <?php if ($tabs): ?>
            <div id="primary-tabs" class="tabs">
              <?php print render($tabs); ?>
            </div>
          <?php endif; ?>
          <?php if ($action_links): ?>
            <ul id="action-items" class="action-links">
              <?php print render($action_links); ?>
            </ul>
          <?php endif; ?>
          <?php if ($messages): ?>
            <div id="messages" class="messages">
              <?php print $messages; ?>
            </div>
          <?php endif; ?>
          <?php if ($page['header']): ?>
            <?php print render($page['header']); ?>
          <?php endif; ?>
        </div>
      </div>
    <?php endif; ?>
    <div class="main-content <?php print $content_classes; ?>">
      <div class="row">
        <?php print render($page['content']); ?>
        <?php print render($page['sidebar']); ?>
      </div>
    </div>
  </div> <!-- /#main -->
</div> <!-- /#main-wrapper -->

<?php if ($page['footer']): ?>
  <footer id="footer" class="footer" role="footer">
    <div class="container-smooth">
      <?php print render($page['footer']); ?>
    </div>
  </footer>
<?php endif; ?>
