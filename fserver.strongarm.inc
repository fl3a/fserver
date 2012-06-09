<?php

/**
 * Implementation of hook_strongarm().
 */
function fserver_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_fserver_distro';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-1',
    'revision_information' => '2',
    'author' => '1',
    'options' => '3',
    'comment_settings' => '4',
    'menu' => '-2',
  );
  $export['content_extra_weights_fserver_distro'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_fserver_project';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '2',
    'revision_information' => '4',
    'author' => '5',
    'options' => '6',
    'comment_settings' => '7',
    'menu' => '0',
  );
  $export['content_extra_weights_fserver_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_fserver_release';
  $strongarm->value = array(
    'title' => '-3',
    'body_field' => '-1',
    'revision_information' => '1',
    'author' => '0',
    'options' => '2',
    'menu' => '-2',
    'path' => '3',
  );
  $export['content_extra_weights_fserver_release'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_fserver_project';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_fserver_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_fserver_release';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_fserver_release'] = $strongarm;

  return $export;
}
