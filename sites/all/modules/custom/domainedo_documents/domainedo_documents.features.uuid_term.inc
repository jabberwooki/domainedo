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
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'La technique',
    'description' => '<p>Duis vulputate nunc sed elit aliquam ultricies? Phasellus sit amet pharetra erat. Etiam venenatis metus diam, mattis dignissim magna placerat eu. Sed tincidunt sapien felis, vitae auctor tortor varius nec.</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '64a60c72-6db4-4d26-8427-0c6b50dc0915',
    'vocabulary_machine_name' => 'espace_pro',
    'field_section_image' => array(
      'und' => array(
        0 => array(
          'sid' => 17,
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
        ),
      ),
    ),
    'metatags' => array(),
  );
  return $terms;
}
