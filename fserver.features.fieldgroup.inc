<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function fserver_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_project_resources
  $groups['fserver_project-group_project_resources'] = array(
    'group_type' => 'standard',
    'type_name' => 'fserver_project',
    'group_name' => 'group_project_resources',
    'label' => 'Project resources',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '3',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '3',
    'fields' => array(
      '0' => 'field_fserver_homepage',
      '1' => 'field_fserver_documentation',
      '2' => 'field_fserver_screenshots',
      '3' => 'field_fserver_changelog',
      '4' => 'field_fserver_demo',
      '5' => 'field_fserver_repoviewer',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Project resources');

  return $groups;
}
