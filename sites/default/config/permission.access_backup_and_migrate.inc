<?php
/**
 * @file
 * permission.access_backup_and_migrate.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'access backup and migrate',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'backup_migrate',
);
