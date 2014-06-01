<?php
/**
 * @file
 * permission.administer_imce.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer imce',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'imce',
);
