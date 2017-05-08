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

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
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
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
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
    ),
    'module' => 'metatag',
  );

  return $permissions;
}
