<?php
/**
 * @file
 * farm_inventory.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function farm_inventory_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_farm_inventory-field_farm_inventory_asset'.
  $field_instances['field_collection_item-field_farm_inventory-field_farm_inventory_asset'] = array(
    'bundle' => 'field_farm_inventory',
    'deleted' => 0,
    'description' => 'Which asset do you want to adjust the inventory of?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => 0,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_farm_inventory_asset',
    'label' => 'Asset',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference_view_widget',
      'settings' => array(
        'allow_duplicates' => 0,
        'close_modal' => 1,
        'pass_argument' => 1,
        'pass_arguments' => '',
        'rendered_entity' => 0,
        'view' => 'farm_inventory_entityreference_view|entityreference_view_widget',
        'view_mode' => 'full',
      ),
      'type' => 'entityreference_view_widget',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_farm_inventory-field_farm_inventory_value'.
  $field_instances['field_collection_item-field_farm_inventory-field_farm_inventory_value'] = array(
    'bundle' => 'field_farm_inventory',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter a positive value to record an increase in inventory. Enter a negative value to record a decrease in inventory.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'fraction',
        'settings' => array(
          'auto_precision' => TRUE,
          'precision' => 0,
          'prefix_suffix' => TRUE,
        ),
        'type' => 'fraction_decimal',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_farm_inventory_value',
    'label' => 'Value',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fraction',
      'settings' => array(
        'auto_precision' => 1,
        'precision' => 0,
      ),
      'type' => 'fraction_decimal',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_farm_quantity-field_farm_inventory_asset'.
  $field_instances['field_collection_item-field_farm_quantity-field_farm_inventory_asset'] = array(
    'bundle' => 'field_farm_quantity',
    'deleted' => 0,
    'description' => 'Select the asset whose inventory will be adjusted.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => 0,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_farm_inventory_asset',
    'label' => 'Asset',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference_view_widget',
      'settings' => array(
        'allow_duplicates' => 0,
        'close_modal' => 1,
        'pass_argument' => 1,
        'pass_arguments' => '',
        'rendered_entity' => 0,
        'view' => 'farm_inventory_entityreference_view|entityreference_view_widget',
        'view_mode' => 'full',
      ),
      'type' => 'entityreference_view_widget',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_farm_quantity-field_inventory_multiplier'.
  $field_instances['field_collection_item-field_farm_quantity-field_inventory_multiplier'] = array(
    'bundle' => 'field_farm_quantity',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Is this inventory adjustment increasing or decreasing the asset\'s inventory?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_inventory_multiplier',
    'label' => 'Inventory adjustment',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Asset');
  t('Enter a positive value to record an increase in inventory. Enter a negative value to record a decrease in inventory.');
  t('Inventory adjustment');
  t('Is this inventory adjustment increasing or decreasing the asset\'s inventory?');
  t('Select the asset whose inventory will be adjusted.');
  t('Value');
  t('Which asset do you want to adjust the inventory of?');

  return $field_instances;
}
