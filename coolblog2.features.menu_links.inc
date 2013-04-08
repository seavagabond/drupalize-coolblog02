<?php
/**
 * @file
 * coolblog2.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function coolblog2_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:cool-blogs
  $menu_links['navigation:cool-blogs'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'cool-blogs',
    'router_path' => 'cool-blogs',
    'link_title' => 'The Coolest Blogs',
    'options' => array(
      'attributes' => array(
        'title' => 'List of cool blogs ',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('The Coolest Blogs');


  return $menu_links;
}
