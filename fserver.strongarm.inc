<?php

/**
 * Implementation of hook_strongarm().
 */
function fserver_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_fserver_project';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '8',
    'revision_information' => '10',
    'menu' => '0',
    'book' => '9',
    'attachments' => '13',
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
  return $export;
}
