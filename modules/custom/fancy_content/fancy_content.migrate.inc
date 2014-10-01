<?php

function fancy_content_migrate_api() {
  $api = array(
    'api' => 2,
    'migrations' => array(
      'Page' => array(
        'class_name' => 'PageMigration',
      ),
      'Section' => array(
        'class_name' => 'SectionMigration',
      ),
      'ContentHeadline' => array(
        'class_name' => 'ContentHeadlineMigration',
      ),
      'ContentImage' => array(
        'class_name' => 'ContentImageMigration',
      ),
      'ContentMap' => array(
        'class_name' => 'ContentMapMigration',
      ),
      'ContentRichText' => array(
        'class_name' => 'ContentRichTextMigration',
      ),
      'ContentText' => array(
        'class_name' => 'ContentTextMigration',
      ),
      'MediaImage' => array(
        'class_name' => 'MediaImageMigration',
      ),
    ),
  );

  return $api;
}
