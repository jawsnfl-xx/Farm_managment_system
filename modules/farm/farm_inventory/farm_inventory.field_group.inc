<?php
/**
 * @file
 * farm_inventory.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function farm_inventory_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_inventory|field_collection_item|field_farm_quantity|form';
  $field_group->group_name = 'group_farm_inventory';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_farm_quantity';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inventory',
    'weight' => '4',
    'children' => array(
      0 => 'field_farm_inventory_asset',
      1 => 'field_inventory_multiplier',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Inventory',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-farm-inventory field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_farm_inventory|field_collection_item|field_farm_quantity|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Inventory');

  return $field_groups;
}
