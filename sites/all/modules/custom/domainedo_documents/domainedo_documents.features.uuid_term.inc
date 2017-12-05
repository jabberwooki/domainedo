<?php
/**
 * @file
 * domainedo_documents.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function domainedo_documents_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Espace Presse',
    'description' => '<p>In ac fringilla augue. Integer ullamcorper, arcu ut sollicitudin aliquet, purus dui venenatis massa, non consequat nunc velit eget lacus. Vivamus ante risus, placerat at mollis pretium, pulvinar eget nulla.</p>
',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => '3c5b8b3e-d625-42f1-a281-b7533e84c0fe',
    'vocabulary_machine_name' => 'espace_pro',
    'field_section_image' => array(
      'und' => array(
        0 => array(
          'sid' => 17,
          'options' => 'a:0:{}',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'La technique',
    'description' => '<p>Duis vulputate nunc sed elit aliquam ultricies? Phasellus sit amet pharetra erat. Etiam venenatis metus diam, mattis dignissim magna placerat eu. Sed tincidunt sapien felis, vitae auctor tortor varius nec.&nbsp;</p>

<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam tristique ligula quis eros iaculis, sed mollis tortor scelerisque. Donec tempus at nisl vitae pharetra. Vestibulum et tincidunt dolor. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed in nibh ligula. Nam viverra eros vitae odio maximus, quis commodo nulla imperdiet. Etiam quis quam ac diam facilisis ultricies vitae non quam. Suspendisse potenti. Praesent et sem sit amet augue vehicula tristique. Nunc condimentum dignissim leo, a pretium nisi tincidunt non. Quisque id orci lorem.</p>

<p>In scelerisque dictum gravida. Donec sodales nisl at nisi lacinia imperdiet quis ac dui. Donec sed ultricies leo. Pellentesque non justo sollicitudin, ornare eros quis, elementum nunc. Sed orci leo, bibendum at arcu non, elementum finibus justo. Praesent hendrerit dignissim justo, vel gravida ipsum. In dolor neque, aliquet sed leo in, lacinia imperdiet ligula. Curabitur nec ex eros. Quisque sapien nibh, venenatis et pulvinar ac, fermentum quis nisi. Vivamus sit amet sapien velit. Aenean viverra, elit ut varius lacinia, sem nibh semper dolor, ac tincidunt magna nunc at ante. Nulla malesuada egestas tortor non molestie. Cras eget fermentum leo.</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '64a60c72-6db4-4d26-8427-0c6b50dc0915',
    'vocabulary_machine_name' => 'espace_pro',
    'field_section_image' => array(
      'und' => array(
        0 => array(
          'sid' => 1328,
          'options' => 'a:0:{}',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Relations publiques',
    'description' => '<p>Quisque sit amet metus vitae ligula malesuada iaculis. Suspendisse id justo sodales, adipiscing risus eu, mattis mauris. Fusce rutrum eros eget leo adipiscing; sed faucibus elit posuere.</p>
',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '6c55690b-75a9-4bcf-868b-142344f0d6db',
    'vocabulary_machine_name' => 'espace_pro',
    'field_section_image' => array(
      'und' => array(
        0 => array(
          'sid' => 17,
          'options' => 'a:0:{}',
        ),
      ),
    ),
    'metatags' => array(),
  );
  return $terms;
}
