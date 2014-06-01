<?php
/**
 * @file
 * permission.delete_backup_files.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete backup files',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'backup_migrate',
);
