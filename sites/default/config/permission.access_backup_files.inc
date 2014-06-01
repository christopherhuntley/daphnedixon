<?php
/**
 * @file
 * permission.access_backup_files.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'access backup files',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'backup_migrate',
);
