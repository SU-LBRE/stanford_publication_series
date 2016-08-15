<?php
/**
 * @file
 * stanford_publication_series.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_publication_series_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'document_series';
  $context->description = 'Documents associated with a Publication Series';
  $context->tag = 'Document Library';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'stanford_publication_series' => 'stanford_publication_series',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-e00cdc494b7dada94e052e24578e12f6' => array(
          'module' => 'views',
          'delta' => 'e00cdc494b7dada94e052e24578e12f6',
          'region' => 'content_lower',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Document Library');
  t('Documents associated with a Publication Series');
  $export['document_series'] = $context;

  return $export;
}
