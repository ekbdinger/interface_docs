<?php
/**
 * @file
 * interface_docs.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function interface_docs_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'interface_docs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Interface Docs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Interface Docs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['empty'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Mainly using this for debugging purposes at the moment, but may expose this to the document admins for example.  I\'ll probably clone some views based off this with less options';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Document */
  $handler->display->display_options['fields']['field_interface_doc']['id'] = 'field_interface_doc';
  $handler->display->display_options['fields']['field_interface_doc']['table'] = 'field_data_field_interface_doc';
  $handler->display->display_options['fields']['field_interface_doc']['field'] = 'field_interface_doc';
  $handler->display->display_options['fields']['field_interface_doc']['click_sort_column'] = 'fid';
  /* Field: Content: Interface Doc Category */
  $handler->display->display_options['fields']['field_interface_category']['id'] = 'field_interface_category';
  $handler->display->display_options['fields']['field_interface_category']['table'] = 'field_data_field_interface_category';
  $handler->display->display_options['fields']['field_interface_category']['field'] = 'field_interface_category';
  /* Field: Content: Interface Type */
  $handler->display->display_options['fields']['field_interface_type']['id'] = 'field_interface_type';
  $handler->display->display_options['fields']['field_interface_type']['table'] = 'field_data_field_interface_type';
  $handler->display->display_options['fields']['field_interface_type']['field'] = 'field_interface_type';
  /* Field: Content: Direction */
  $handler->display->display_options['fields']['field_interface_direction']['id'] = 'field_interface_direction';
  $handler->display->display_options['fields']['field_interface_direction']['table'] = 'field_data_field_interface_direction';
  $handler->display->display_options['fields']['field_interface_direction']['field'] = 'field_interface_direction';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_interface_descr']['id'] = 'field_interface_descr';
  $handler->display->display_options['fields']['field_interface_descr']['table'] = 'field_data_field_interface_descr';
  $handler->display->display_options['fields']['field_interface_descr']['field'] = 'field_interface_descr';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'interfaces_document' => 'interfaces_document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    43 => 0,
    39 => 0,
    25 => 0,
    46 => 0,
    9 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    30 => 0,
    38 => 0,
    11 => 0,
    42 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    41 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    26 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
  );
  /* Filter criterion: Content: Interface Doc Category (field_interface_category) */
  $handler->display->display_options['filters']['field_interface_category_tid']['id'] = 'field_interface_category_tid';
  $handler->display->display_options['filters']['field_interface_category_tid']['table'] = 'field_data_field_interface_category';
  $handler->display->display_options['filters']['field_interface_category_tid']['field'] = 'field_interface_category_tid';
  $handler->display->display_options['filters']['field_interface_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_interface_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_interface_category_tid']['expose']['operator_id'] = 'field_interface_category_tid_op';
  $handler->display->display_options['filters']['field_interface_category_tid']['expose']['label'] = 'Interface Doc Category';
  $handler->display->display_options['filters']['field_interface_category_tid']['expose']['operator'] = 'field_interface_category_tid_op';
  $handler->display->display_options['filters']['field_interface_category_tid']['expose']['identifier'] = 'field_interface_category_tid';
  $handler->display->display_options['filters']['field_interface_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    43 => 0,
    39 => 0,
    25 => 0,
    46 => 0,
    9 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    30 => 0,
    38 => 0,
    11 => 0,
    42 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    41 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    26 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
  );
  $handler->display->display_options['filters']['field_interface_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_interface_category_tid']['vocabulary'] = 'interface_doc_categories';
  /* Filter criterion: Content: Interface Type (field_interface_type) */
  $handler->display->display_options['filters']['field_interface_type_tid']['id'] = 'field_interface_type_tid';
  $handler->display->display_options['filters']['field_interface_type_tid']['table'] = 'field_data_field_interface_type';
  $handler->display->display_options['filters']['field_interface_type_tid']['field'] = 'field_interface_type_tid';
  $handler->display->display_options['filters']['field_interface_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_interface_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_interface_type_tid']['expose']['operator_id'] = 'field_interface_type_tid_op';
  $handler->display->display_options['filters']['field_interface_type_tid']['expose']['label'] = 'Interface Type';
  $handler->display->display_options['filters']['field_interface_type_tid']['expose']['operator'] = 'field_interface_type_tid_op';
  $handler->display->display_options['filters']['field_interface_type_tid']['expose']['identifier'] = 'field_interface_type_tid';
  $handler->display->display_options['filters']['field_interface_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    43 => 0,
    39 => 0,
    25 => 0,
    46 => 0,
    9 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    30 => 0,
    38 => 0,
    11 => 0,
    42 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    41 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    26 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
  );
  $handler->display->display_options['filters']['field_interface_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_interface_type_tid']['vocabulary'] = 'interface_types';
  /* Filter criterion: Content: Direction (field_interface_direction) */
  $handler->display->display_options['filters']['field_interface_direction_value']['id'] = 'field_interface_direction_value';
  $handler->display->display_options['filters']['field_interface_direction_value']['table'] = 'field_data_field_interface_direction';
  $handler->display->display_options['filters']['field_interface_direction_value']['field'] = 'field_interface_direction_value';
  $handler->display->display_options['filters']['field_interface_direction_value']['group'] = 1;
  $handler->display->display_options['filters']['field_interface_direction_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_interface_direction_value']['expose']['operator_id'] = 'field_interface_direction_value_op';
  $handler->display->display_options['filters']['field_interface_direction_value']['expose']['label'] = 'Direction';
  $handler->display->display_options['filters']['field_interface_direction_value']['expose']['operator'] = 'field_interface_direction_value_op';
  $handler->display->display_options['filters']['field_interface_direction_value']['expose']['identifier'] = 'field_interface_direction_value';
  $handler->display->display_options['filters']['field_interface_direction_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    43 => 0,
    39 => 0,
    25 => 0,
    46 => 0,
    9 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    30 => 0,
    38 => 0,
    11 => 0,
    42 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    41 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    26 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'interface-docs';
  $export['interface_docs'] = $view;

  return $export;
}