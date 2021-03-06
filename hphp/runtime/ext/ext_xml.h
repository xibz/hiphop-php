/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef incl_HPHP_EXT_XML_H_
#define incl_HPHP_EXT_XML_H_

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include "hphp/runtime/base/base_includes.h"

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

Object f_xml_parser_create(CStrRef encoding = null_string);
bool f_xml_parser_free(CObjRef parser);
int64_t f_xml_parse(CObjRef parser, CStrRef data, bool is_final = true);
int64_t f_xml_parse_into_struct(CObjRef parser, CStrRef data, VRefParam values, VRefParam index = uninit_null());
Object f_xml_parser_create_ns(CStrRef encoding = null_string, CStrRef separator = null_string);
Variant f_xml_parser_get_option(CObjRef parser, int option);
bool f_xml_parser_set_option(CObjRef parser, int option, CVarRef value);
bool f_xml_set_character_data_handler(CObjRef parser, CVarRef handler);
bool f_xml_set_default_handler(CObjRef parser, CVarRef handler);
bool f_xml_set_element_handler(CObjRef parser, CVarRef start_element_handler, CVarRef end_element_handler);
bool f_xml_set_processing_instruction_handler(CObjRef parser, CVarRef handler);
bool f_xml_set_start_namespace_decl_handler(CObjRef parser, CVarRef handler);
bool f_xml_set_end_namespace_decl_handler(CObjRef parser, CVarRef handler);
bool f_xml_set_unparsed_entity_decl_handler(CObjRef parser, CVarRef handler);
bool f_xml_set_external_entity_ref_handler(CObjRef parser, CVarRef handler);
bool f_xml_set_notation_decl_handler(CObjRef parser, CVarRef handler);
bool f_xml_set_object(CObjRef parser, VRefParam object);
int64_t f_xml_get_current_byte_index(CObjRef parser);
int64_t f_xml_get_current_column_number(CObjRef parser);
int64_t f_xml_get_current_line_number(CObjRef parser);
int64_t f_xml_get_error_code(CObjRef parser);
String f_xml_error_string(int code);
String f_utf8_decode(CStrRef data);
String f_utf8_encode(CStrRef data);

///////////////////////////////////////////////////////////////////////////////
}

#endif // incl_HPHP_EXT_XML_H_
