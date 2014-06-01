<?php
/**
 * @file
 * permission.perform_backup.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'perform backup',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'backup_migrate',
);
