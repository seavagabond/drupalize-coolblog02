<?php
/**
 * @file
 * coolblog2.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function coolblog2_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: features.
  $menus['features'] = array(
    'menu_name' => 'features',
    'title' => 'Features',
    'description' => 'Menu items for any enabled features.',
  );
  // Exported menu: navigation.
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Navigation',
    'description' => 'The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Features');
  t('Menu items for any enabled features.');
  t('Navigation');
  t('The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.');


  return $menus;
}
