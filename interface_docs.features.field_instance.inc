<?php
/**
 * @file
 * interface_docs.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function interface_docs_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-interfaces_document-field_interface_category'
  $field_instances['node-interfaces_document-field_interface_category'] = array(
    'bundle' => 'interfaces_document',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the highest level category for Interface Docs.  This will determine what page the document will display on',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_interface_category',
    'label' => 'Interface Doc Category',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-interfaces_document-field_interface_descr'
  $field_instances['node-interfaces_document-field_interface_descr'] = array(
    'bundle' => 'interfaces_document',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Any miscellaneous information about the document that do not fit into one of the other "structured" fields.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_interface_descr',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'test_format' => 'test_format',
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'test_format' => array(
              'weight' => -7,
            ),
            1 => array(
              'weight' => -9,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -8,
            ),
            4 => array(
              'weight' => -6,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-interfaces_document-field_interface_direction'
  $field_instances['node-interfaces_document-field_interface_direction'] = array(
    'bundle' => 'interfaces_document',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is an optional field.  If you do not think it\'s necessary, we can remove it',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_interface_direction',
    'label' => 'Direction',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-interfaces_document-field_interface_doc'
  $field_instances['node-interfaces_document-field_interface_doc'] = array(
    'bundle' => 'interfaces_document',
    'deleted' => 0,
    'description' => 'Upload the document file here',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_interface_doc',
    'label' => 'Document',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'departments/interfaces/interfaces_install/documents',
      'file_extensions' => 'txt pdf doc xls zip',
      'max_filesize' => '5 MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-interfaces_document-field_interface_type'
  $field_instances['node-interfaces_document-field_interface_type'] = array(
    'bundle' => 'interfaces_document',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is an optional field. If you do not think it\'s necessary, we can remove it.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_interface_type',
    'label' => 'Interface Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Any miscellaneous information about the document that do not fit into one of the other "structured" fields.');
  t('Description');
  t('Direction');
  t('Document');
  t('Interface Doc Category');
  t('Interface Type');
  t('This is an optional field.  If you do not think it\'s necessary, we can remove it');
  t('This is an optional field. If you do not think it\'s necessary, we can remove it.');
  t('This is the highest level category for Interface Docs.  This will determine what page the document will display on');
  t('Upload the document file here');

  return $field_instances;
}
