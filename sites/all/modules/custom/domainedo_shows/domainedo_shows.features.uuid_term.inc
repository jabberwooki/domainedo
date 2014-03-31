<?php
/**
 * @file
 * domainedo_shows.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function domainedo_shows_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Autre',
    'description' => '',
    'format' => 'full_html',
    'weight' => 4,
    'uuid' => '03031174-7151-4f59-b543-bb01eaa2e26c',
    'vocabulary_machine_name' => 'show_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Danse',
    'description' => '',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => '0700d740-5670-414f-a9da-bb51683d29b0',
    'vocabulary_machine_name' => 'show_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Collectif',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0e933375-ebf9-487a-b861-e7eb42c65cc7',
    'vocabulary_machine_name' => 'structure_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Chapiteau Balthazar',
    'description' => '<p>Vivamus a neque eu felis malesuada suscipit. In adipiscing felis lectus, aliquet elementum justo tempor non? Cras eros massa; blandit quis sem in, mollis fermentum sem. Duis nec malesuada sem, in ultrices odio. Donec pretium pellentesque nibh vel viverra. Quisque convallis odio sed sapien lacinia dignissim sit amet ut nisi. Morbi egestas nisl eu ante rhoncus, eu semper neque molestie? Nullam tincidunt, libero quis malesuada consequat, ligula arcu lobortis mi, sed cursus nulla massa interdum ipsum. Suspendisse in velit ac eros sagittis laoreet.</p>

<p>Sed in elementum justo. Vestibulum tempus, nibh placerat tempus vehicula, est risus consectetur turpis; sit amet vulputate mauris mauris nec lacus. Vivamus ultrices est id mauris suscipit, et ultrices nibh tincidunt. Nunc libero odio, feugiat vel pretium id, iaculis a mauris! Nam vitae arcu et turpis pretium sodales id id nibh. Aliquam erat volutpat. Donec nec convallis tortor, eget faucibus sem. Donec scelerisque mi in tincidunt blandit. Phasellus lobortis felis lacus; a scelerisque diam varius eget. Proin ante lacus, luctus in elementum id, suscipit a turpis.</p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '11ad532f-7299-418f-8b7a-63a3142873db',
    'vocabulary_machine_name' => 'show_locations',
    'field_scald_gallery' => array(),
    'field_scald_sound' => array(),
    'field_scald_video' => array(),
    'field_seating' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Théâtre',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '41660765-78b3-4594-8268-a31c13de64d9',
    'vocabulary_machine_name' => 'show_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Musique',
    'description' => '',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => '4788c317-4e59-459a-bd25-d12161f44c5b',
    'vocabulary_machine_name' => 'show_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Groupe',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '5135cdab-fb7c-49c2-920f-0f075e59bea8',
    'vocabulary_machine_name' => 'structure_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Amphithéatre d\'O',
    'description' => '<p>Suspendisse hendrerit nunc sit amet turpis laoreet, in varius enim vehicula. Fusce sollicitudin nunc id erat laoreet ullamcorper. Vestibulum commodo magna tellus, sit amet tempor odio imperdiet quis? Etiam viverra nisl ut porttitor euismod. Maecenas sed odio velit. Aliquam odio erat, pharetra nec odio at, dapibus placerat diam. Proin fringilla augue sit amet nisl luctus malesuada? Sed a ultricies mi. Nunc scelerisque felis vitae ante blandit; sit amet condimentum justo imperdiet. Curabitur cursus tempus massa, non sagittis lorem tristique in. Proin non faucibus nulla, eget varius justo. Ut tincidunt luctus lectus. Etiam nibh urna, scelerisque ut purus vel, malesuada malesuada dolor. Sed molestie mollis leo, in imperdiet sapien adipiscing in.</p>

<p>Nulla iaculis congue enim. Proin tristique sem sit amet metus euismod condimentum. Nam rutrum molestie est, non fringilla elit ultricies in. Aenean laoreet ut nibh quis viverra. Donec scelerisque ante dui, id tincidunt tortor commodo in. Nunc consectetur ac nunc eu vehicula. Donec a nibh gravida, lobortis arcu eu, pellentesque enim.</p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '52cf41cb-1714-41ac-9abf-9c94d8093795',
    'vocabulary_machine_name' => 'show_locations',
    'field_scald_gallery' => array(),
    'field_scald_sound' => array(),
    'field_scald_video' => array(),
    'field_seating' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Cirque',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '76f47a31-044e-48da-b5a7-6152c553ce4a',
    'vocabulary_machine_name' => 'show_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Ensemble',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '8661c0fb-af66-460d-9a19-903d5d6f1311',
    'vocabulary_machine_name' => 'structure_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Baraque Napo',
    'description' => '<p>Morbi malesuada nisi vitae ligula consectetur convallis. Phasellus eleifend tempor lacus, id eleifend dui aliquam id. Nulla lacinia arcu imperdiet neque consectetur sollicitudin. Vivamus mauris nibh, auctor sit amet orci eget, imperdiet adipiscing mi. Praesent eget diam porttitor, iaculis purus ac, bibendum nulla. Morbi quis euismod lorem. Fusce placerat volutpat eleifend. Etiam consectetur augue libero, eget hendrerit felis pulvinar eu. Interdum et malesuada fames ac ante ipsum primis in faucibus. Donec aliquet cursus lacus, vel sagittis nibh congue porttitor. Mauris a tempor ipsum.</p>

<p>Fusce hendrerit tortor a nisi tristique cursus. Quisque venenatis arcu non dolor tempus, id adipiscing velit ullamcorper. Pellentesque ut lorem sed magna euismod lobortis. Etiam ullamcorper varius tellus, vitae fermentum sem consectetur a. Donec vestibulum interdum velit, in gravida orci posuere ac. Ut molestie sapien magna, et aliquet velit imperdiet nec! Curabitur luctus venenatis odio id facilisis. Donec et semper enim. Maecenas non odio at arcu blandit tempor ac eu libero. Nulla non volutpat lorem. Pellentesque placerat tortor non rhoncus malesuada. Proin vehicula mi magna, quis egestas dolor tincidunt blandit. Phasellus eget pharetra lorem, eget gravida mauris.</p>

<p>Nulla viverra magna in turpis vulputate tincidunt? Pellentesque id mollis turpis. Aenean hendrerit mattis nunc; et dictum est sodales in? Integer a sapien vitae erat mollis interdum vitae eget nunc. Donec lobortis at dui nec mollis. Curabitur accumsan ullamcorper erat id ullamcorper. Nunc lobortis, urna ut dictum congue, ante elit mollis nisi, non eleifend leo ante quis lacus. Cras imperdiet vitae libero ut congue. Nam adipiscing ipsum nisl, iaculis lacinia nisi ultrices a. Nulla facilisi. Ut dui massa, consequat porttitor justo ut, ultricies congue lorem. Sed lobortis nunc pulvinar velit facilisis dictum.</p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '867307bd-23e0-4fe9-a76e-d97da41f6687',
    'vocabulary_machine_name' => 'show_locations',
    'field_scald_gallery' => array(),
    'field_scald_sound' => array(),
    'field_scald_video' => array(),
    'field_seating' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Bassin',
    'description' => '<p>Praesent egestas odio ac dignissim vulputate. Fusce eu est metus! Vestibulum auctor tincidunt sem. Fusce ultrices metus leo, eget euismod magna faucibus at. Nam malesuada ac eros sed faucibus. Morbi eu orci posuere lacus convallis ullamcorper! Nam rutrum, massa sit amet imperdiet iaculis, justo ligula elementum nibh; ac adipiscing risus odio eu tellus. Suspendisse potenti. Integer congue felis pulvinar lacus lacinia eleifend. Sed et sapien nibh! Suspendisse blandit accumsan elit, adipiscing consectetur urna! Aenean consectetur felis eu ante malesuada, at aliquet nibh interdum. Donec aliquet pulvinar tempor. Integer aliquet diam tellus, eget placerat arcu ultrices id. Sed lacus felis, iaculis quis porta quis, porta eget orci. Vivamus vel lorem eget leo pretium adipiscing?</p>

<p>Praesent luctus nunc a nibh tempor, non aliquam tellus semper. Donec scelerisque erat velit, id sagittis libero sodales in. Etiam feugiat, leo eu dapibus venenatis, erat tellus hendrerit massa, sit amet sodales lorem enim condimentum purus. Fusce vel nibh eget ipsum fermentum dignissim. Suspendisse gravida in diam quis lobortis. Morbi a laoreet magna. Integer accumsan diam mauris, vel tincidunt diam tempor eu! Pellentesque sit amet faucibus tortor, sit amet faucibus nulla. Proin aliquam porttitor sapien eu molestie. Integer aliquam interdum dignissim.</p>

<p>Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Praesent rutrum mi eu dolor sodales cursus. Phasellus dapibus felis a nibh pellentesque elementum in et diam. Nulla lacinia metus sit amet nunc ornare, ut luctus elit congue. Fusce ligula quam, venenatis eu arcu ac, molestie consequat enim! Phasellus tincidunt lorem enim, vel lacinia libero tempor eu. Phasellus varius eu mauris quis sagittis. Nullam euismod tellus nulla, eu vulputate libero euismod ac. Vestibulum fringilla velit et erat luctus, id bibendum sapien auctor.</p>

<p>&nbsp;</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'abca78c7-6522-4171-a33a-05f5d75e0b73',
    'vocabulary_machine_name' => 'show_locations',
    'field_scald_gallery' => array(),
    'field_scald_sound' => array(),
    'field_scald_video' => array(),
    'field_seating' => array(),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Familles',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'cf7ab63a-8d06-4149-8d32-cf94426ae119',
    'vocabulary_machine_name' => 'audience_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Jeunes',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'dff2c1a5-4cf8-416f-a990-e3863ffcc432',
    'vocabulary_machine_name' => 'audience_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Artiste seul',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f5868ce9-5ba9-4e1b-a77f-780f238754bc',
    'vocabulary_machine_name' => 'structure_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Compagnie',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'fc507780-e65b-42b1-974a-9f226e5ff335',
    'vocabulary_machine_name' => 'structure_types',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Etudiants',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ff3084e7-9131-4c0c-afb3-3e1b5c849503',
    'vocabulary_machine_name' => 'audience_types',
    'metatags' => array(),
  );
  return $terms;
}
