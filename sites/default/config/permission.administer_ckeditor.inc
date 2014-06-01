<?php
/**
 * @file
 * permission.administer_ckeditor.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer ckeditor',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ckeditor',
);
