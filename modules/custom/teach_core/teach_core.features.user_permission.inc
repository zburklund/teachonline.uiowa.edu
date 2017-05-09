<?php
/**
 * @file
 * teach_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function teach_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access ckeditor link'.
  $permissions['access ckeditor link'] = array(
    'name' => 'access ckeditor link',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'ckeditor_link',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'media',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access the block administration page'.
  $permissions['access the block administration page'] = array(
    'name' => 'access the block administration page',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'access toolbar'.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: 'access uiowa cse results'.
  $permissions['access uiowa cse results'] = array(
    'name' => 'access uiowa cse results',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'uiowa_bar',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer block access settings'.
  $permissions['administer block access settings'] = array(
    'name' => 'administer block access settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer ckeditor link'.
  $permissions['administer ckeditor link'] = array(
    'name' => 'administer ckeditor link',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor_link',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer fields'.
  $permissions['administer fields'] = array(
    'name' => 'administer fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer main-menu menu items'.
  $permissions['administer main-menu menu items'] = array(
    'name' => 'administer main-menu menu items',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer management menu items'.
  $permissions['administer management menu items'] = array(
    'name' => 'administer management menu items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer navigation menu items'.
  $permissions['administer navigation menu items'] = array(
    'name' => 'administer navigation menu items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer node_revision_delete'.
  $permissions['administer node_revision_delete'] = array(
    'name' => 'administer node_revision_delete',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_revision_delete',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'administer robots.txt'.
  $permissions['administer robots.txt'] = array(
    'name' => 'administer robots.txt',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'robotstxt',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer superfish'.
  $permissions['administer superfish'] = array(
    'name' => 'administer superfish',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'superfish',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer uiowa bar'.
  $permissions['administer uiowa bar'] = array(
    'name' => 'administer uiowa bar',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uiowa_bar',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer user-menu menu items'.
  $permissions['administer user-menu menu items'] = array(
    'name' => 'administer user-menu menu items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer userprotect'.
  $permissions['administer userprotect'] = array(
    'name' => 'administer userprotect',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'userprotect',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'assign all roles'.
  $permissions['assign all roles'] = array(
    'name' => 'assign all roles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign editor role'.
  $permissions['assign editor role'] = array(
    'name' => 'assign editor role',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign webmaster role'.
  $permissions['assign webmaster role'] = array(
    'name' => 'assign webmaster role',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own e-mail'.
  $permissions['change own e-mail'] = array(
    'name' => 'change own e-mail',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'userprotect',
  );

  // Exported permission: 'change own openid'.
  $permissions['change own openid'] = array(
    'name' => 'change own openid',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'userprotect',
  );

  // Exported permission: 'change own password'.
  $permissions['change own password'] = array(
    'name' => 'change own password',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'userprotect',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'configure all block body fields'.
  $permissions['configure all block body fields'] = array(
    'name' => 'configure all block body fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all block descriptions'.
  $permissions['configure all block descriptions'] = array(
    'name' => 'configure all block descriptions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all block titles'.
  $permissions['configure all block titles'] = array(
    'name' => 'configure all block titles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all blocks'.
  $permissions['configure all blocks'] = array(
    'name' => 'configure all blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all content type visibility settings'.
  $permissions['configure all content type visibility settings'] = array(
    'name' => 'configure all content type visibility settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all language settings'.
  $permissions['configure all language settings'] = array(
    'name' => 'configure all language settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all page visibility settings'.
  $permissions['configure all page visibility settings'] = array(
    'name' => 'configure all page visibility settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all region settings'.
  $permissions['configure all region settings'] = array(
    'name' => 'configure all region settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all role visibility settings'.
  $permissions['configure all role visibility settings'] = array(
    'name' => 'configure all role visibility settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all user visibility settings'.
  $permissions['configure all user visibility settings'] = array(
    'name' => 'configure all user visibility settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all visibility settings'.
  $permissions['configure all visibility settings'] = array(
    'name' => 'configure all visibility settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'configure sharestream'.
  $permissions['configure sharestream'] = array(
    'name' => 'configure sharestream',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media_sharestream',
  );

  // Exported permission: 'create blocks'.
  $permissions['create blocks'] = array(
    'name' => 'create blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'create drupal users'.
  $permissions['create drupal users'] = array(
    'name' => 'create drupal users',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'sitenow_user_create',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'path',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete all blocks'.
  $permissions['delete all blocks'] = array(
    'name' => 'delete all blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'disable all blocks'.
  $permissions['disable all blocks'] = array(
    'name' => 'disable all blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit meta tag: abstract'.
  $permissions['edit meta tag: abstract'] = array(
    'name' => 'edit meta tag: abstract',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: cache-control'.
  $permissions['edit meta tag: cache-control'] = array(
    'name' => 'edit meta tag: cache-control',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: canonical'.
  $permissions['edit meta tag: canonical'] = array(
    'name' => 'edit meta tag: canonical',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: content-language'.
  $permissions['edit meta tag: content-language'] = array(
    'name' => 'edit meta tag: content-language',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: description'.
  $permissions['edit meta tag: description'] = array(
    'name' => 'edit meta tag: description',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: expires'.
  $permissions['edit meta tag: expires'] = array(
    'name' => 'edit meta tag: expires',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: generator'.
  $permissions['edit meta tag: generator'] = array(
    'name' => 'edit meta tag: generator',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: geo.placename'.
  $permissions['edit meta tag: geo.placename'] = array(
    'name' => 'edit meta tag: geo.placename',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: geo.position'.
  $permissions['edit meta tag: geo.position'] = array(
    'name' => 'edit meta tag: geo.position',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: geo.region'.
  $permissions['edit meta tag: geo.region'] = array(
    'name' => 'edit meta tag: geo.region',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: icbm'.
  $permissions['edit meta tag: icbm'] = array(
    'name' => 'edit meta tag: icbm',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: image_src'.
  $permissions['edit meta tag: image_src'] = array(
    'name' => 'edit meta tag: image_src',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: keywords'.
  $permissions['edit meta tag: keywords'] = array(
    'name' => 'edit meta tag: keywords',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: news_keywords'.
  $permissions['edit meta tag: news_keywords'] = array(
    'name' => 'edit meta tag: news_keywords',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: next'.
  $permissions['edit meta tag: next'] = array(
    'name' => 'edit meta tag: next',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: original-source'.
  $permissions['edit meta tag: original-source'] = array(
    'name' => 'edit meta tag: original-source',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: pragma'.
  $permissions['edit meta tag: pragma'] = array(
    'name' => 'edit meta tag: pragma',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: prev'.
  $permissions['edit meta tag: prev'] = array(
    'name' => 'edit meta tag: prev',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: rating'.
  $permissions['edit meta tag: rating'] = array(
    'name' => 'edit meta tag: rating',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: referrer'.
  $permissions['edit meta tag: referrer'] = array(
    'name' => 'edit meta tag: referrer',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: refresh'.
  $permissions['edit meta tag: refresh'] = array(
    'name' => 'edit meta tag: refresh',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: revisit-after'.
  $permissions['edit meta tag: revisit-after'] = array(
    'name' => 'edit meta tag: revisit-after',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: rights'.
  $permissions['edit meta tag: rights'] = array(
    'name' => 'edit meta tag: rights',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: robots'.
  $permissions['edit meta tag: robots'] = array(
    'name' => 'edit meta tag: robots',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: shortlink'.
  $permissions['edit meta tag: shortlink'] = array(
    'name' => 'edit meta tag: shortlink',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: standout'.
  $permissions['edit meta tag: standout'] = array(
    'name' => 'edit meta tag: standout',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: title'.
  $permissions['edit meta tag: title'] = array(
    'name' => 'edit meta tag: title',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit own account'.
  $permissions['edit own account'] = array(
    'name' => 'edit own account',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'userprotect',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'enable all blocks'.
  $permissions['enable all blocks'] = array(
    'name' => 'enable all blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'move all blocks'.
  $permissions['move all blocks'] = array(
    'name' => 'move all blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use media wysiwyg'.
  $permissions['use media wysiwyg'] = array(
    'name' => 'use media wysiwyg',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'media_wysiwyg',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view all blocks'.
  $permissions['view all blocks'] = array(
    'name' => 'view all blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'view any unpublished content'.
  $permissions['view any unpublished content'] = array(
    'name' => 'view any unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'system',
  );

  return $permissions;
}
