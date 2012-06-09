<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function fserver_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fserver-section-project';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'fserver_project' => 'fserver_project',
        'fserver_distro' => 'fserver_distro',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-fserver_releases-block_1' => array(
          'module' => 'views',
          'delta' => 'fserver_releases-block_1',
          'region' => 'content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['fserver-section-project'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fserver-section-resources';
  $context->description = 'Additional resources blocks';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'fserver_distro' => 'fserver_distro',
        'fserver_project' => 'fserver_project',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-fserver_resources-block_1' => array(
          'module' => 'views',
          'delta' => 'fserver_resources-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-fserver_resources-block_2' => array(
          'module' => 'views',
          'delta' => 'fserver_resources-block_2',
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional resources blocks');
  $export['fserver-section-resources'] = $context;

  return $export;
}
