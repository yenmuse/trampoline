//---------------------------------------------------------------------------*
//                                                                           *
//                      File 'goil_mp_generation.cpp'                        *
//                        Generated by version 1.8.2                         *
//                       may 18th, 2009, at 16h48'18"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//---------------------------------------------------------------------------*

#include "version_libpm.h"
#if LIBPM_VERSION != 463
  #error "This file has been compiled with a version of GALGAS different than the version of libpm"
#endif

//---------------------------------------------------------------------------*

#include <typeinfo>
#include "utilities/MF_MemoryControl.h"
#include "files/C_TextFileWrite.h"
#include "goil_mp_generation.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "goil_mp_generation.ggs", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                 Implementation of routine "generate_mp"                   *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_generate_mp (C_Compiler & _inLexique,
                                GGS_task_map   var_cas_tasks,
                                GGS_isr_map   var_cas_isrs,
                                GGS_app_map   var_cas_apps,
                                GGS_string_map   var_cas_app_for_obj COMMA_UNUSED_LOCATION_ARGS) {
  #ifdef DEBUG_TRACE_ENABLED
    printf ("ENTER routine_generate_mp at %s:%d\n", __FILE__, __LINE__) ;
  #endif
  GGS_string var_cas_tpl_mp ;
  GGS_string var_cas_dec ;
  var_cas_dec = GGS_string (true, "") ;
  GGS_string var_cas_init ;
  var_cas_init = GGS_string (true, "") ;
  GGS_string var_cas_ext ;
  var_cas_ext = GGS_string (true, "") ;
  ::routine_retrieveTemplateString (_inLexique,  var_cas_tpl_mp,  GGS_string (true, "mp") COMMA_SOURCE_FILE_AT_LINE (49)) ;
  ::routine_doReplace (_inLexique,  var_cas_tpl_mp,  GGS_string (true, "$TIMESTAMP$"),  GGS_string::constructor_stringWithCurrentDateTime (_inLexique COMMA_HERE) COMMA_SOURCE_FILE_AT_LINE (50)) ;
  GGS_stringset  var_cas_known_osapp ;
  var_cas_known_osapp = GGS_stringset ::constructor_emptySet () ;
  {
    GGS_task_map::cEnumerator enumerator_1270 (var_cas_tasks, true) ;
    const GGS_task_map::cElement * operand_1270 = NULL ;
    while (((operand_1270 = enumerator_1270.nextObject ()))) {
      macroValidPointer (operand_1270) ;
      var_cas_dec.appendCstring ("VAR(tpl_mem_prot_desc, OS_VAR) ") ;
      var_cas_dec._dotAssign_operation (operand_1270->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (55))) ;
      var_cas_dec.appendCstring ("_mp_desc;\n") ;
      var_cas_ext.appendCstring ("extern void *__SEG_START_TASK_") ;
      var_cas_ext._dotAssign_operation (operand_1270->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (56))) ;
      var_cas_ext.appendCstring ("_VAR_RGN;\n") ;
      var_cas_ext.appendCstring ("extern void *__SEG_END_TASK_") ;
      var_cas_ext._dotAssign_operation (operand_1270->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (57))) ;
      var_cas_ext.appendCstring ("_VAR_RGN;\n") ;
      var_cas_ext.appendCstring ("extern void *__SEG_START_TASK_") ;
      var_cas_ext._dotAssign_operation (operand_1270->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (58))) ;
      var_cas_ext.appendCstring ("_STACK_RGN;\n") ;
      var_cas_ext.appendCstring ("extern void *__SEG_END_TASK_") ;
      var_cas_ext._dotAssign_operation (operand_1270->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (59))) ;
      var_cas_ext.appendCstring ("_STACK_RGN;\n") ;
      if ((GGS_bool (true, _inLexique.boolOptionValueFromKeys ("goil_options", "autosar_on" COMMA_SOURCE_FILE_AT_LINE (60)))).isBuiltAndTrue ()) {
        if (((var_cas_app_for_obj.reader_count (_inLexique COMMA_SOURCE_FILE_AT_LINE (61)))._operator_strictSup (GGS_uint (true, 0U))).isBuiltAndTrue ()) {
          GGS_string var_cas_app_name ;
          const GGS_string_map  _temp_1774 = var_cas_app_for_obj ;
          if (_temp_1774._isBuilt ()) {
            _temp_1774 (HERE)->method_get (_inLexique, operand_1270->mKey, var_cas_app_name COMMA_SOURCE_FILE_AT_LINE (63)) ;
          }
          if (((var_cas_known_osapp.reader_hasKey (_inLexique, var_cas_app_name COMMA_SOURCE_FILE_AT_LINE (64)))._operator_not ()).isBuiltAndTrue ()) {
            var_cas_ext.appendCstring ("extern void *__SEG_START_APP_") ;
            var_cas_ext._dotAssign_operation (var_cas_app_name) ;
            var_cas_ext.appendCstring ("_VAR_RGN;\n") ;
            var_cas_ext.appendCstring ("extern void *__SEG_END_APP_") ;
            var_cas_ext._dotAssign_operation (var_cas_app_name) ;
            var_cas_ext.appendCstring ("_VAR_RGN;\n") ;
            var_cas_known_osapp._addAssign_operation (var_cas_app_name) ;
          }
        }
      }
      var_cas_init.appendCstring ("  ") ;
      var_cas_init._dotAssign_operation (operand_1270->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (71))) ;
      var_cas_init.appendCstring ("_mp_desc.proc_var.start = __SEG_START_TASK_") ;
      var_cas_init._dotAssign_operation (operand_1270->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (71))) ;
      var_cas_init.appendCstring ("_VAR_RGN;\n") ;
      var_cas_init.appendCstring ("  ") ;
      var_cas_init._dotAssign_operation (operand_1270->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (72))) ;
      var_cas_init.appendCstring ("_mp_desc.proc_var.end = __SEG_END_TASK_") ;
      var_cas_init._dotAssign_operation (operand_1270->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (72))) ;
      var_cas_init.appendCstring ("_VAR_RGN;\n") ;
      var_cas_init.appendCstring ("  ") ;
      var_cas_init._dotAssign_operation (operand_1270->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (73))) ;
      var_cas_init.appendCstring ("_mp_desc.proc_stack.start = __SEG_START_TASK_") ;
      var_cas_init._dotAssign_operation (operand_1270->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (73))) ;
      var_cas_init.appendCstring ("_STACK_RGN;\n") ;
      var_cas_init.appendCstring ("  ") ;
      var_cas_init._dotAssign_operation (operand_1270->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (74))) ;
      var_cas_init.appendCstring ("_mp_desc.proc_stack.end = __SEG_END_TASK_") ;
      var_cas_init._dotAssign_operation (operand_1270->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (74))) ;
      var_cas_init.appendCstring ("_STACK_RGN;\n") ;
      if ((GGS_bool (true, _inLexique.boolOptionValueFromKeys ("goil_options", "autosar_on" COMMA_SOURCE_FILE_AT_LINE (75)))).isBuiltAndTrue ()) {
        if (((var_cas_app_for_obj.reader_count (_inLexique COMMA_SOURCE_FILE_AT_LINE (76)))._operator_strictSup (GGS_uint (true, 0U))).isBuiltAndTrue ()) {
          GGS_string var_cas_app_name ;
          const GGS_string_map  _temp_2626 = var_cas_app_for_obj ;
          if (_temp_2626._isBuilt ()) {
            _temp_2626 (HERE)->method_get (_inLexique, operand_1270->mKey, var_cas_app_name COMMA_SOURCE_FILE_AT_LINE (78)) ;
          }
          var_cas_init.appendCstring ("#ifdef WITH_OSAPPLICATION\n") ;
          var_cas_init.appendCstring ("  ") ;
          var_cas_init._dotAssign_operation (operand_1270->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (80))) ;
          var_cas_init.appendCstring ("_mp_desc.osap_var.start = __SEG_START_APP_") ;
          var_cas_init._dotAssign_operation (var_cas_app_name) ;
          var_cas_init.appendCstring ("_VAR_RGN;\n") ;
          var_cas_init.appendCstring ("  ") ;
          var_cas_init._dotAssign_operation (operand_1270->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (81))) ;
          var_cas_init.appendCstring ("_mp_desc.osap_var.end = __SEG_END_APP_") ;
          var_cas_init._dotAssign_operation (var_cas_app_name) ;
          var_cas_init.appendCstring ("_VAR_RGN;\n") ;
          var_cas_init.appendCstring ("#endif\n") ;
        }
      }
    }
  }
  {
    GGS_isr_map::cEnumerator enumerator_2985 (var_cas_isrs, true) ;
    const GGS_isr_map::cElement * operand_2985 = NULL ;
    while (((operand_2985 = enumerator_2985.nextObject ()))) {
      macroValidPointer (operand_2985) ;
      var_cas_dec.appendCstring ("VAR(tpl_mem_prot_desc, OS_VAR) ") ;
      var_cas_dec._dotAssign_operation (operand_2985->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (88))) ;
      var_cas_dec.appendCstring ("_mp_desc;\n") ;
      var_cas_ext.appendCstring ("extern void *__SEG_START_ISR_") ;
      var_cas_ext._dotAssign_operation (operand_2985->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (89))) ;
      var_cas_ext.appendCstring ("_VAR_RGN;\n") ;
      var_cas_ext.appendCstring ("extern void *__SEG_END_ISR_") ;
      var_cas_ext._dotAssign_operation (operand_2985->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (90))) ;
      var_cas_ext.appendCstring ("_VAR_RGN;\n") ;
      var_cas_ext.appendCstring ("extern void *__SEG_START_ISR_") ;
      var_cas_ext._dotAssign_operation (operand_2985->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (91))) ;
      var_cas_ext.appendCstring ("_STACK_RGN;\n") ;
      var_cas_ext.appendCstring ("extern void *__SEG_END_ISR_") ;
      var_cas_ext._dotAssign_operation (operand_2985->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (92))) ;
      var_cas_ext.appendCstring ("_STACK_RGN;\n") ;
      if ((GGS_bool (true, _inLexique.boolOptionValueFromKeys ("goil_options", "autosar_on" COMMA_SOURCE_FILE_AT_LINE (93)))).isBuiltAndTrue ()) {
        if (((var_cas_app_for_obj.reader_count (_inLexique COMMA_SOURCE_FILE_AT_LINE (94)))._operator_strictSup (GGS_uint (true, 0U))).isBuiltAndTrue ()) {
          GGS_string var_cas_app_name ;
          const GGS_string_map  _temp_3485 = var_cas_app_for_obj ;
          if (_temp_3485._isBuilt ()) {
            _temp_3485 (HERE)->method_get (_inLexique, operand_2985->mKey, var_cas_app_name COMMA_SOURCE_FILE_AT_LINE (96)) ;
          }
          if (((var_cas_known_osapp.reader_hasKey (_inLexique, var_cas_app_name COMMA_SOURCE_FILE_AT_LINE (97)))._operator_not ()).isBuiltAndTrue ()) {
            var_cas_ext.appendCstring ("extern void *__SEG_START_APP_") ;
            var_cas_ext._dotAssign_operation (var_cas_app_name) ;
            var_cas_ext.appendCstring ("_VAR_RGN;\n") ;
            var_cas_ext.appendCstring ("extern void *__SEG_END_APP_") ;
            var_cas_ext._dotAssign_operation (var_cas_app_name) ;
            var_cas_ext.appendCstring ("_VAR_RGN;\n") ;
            var_cas_known_osapp._addAssign_operation (var_cas_app_name) ;
          }
        }
      }
      var_cas_init.appendCstring ("  ") ;
      var_cas_init._dotAssign_operation (operand_2985->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (104))) ;
      var_cas_init.appendCstring ("_mp_desc.proc_var.start = __SEG_START_ISR_") ;
      var_cas_init._dotAssign_operation (operand_2985->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (104))) ;
      var_cas_init.appendCstring ("_VAR_RGN;\n") ;
      var_cas_init.appendCstring ("  ") ;
      var_cas_init._dotAssign_operation (operand_2985->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (105))) ;
      var_cas_init.appendCstring ("_mp_desc.proc_var.end = __SEG_END_ISR_") ;
      var_cas_init._dotAssign_operation (operand_2985->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (105))) ;
      var_cas_init.appendCstring ("_VAR_RGN;\n") ;
      var_cas_init.appendCstring ("  ") ;
      var_cas_init._dotAssign_operation (operand_2985->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (106))) ;
      var_cas_init.appendCstring ("_mp_desc.proc_stack.start = __SEG_START_ISR_") ;
      var_cas_init._dotAssign_operation (operand_2985->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (106))) ;
      var_cas_init.appendCstring ("_STACK_RGN;\n") ;
      var_cas_init.appendCstring ("  ") ;
      var_cas_init._dotAssign_operation (operand_2985->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (107))) ;
      var_cas_init.appendCstring ("_mp_desc.proc_stack.end = __SEG_END_ISR_") ;
      var_cas_init._dotAssign_operation (operand_2985->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (107))) ;
      var_cas_init.appendCstring ("_STACK_RGN;\n") ;
      if ((GGS_bool (true, _inLexique.boolOptionValueFromKeys ("goil_options", "autosar_on" COMMA_SOURCE_FILE_AT_LINE (108)))).isBuiltAndTrue ()) {
        if (((var_cas_app_for_obj.reader_count (_inLexique COMMA_SOURCE_FILE_AT_LINE (109)))._operator_strictSup (GGS_uint (true, 0U))).isBuiltAndTrue ()) {
          GGS_string var_cas_app_name ;
          const GGS_string_map  _temp_4333 = var_cas_app_for_obj ;
          if (_temp_4333._isBuilt ()) {
            _temp_4333 (HERE)->method_get (_inLexique, operand_2985->mKey, var_cas_app_name COMMA_SOURCE_FILE_AT_LINE (111)) ;
          }
          var_cas_init.appendCstring ("#ifdef WITH_OSAPPLICATION\n") ;
          var_cas_init.appendCstring ("  ") ;
          var_cas_init._dotAssign_operation (operand_2985->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (113))) ;
          var_cas_init.appendCstring ("_mp_desc.osap_var.start = __SEG_START_APP_") ;
          var_cas_init._dotAssign_operation (var_cas_app_name) ;
          var_cas_init.appendCstring ("_VAR_RGN;\n") ;
          var_cas_init.appendCstring ("  ") ;
          var_cas_init._dotAssign_operation (operand_2985->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (114))) ;
          var_cas_init.appendCstring ("_mp_desc.osap_var.end = __SEG_END_APP_") ;
          var_cas_init._dotAssign_operation (var_cas_app_name) ;
          var_cas_init.appendCstring ("_VAR_RGN;\n") ;
          var_cas_init.appendCstring ("#endif\n") ;
        }
      }
    }
  }
  GGS_tasks_by_type  var_cas_stasks ;
  var_cas_stasks = GGS_tasks_by_type ::constructor_emptySortedList () ;
  {
    GGS_task_map::cEnumerator enumerator_4789 (var_cas_tasks, true) ;
    const GGS_task_map::cElement * operand_4789 = NULL ;
    while (((operand_4789 = enumerator_4789.nextObject ()))) {
      macroValidPointer (operand_4789) ;
      if (((operand_4789->mInfo.task.reader_events (_inLexique COMMA_SOURCE_FILE_AT_LINE (123)).reader_length (_inLexique COMMA_SOURCE_FILE_AT_LINE (123)))._operator_strictSup (GGS_uint (true, 0U))).isBuiltAndTrue ()) {
        var_cas_stasks._addAssign_operation (GGS_uint (true, 0U), operand_4789->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (124))) ;
      }else{
        var_cas_stasks._addAssign_operation (GGS_uint (true, 1U), operand_4789->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (126))) ;
      }
    }
  }
  GGS_string var_cas_mp_table ;
  var_cas_mp_table = GGS_string (true, "CONSTP2VAR(tpl_mem_prot_desc, AUTOMATIC, OS_VAR) tpl_mp_table[TASK_COUNT + ISR_COUNT + 1] = {\n") ;
  {
    GGS_tasks_by_type::cEnumerator enumerator_5079 (var_cas_stasks, true) ;
    const GGS_tasks_by_type::cElement * operand_5079 = NULL ;
    while (((operand_5079 = enumerator_5079.nextObject ()))) {
      macroValidPointer (operand_5079) ;
      if ((GGS_bool (true, _inLexique.boolOptionValueFromKeys ("goil_options", "autosar_on" COMMA_SOURCE_FILE_AT_LINE (134)))).isBuiltAndTrue ()) {
        if (((var_cas_app_for_obj.reader_count (_inLexique COMMA_SOURCE_FILE_AT_LINE (135)))._operator_strictSup (GGS_uint (true, 0U))).isBuiltAndTrue ()) {
          GGS_string var_cas_app_name ;
          const GGS_string_map  _temp_5323 = var_cas_app_for_obj ;
          if (_temp_5323._isBuilt ()) {
            _temp_5323 (HERE)->method_get (_inLexique, GGS_lstring ::constructor_new (_inLexique, operand_5079->name, GGS_location (_inLexique) COMMA_HERE), var_cas_app_name COMMA_SOURCE_FILE_AT_LINE (137)) ;
          }
          GGS_app_obj  var_cas_app ;
          const GGS_app_map  _temp_5405 = var_cas_apps ;
          if (_temp_5405._isBuilt ()) {
            _temp_5405 (HERE)->method_get (_inLexique, GGS_lstring ::constructor_new (_inLexique, var_cas_app_name, GGS_location (_inLexique) COMMA_HERE), var_cas_app COMMA_SOURCE_FILE_AT_LINE (139)) ;
          }
          { const GGS_app_trusted_obj _var_5621 = var_cas_app.reader_trusted (_inLexique COMMA_SOURCE_FILE_AT_LINE (140)) ; // CAST instruction
            if (_var_5621.getPtr () != NULL) {
              macroValidPointer (_var_5621.getPtr ()) ;
              if (typeid (cPtr_app_trusted_true) == typeid (* (_var_5621.getPtr ()))) {
                var_cas_mp_table.appendCstring ("  NULL,\n") ;
              }else{
                var_cas_mp_table.appendCstring ("  &") ;
                var_cas_mp_table._dotAssign_operation (operand_5079->name) ;
                var_cas_mp_table.appendCstring ("_mp_desc,\n") ;
              }
            }
          }
        }
      }else{
        var_cas_mp_table.appendCstring ("  &") ;
        var_cas_mp_table._dotAssign_operation (operand_5079->name) ;
        var_cas_mp_table.appendCstring ("_mp_desc,\n") ;
      }
    }
  }
  {
    GGS_isr_map::cEnumerator enumerator_5742 (var_cas_isrs, true) ;
    const GGS_isr_map::cElement * operand_5742 = NULL ;
    while (((operand_5742 = enumerator_5742.nextObject ()))) {
      macroValidPointer (operand_5742) ;
      var_cas_mp_table.appendCstring ("  &") ;
      var_cas_mp_table._dotAssign_operation (operand_5742->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (154))) ;
      var_cas_mp_table.appendCstring ("_mp_desc,\n") ;
    }
  }
  var_cas_mp_table.appendCstring ("  NULL\n"
    "};") ;
  GGS_string var_cas_directory ;
  var_cas_directory = function_getProjectName (_inLexique COMMA_SOURCE_FILE_AT_LINE (158)) ;
  ::routine_doReplace (_inLexique,  var_cas_tpl_mp,  GGS_string (true, "$APPLICATION$"),  var_cas_directory COMMA_SOURCE_FILE_AT_LINE (160)) ;
  ::routine_doReplace (_inLexique,  var_cas_tpl_mp,  GGS_string (true, "$LINKER_SYM$"),  var_cas_ext COMMA_SOURCE_FILE_AT_LINE (161)) ;
  ::routine_doReplace (_inLexique,  var_cas_tpl_mp,  GGS_string (true, "$REGION_DESC$"),  var_cas_dec COMMA_SOURCE_FILE_AT_LINE (162)) ;
  ::routine_doReplace (_inLexique,  var_cas_tpl_mp,  GGS_string (true, "$INIT_CODE$"),  var_cas_init COMMA_SOURCE_FILE_AT_LINE (163)) ;
  ::routine_doReplace (_inLexique,  var_cas_tpl_mp,  GGS_string (true, "$DESC_TABLE$"),  var_cas_mp_table COMMA_SOURCE_FILE_AT_LINE (164)) ;
  if (((GGS_uint ::constructor_errorCount (_inLexique COMMA_HERE))._operator_isEqual (GGS_uint (true, 0U))).isBuiltAndTrue ()) {
    if ((GGS_bool (true, _inLexique.boolOptionValueFromKeys ("generic_galgas_cli_options", "verbose_output" COMMA_SOURCE_FILE_AT_LINE (167)))).isBuiltAndTrue ()) {
      _inLexique.printMessage (GGS_string (true, "creating tpl_generated_mp.c\n") COMMA_SOURCE_FILE_AT_LINE (168)) ;
    }
    const GGS_string _temp_6293 = var_cas_tpl_mp ;
    if (_temp_6293._isBuilt ()) {
      _temp_6293 (HERE)->method_makeDirectoryAndWriteToFile (_inLexique, (var_cas_directory)._operator_concat (GGS_string (true, "/tpl_generated_mp.c")) COMMA_SOURCE_FILE_AT_LINE (170)) ;
    }
  }
  #ifdef DEBUG_TRACE_ENABLED
    printf ("LEAVE routine_generate_mp\n") ;
  #endif
}

//---------------------------------------------------------------------------*

