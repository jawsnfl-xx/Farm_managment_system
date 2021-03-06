<?php
/**
 * @file
 * farm_log_input.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function farm_log_input_taxonomy_default_vocabularies() {
  return array(
    'farm_materials' => array(
      'name' => 'Farm Materials',
      'machine_name' => 'farm_materials',
      'description' => 'A vocabulary of farm materials.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
