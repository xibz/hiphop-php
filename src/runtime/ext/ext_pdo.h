/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
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

#ifndef __EXT_PDO_H__
#define __EXT_PDO_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/base/base_includes.h>
#include <runtime/ext/pdo_driver.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

Array f_pdo_drivers();
extern const int64 q_pdo_PARAM_BOOL;
extern const int64 q_pdo_PARAM_NULL;
extern const int64 q_pdo_PARAM_INT;
extern const int64 q_pdo_PARAM_STR;
extern const int64 q_pdo_PARAM_LOB;
extern const int64 q_pdo_PARAM_STMT;
extern const int64 q_pdo_PARAM_INPUT_OUTPUT;
extern const int64 q_pdo_PARAM_EVT_ALLOC;
extern const int64 q_pdo_PARAM_EVT_FREE;
extern const int64 q_pdo_PARAM_EVT_EXEC_PRE;
extern const int64 q_pdo_PARAM_EVT_EXEC_POST;
extern const int64 q_pdo_PARAM_EVT_FETCH_PRE;
extern const int64 q_pdo_PARAM_EVT_FETCH_POST;
extern const int64 q_pdo_PARAM_EVT_NORMALIZE;
extern const int64 q_pdo_FETCH_USE_DEFAULT;
extern const int64 q_pdo_FETCH_LAZY;
extern const int64 q_pdo_FETCH_ASSOC;
extern const int64 q_pdo_FETCH_NUM;
extern const int64 q_pdo_FETCH_BOTH;
extern const int64 q_pdo_FETCH_OBJ;
extern const int64 q_pdo_FETCH_BOUND;
extern const int64 q_pdo_FETCH_COLUMN;
extern const int64 q_pdo_FETCH_CLASS;
extern const int64 q_pdo_FETCH_INTO;
extern const int64 q_pdo_FETCH_FUNC;
extern const int64 q_pdo_FETCH_GROUP;
extern const int64 q_pdo_FETCH_UNIQUE;
extern const int64 q_pdo_FETCH_KEY_PAIR;
extern const int64 q_pdo_FETCH_CLASSTYPE;
extern const int64 q_pdo_FETCH_SERIALIZE;
extern const int64 q_pdo_FETCH_PROPS_LATE;
extern const int64 q_pdo_FETCH_NAMED;
extern const int64 q_pdo_ATTR_AUTOCOMMIT;
extern const int64 q_pdo_ATTR_PREFETCH;
extern const int64 q_pdo_ATTR_TIMEOUT;
extern const int64 q_pdo_ATTR_ERRMODE;
extern const int64 q_pdo_ATTR_SERVER_VERSION;
extern const int64 q_pdo_ATTR_CLIENT_VERSION;
extern const int64 q_pdo_ATTR_SERVER_INFO;
extern const int64 q_pdo_ATTR_CONNECTION_STATUS;
extern const int64 q_pdo_ATTR_CASE;
extern const int64 q_pdo_ATTR_CURSOR_NAME;
extern const int64 q_pdo_ATTR_CURSOR;
extern const int64 q_pdo_ATTR_ORACLE_NULLS;
extern const int64 q_pdo_ATTR_PERSISTENT;
extern const int64 q_pdo_ATTR_STATEMENT_CLASS;
extern const int64 q_pdo_ATTR_FETCH_TABLE_NAMES;
extern const int64 q_pdo_ATTR_FETCH_CATALOG_NAMES;
extern const int64 q_pdo_ATTR_DRIVER_NAME;
extern const int64 q_pdo_ATTR_STRINGIFY_FETCHES;
extern const int64 q_pdo_ATTR_MAX_COLUMN_LEN;
extern const int64 q_pdo_ATTR_EMULATE_PREPARES;
extern const int64 q_pdo_ATTR_DEFAULT_FETCH_MODE;
extern const int64 q_pdo_ERRMODE_SILENT;
extern const int64 q_pdo_ERRMODE_WARNING;
extern const int64 q_pdo_ERRMODE_EXCEPTION;
extern const int64 q_pdo_CASE_NATURAL;
extern const int64 q_pdo_CASE_LOWER;
extern const int64 q_pdo_CASE_UPPER;
extern const int64 q_pdo_NULL_NATURAL;
extern const int64 q_pdo_NULL_EMPTY_STRING;
extern const int64 q_pdo_NULL_TO_STRING;
extern const StaticString q_pdo_ERR_NONE;
extern const int64 q_pdo_FETCH_ORI_NEXT;
extern const int64 q_pdo_FETCH_ORI_PRIOR;
extern const int64 q_pdo_FETCH_ORI_FIRST;
extern const int64 q_pdo_FETCH_ORI_LAST;
extern const int64 q_pdo_FETCH_ORI_ABS;
extern const int64 q_pdo_FETCH_ORI_REL;
extern const int64 q_pdo_CURSOR_FWDONLY;
extern const int64 q_pdo_CURSOR_SCROLL;
extern const int64 q_pdo_MYSQL_ATTR_USE_BUFFERED_QUERY;
extern const int64 q_pdo_MYSQL_ATTR_LOCAL_INFILE;
extern const int64 q_pdo_MYSQL_ATTR_MAX_BUFFER_SIZE;
extern const int64 q_pdo_MYSQL_ATTR_INIT_COMMAND;
extern const int64 q_pdo_MYSQL_ATTR_READ_DEFAULT_FILE;
extern const int64 q_pdo_MYSQL_ATTR_READ_DEFAULT_GROUP;
extern const int64 q_pdo_MYSQL_ATTR_COMPRESS;
extern const int64 q_pdo_MYSQL_ATTR_DIRECT_QUERY;
extern const int64 q_pdo_MYSQL_ATTR_FOUND_ROWS;
extern const int64 q_pdo_MYSQL_ATTR_IGNORE_SPACE;

///////////////////////////////////////////////////////////////////////////////
// class PDO

FORWARD_DECLARE_CLASS(pdo);
class c_pdo : public ExtObjectData, public Sweepable {
 public:
  BEGIN_CLASS_MAP(pdo)
  END_CLASS_MAP(pdo)
  DECLARE_CLASS(pdo, PDO, ObjectData)
  DECLARE_INVOKES_FROM_EVAL
  ObjectData* dynCreate(CArrRef params, bool init = true);

  // need to implement
  public: c_pdo();
  public: ~c_pdo();
  public: void t___construct(CStrRef dsn, CStrRef username = null_string, CStrRef password = null_string, CArrRef options = null_array);
  public: Variant t_prepare(CStrRef statement, CArrRef options = null_array);
  public: bool t_begintransaction();
  public: bool t_commit();
  public: bool t_rollback();
  public: bool t_setattribute(int64 attribute, CVarRef value);
  public: Variant t_getattribute(int64 attribute);
  public: Variant t_exec(CStrRef query);
  public: Variant t_lastinsertid(CStrRef seqname = null_string);
  public: Variant t_errorcode();
  public: Array t_errorinfo();
  public: Variant t_query(CStrRef sql);
  public: Variant t_quote(CStrRef str, int64 paramtype = q_pdo_PARAM_STR);
  public: Variant t___wakeup();
  public: Variant t___sleep();
  public: static Array ti_getavailabledrivers(const char* cls );
  public: static Array t_getavailabledrivers() {
    return ti_getavailabledrivers("pdo");
  }
  public: Variant t___destruct();

  // implemented by HPHP
  public: c_pdo *create(String dsn, String username = null_string, String password = null_string, Array options = null_array);
  public: void dynConstruct(CArrRef Params);
  public: void dynConstructFromEval(Eval::VariableEnvironment &env,
                                    const Eval::FunctionCallExpression *call);
  public: virtual void destruct();

  public: sp_PDOConnection m_dbh;
};

///////////////////////////////////////////////////////////////////////////////
// class PDOStatement

FORWARD_DECLARE_CLASS(pdostatement);
class c_pdostatement : public ExtObjectData, public Sweepable {
 public:
  BEGIN_CLASS_MAP(pdostatement)
  END_CLASS_MAP(pdostatement)
  DECLARE_CLASS(pdostatement, PDOStatement, ObjectData)
  DECLARE_INVOKES_FROM_EVAL
  ObjectData* dynCreate(CArrRef params, bool init = true);

  // need to implement
  public: c_pdostatement();
  public: ~c_pdostatement();
  public: void t___construct();
  public: Variant t_execute(CArrRef params = null_array);
  public: Variant t_fetch(int64 how = q_pdo_FETCH_BOTH, int64 orientation = q_pdo_FETCH_ORI_NEXT, int64 offset = 0);
  public: Variant t_fetchobject(CStrRef class_name = null_string, CVarRef ctor_args = null);
  public: Variant t_fetchcolumn(int64 column_numner = 0);
  public: Variant t_fetchall(int64 how = q_pdo_FETCH_BOTH, CVarRef class_name = null, CVarRef ctor_args = null);
  public: bool t_bindvalue(CVarRef paramno, CVarRef param, int64 type = q_pdo_PARAM_STR);
  public: bool t_bindparam(CVarRef paramno, Variant param, int64 type = q_pdo_PARAM_STR, int64 max_value_len = 0, CVarRef driver_params = null);
  public: bool t_bindcolumn(CVarRef paramno, Variant param, int64 type = q_pdo_PARAM_STR, int64 max_value_len = 0, CVarRef driver_params = null);
  public: int64 t_rowcount();
  public: Variant t_errorcode();
  public: Array t_errorinfo();
  public: Variant t_setattribute(int64 attribute, CVarRef value);
  public: Variant t_getattribute(int64 attribute);
  public: int64 t_columncount();
  public: Variant t_getcolumnmeta(int64 column);
  public: bool t_setfetchmode(int _argc, int64 mode, CArrRef _argv = null_array);
  public: bool t_nextrowset();
  public: bool t_closecursor();
  public: Variant t_debugdumpparams();
  public: Variant t___wakeup();
  public: Variant t___sleep();
  public: Variant t___destruct();

  // implemented by HPHP
  public: c_pdostatement *create();
  public: void dynConstruct(CArrRef Params);
  public: void dynConstructFromEval(Eval::VariableEnvironment &env,
                                    const Eval::FunctionCallExpression *call);
  public: virtual void destruct();

  public: sp_PDOStatement m_stmt;
};

///////////////////////////////////////////////////////////////////////////////
// class PDOException

FORWARD_DECLARE_CLASS(pdoexception);
class c_pdoexception : public c_exception {
 public:
  BEGIN_CLASS_MAP(pdoexception)
  RECURSIVE_PARENT_CLASS(exception)
  END_CLASS_MAP(pdoexception)
  DECLARE_CLASS(pdoexception, PDOException, exception)
  DECLARE_INVOKES_FROM_EVAL
  ObjectData* dynCreate(CArrRef params, bool init = true);

  // need to implement
  public: c_pdoexception();
  public: ~c_pdoexception();
  public: void t___construct();
  public: Variant t___destruct();

  // implemented by HPHP
  public: c_pdoexception *create();
  public: void dynConstruct(CArrRef Params);
  public: void dynConstructFromEval(Eval::VariableEnvironment &env,
                                    const Eval::FunctionCallExpression *call);
  public: virtual void destruct();

};

///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXT_PDO_H__
