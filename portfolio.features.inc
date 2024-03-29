<?php
/**
 * @file
 * portfolio.features.inc
 */

/**
 * Implements hook_views_api().
 */
function portfolio_views_api() {
  return array('api' => '3.0');
}

/**
 * Implements hook_image_default_styles().
 */
function portfolio_image_default_styles() {
  $styles = array();

  // Exported image style: portfolio-full.
  $styles['portfolio-full'] = array(
    'name' => 'portfolio-full',
    'effects' => array(
      11 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 980,
          'height' => 450,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: portfolio-thumb.
  $styles['portfolio-thumb'] = array(
    'name' => 'portfolio-thumb',
    'effects' => array(
      14 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 85,
          'height' => 85,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function portfolio_node_info() {
  $items = array(
    'portfolio' => array(
      'name' => t('Portfolio Item'),
      'base' => 'node_content',
      'description' => t('Appears in the Gallery'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
