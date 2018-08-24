<?php
/**
 * @file
 * domainedo_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function domainedo_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
  if ($module == "scald" && $api == "context_config") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function domainedo_media_image_default_styles() {
  $styles = array();

  // Exported image style: 100px-large.
  $styles['100px-large'] = array(
    'label' => '100px-large',
    'effects' => array(
      18 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: carre600x600.
  $styles['carre600x600'] = array(
    'label' => 'carré 600x600',
    'effects' => array(
      30 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 600,
          'height' => 600,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'carre600x600',
        ),
        'weight' => 0,
      ),
      31 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 600,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: festival780x517.
  $styles['festival780x517'] = array(
    'label' => 'Festival 780x517',
    'effects' => array(
      28 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 780,
          'height' => 517,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'festival780x517',
        ),
        'weight' => 0,
      ),
      29 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 780,
          'height' => 517,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_325x136.
  $styles['image_325x136'] = array(
    'label' => 'image 325x136',
    'effects' => array(
      34 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 325,
          'height' => 136,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'image_325x136',
        ),
        'weight' => 0,
      ),
      35 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 325,
          'height' => 136,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_763x550.
  $styles['image_763x550'] = array(
    'label' => 'En ce moment 763x550',
    'effects' => array(
      24 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 763,
          'height' => 550,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'image_763x550',
        ),
        'weight' => 0,
      ),
      25 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 763,
          'height' => 550,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: large-1366x266.
  $styles['large-1366x266'] = array(
    'label' => 'Haut page classique 1366x266',
    'effects' => array(
      40 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1366,
          'height' => 266,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'large-1366x266',
        ),
        'weight' => 0,
      ),
      41 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1366,
          'height' => 266,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: large_480x296.
  $styles['large_480x296'] = array(
    'label' => 'large 480x296',
    'effects' => array(
      18 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 480,
          'height' => 296,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'large_480x296',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: list_image_shows__240x180_.
  $styles['list_image_shows__240x180_'] = array(
    'label' => 'List Image shows 500x694',
    'effects' => array(
      36 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 500,
          'height' => 694,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'list_image_shows__240x180_',
        ),
        'weight' => 0,
      ),
      37 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 500,
          'height' => 694,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: main_show__570_.
  $styles['main_show__570_'] = array(
    'label' => 'main show (570)',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 570,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: max__940_.
  $styles['max__940_'] = array(
    'label' => 'max (940)',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 940,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: maxbreakpoints_theme_domainedo_mobile_1x.
  $styles['maxbreakpoints_theme_domainedo_mobile_1x'] = array(
    'label' => 'maxbreakpoints_theme_domainedo_mobile_1x',
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 560,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: maxbreakpoints_theme_domainedo_narrow_1x.
  $styles['maxbreakpoints_theme_domainedo_narrow_1x'] = array(
    'label' => 'maxbreakpoints_theme_domainedo_narrow_1x',
    'effects' => array(
      10 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 940,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: maxbreakpoints_theme_domainedo_wide_1x.
  $styles['maxbreakpoints_theme_domainedo_wide_1x'] = array(
    'label' => 'maxbreakpoints_theme_domainedo_wide_1x',
    'effects' => array(
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 940,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: resp_full_img_showbreakpoints_theme_domainedo_mobile_1x.
  $styles['resp_full_img_showbreakpoints_theme_domainedo_mobile_1x'] = array(
    'label' => 'resp_full_img_showbreakpoints_theme_domainedo_mobile_1x',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 560,
          'height' => 263,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: resp_full_img_showbreakpoints_theme_domainedo_narrow_1x.
  $styles['resp_full_img_showbreakpoints_theme_domainedo_narrow_1x'] = array(
    'label' => 'resp_full_img_showbreakpoints_theme_domainedo_narrow_1x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 570,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: small_150.
  $styles['small_150'] = array(
    'label' => 'small (150 x 150)',
    'effects' => array(
      23 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 150,
          'height' => 150,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'small_150',
        ),
        'weight' => 0,
      ),
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: top-show-1366x489.
  $styles['top-show-1366x489'] = array(
    'label' => 'Haut Spectacle 1366',
    'effects' => array(
      38 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1366,
          'height' => 489,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'top-show-1366x489',
        ),
        'weight' => 0,
      ),
      39 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1366,
          'height' => 489,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: zoom-desktop.
  $styles['zoom-desktop'] = array(
    'label' => 'zoom-desktop',
    'effects' => array(
      23 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 634,
          'height' => 440,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: zoom_ss_634x440.
  $styles['zoom_ss_634x440'] = array(
    'label' => 'Zoom diaporama 634x440',
    'effects' => array(
      26 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 634,
          'height' => 440,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'zoom_ss_634x440',
        ),
        'weight' => 0,
      ),
      27 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 634,
          'height' => 440,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: zoombreakpoints_theme_domainedo_mobile_1x.
  $styles['zoombreakpoints_theme_domainedo_mobile_1x'] = array(
    'label' => 'zoombreakpoints_theme_domainedo_mobile_1x',
    'effects' => array(
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 560,
          'height' => 283,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: zoombreakpoints_theme_domainedo_narrow_1x.
  $styles['zoombreakpoints_theme_domainedo_narrow_1x'] = array(
    'label' => 'zoombreakpoints_theme_domainedo_narrow_1x',
    'effects' => array(
      15 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 591,
          'height' => 283,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: zoombreakpoints_theme_domainedo_wide_1x.
  $styles['zoombreakpoints_theme_domainedo_wide_1x'] = array(
    'label' => 'zoombreakpoints_theme_domainedo_wide_1x',
    'effects' => array(
      16 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 283,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
