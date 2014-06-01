<?php
/**
 * @file
 * permission.administer_backup_and_migrate.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer backup and migrate',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'backup_migrate',
);
