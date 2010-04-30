//---------------------------------------------------------------------------*
//                                                                           *
//                          File 'goil_syntax.cpp'                           *
//                       Generated by version 1.9.11                         *
//                      april 30th, 2010, at 16h48'55"                       *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//---------------------------------------------------------------------------*

#include "version_libpm.h"
#if CURRENT_LIBPM_VERSION != 725
  #error "This file has been compiled with a version of GALGAS that uses libpm version 725, different than the current version (CURRENT_LIBPM_VERSION) of libpm"
#endif

//---------------------------------------------------------------------------*

#include <typeinfo>
#include "utilities/MF_MemoryControl.h"
#include "files/C_TextFileWrite.h"
#include "galgas/C_galgas_CLI_Options.h"
#include "goil_syntax.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "goil_syntax.gSyntax", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif

//---------------------------------------------------------------------------*
//                                                                           *
//             Include directives generated by grammar includes              *
//                                                                           *
//---------------------------------------------------------------------------*

#include "goil_cpu_level_include.h"
#include "goil_file_level_include.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                Implementation of production rule 'start'                  *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_syntax::rule_goil_5F_syntax_start_i0_ (C_Lexique_goil_5F_lexique & inLexique) {
  //--- First branch of parse/rewind instruction
    const C_parsingContext context_6325 = inLexique.parsingContext () ;
    GGS_void  var_cas_void_obj_check = GGS_void ::constructor_new (inLexique, GGS_location (inLexique) COMMA_SOURCE_FILE_AT_LINE (196)) ;
    GGS_root_obj  var_cas_cpu_check = function_void_root_obj (inLexique COMMA_SOURCE_FILE_AT_LINE (197)) ;
    GGS_bool var_cas_appli_exist = GGS_bool (false) ;
    nt_file_check_5F_appli_5F_exist (inLexique, var_cas_cpu_check, var_cas_appli_exist) ;
  //--- Branch of parse/rewind instruction
    inLexique.setParsingContext (context_6325) ;
    GGS_implementation  var_cas_imp = GGS_implementation ::constructor_emptyMap (inLexique COMMA_SOURCE_FILE_AT_LINE (203)) ;
    GGS_void  var_cas_void_obj = GGS_void ::constructor_new (inLexique, GGS_location (inLexique) COMMA_SOURCE_FILE_AT_LINE (204)) ;
    GGS_root_obj  var_cas_cpu = function_void_root_obj (inLexique COMMA_SOURCE_FILE_AT_LINE (205)) ;
    GGS_string var_cas_oilConfigFile = function_templateFilePath (inLexique, GGS_string ("config"), GGS_string ("config.oil") COMMA_SOURCE_FILE_AT_LINE (208)) ;
    const GGS_bool cond_5505 = (var_cas_oilConfigFile).operator_isNotEqual (GGS_string ("")) ;
    if (cond_5505.isBuiltAndTrue ()) {
      const GGS_string _depExtension = GGS_string ("") ;
      const GGS_string _depPath = GGS_string ("") ;
      if (_depExtension.isBuilt () && _depPath.isBuilt ()) {
        C_Grammar_goil_5F_file_5F_level_5F_include::_performSourceFileParsing_ (inLexique,
                                      _depExtension.string (),
                                      _depPath.string (),
                                      NULL,
                                      function_lstringWith (inLexique, var_cas_oilConfigFile COMMA_SOURCE_FILE_AT_LINE (210)),
                                      var_cas_imp,
                                      var_cas_cpu
                                      COMMA_SOURCE_FILE_AT_LINE (210)) ;
      }
      const GGS_bool cond_5481 = (var_cas_appli_exist).operator_isEqual (GGS_bool (true)) ;
      if (cond_5481.isBuiltAndTrue ()) {
        GGS_string var_cas_oilConfigApplicationsFile = function_templateFilePath (inLexique, GGS_string ("config"), GGS_string ("config_applications.oil") COMMA_SOURCE_FILE_AT_LINE (214)) ;
        const GGS_string _depExtension = GGS_string ("") ;
        const GGS_string _depPath = GGS_string ("") ;
        if (_depExtension.isBuilt () && _depPath.isBuilt ()) {
          C_Grammar_goil_5F_file_5F_level_5F_include::_performSourceFileParsing_ (inLexique,
                                        _depExtension.string (),
                                        _depPath.string (),
                                        NULL,
                                        function_lstringWith (inLexique, var_cas_oilConfigApplicationsFile COMMA_SOURCE_FILE_AT_LINE (215)),
                                        var_cas_imp,
                                        var_cas_cpu
                                        COMMA_SOURCE_FILE_AT_LINE (215)) ;
        }
      }
    }
    nt_file_ (inLexique, var_cas_imp, var_cas_cpu) ;
  //--- End of parse/rewind instruction
  ::routine_set_defaults (inLexique,  var_cas_imp,  var_cas_cpu COMMA_SOURCE_FILE_AT_LINE (242)) ;
  ::routine_verify_all (inLexique,  var_cas_cpu COMMA_SOURCE_FILE_AT_LINE (243)) ;
  const GGS_bool cond_6479 = (GGS_uint ::constructor_errorCount (inLexique COMMA_SOURCE_FILE_AT_LINE (246))).operator_isEqual (GGS_uint (0U)) ;
  if (cond_6479.isBuiltAndTrue ()) {
    ::routine_generate_all (inLexique,  var_cas_cpu COMMA_SOURCE_FILE_AT_LINE (247)) ;
  }
}

//---------------------------------------------------------------------------*
//                                                                           *
//                 Implementation of production rule 'file'                  *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_syntax::rule_goil_5F_syntax_file_i1_ (C_Lexique_goil_5F_lexique & inLexique,
                                GGS_implementation  &var_cas_imp,
                                GGS_root_obj  &var_cas_cpu) {
  GGS_lstring  var_cas_version = GGS_lstring ::constructor_new (inLexique, GGS_string (""), GGS_location (inLexique) COMMA_SOURCE_FILE_AT_LINE (256)) ;
  GGS_lstring  var_cas_desc = GGS_lstring ::constructor_new (inLexique, GGS_string (""), GGS_location (inLexique) COMMA_SOURCE_FILE_AT_LINE (257)) ;
  { bool syntaxRepeat_0 = true ;
    while (syntaxRepeat_0) {
      switch (select_goil_5F_syntax_0 (inLexique)) {
        case 2 : {
          nt_include_5F_file_5F_level_ (inLexique, var_cas_imp, var_cas_cpu) ;
          } break ;
        case 3 : {
          nt_OIL_5F_version_ (inLexique, var_cas_version, var_cas_desc) ;
          } break ;
        case 4 : {
          nt_implementation_5F_definition_ (inLexique, var_cas_imp) ;
          } break ;
        case 5 : {
          nt_application_5F_definition_ (inLexique, var_cas_cpu) ;
          } break ;
        default :
          syntaxRepeat_0 = false ;
          break ;
      }
    }
  }
}

//---------------------------------------------------------------------------*

void goil_syntax::rule_goil_5F_syntax_file_i1_check_5F_appli_5F_exist (C_Lexique_goil_5F_lexique & inLexique,
                                GGS_root_obj  &var_cas_cpu_check,
                                GGS_bool &var_cas_appli_exist) {
  GGS_bool var_cas_appli_exist_temp = GGS_bool (false) ;
  { bool syntaxRepeat_0 = true ;
    while (syntaxRepeat_0) {
      switch (select_goil_5F_syntax_0 (inLexique)) {
        case 2 : {
          nt_include_5F_file_5F_level_parse (inLexique) ;
          } break ;
        case 3 : {
          nt_OIL_5F_version_parse (inLexique) ;
          } break ;
        case 4 : {
          nt_implementation_5F_definition_parse (inLexique) ;
          } break ;
        case 5 : {
          nt_application_5F_definition_check_5F_appli_5F_exist (inLexique, var_cas_cpu_check, var_cas_appli_exist_temp) ;
          } break ;
        default :
          syntaxRepeat_0 = false ;
          break ;
      }
    }
  }
  var_cas_appli_exist = var_cas_appli_exist_temp ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//             Implementation of production rule 'description'               *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_syntax::rule_goil_5F_syntax_description_i2_ (C_Lexique_goil_5F_lexique & inLexique,
                                GGS_lstring  &var_cas_desc) {
  switch (select_goil_5F_syntax_1 (inLexique)) {
    case 1 : {
      var_cas_desc = GGS_lstring ::constructor_new (inLexique, GGS_string (""), GGS_location (inLexique) COMMA_SOURCE_FILE_AT_LINE (293)) ;
      } break ;
    case 2 : {
      inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3A_) COMMA_HERE) ;
      inLexique.assignFromAttribute_a_5F_string (var_cas_desc) ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) COMMA_HERE) ;
      } break ;
    default :
      break ;
  }
}

//---------------------------------------------------------------------------*

void goil_syntax::rule_goil_5F_syntax_description_i2_parse (C_Lexique_goil_5F_lexique & inLexique) {
  switch (select_goil_5F_syntax_1 (inLexique)) {
    case 1 : {
      } break ;
    case 2 : {
      inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3A_) COMMA_HERE) ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) COMMA_HERE) ;
      } break ;
    default :
      break ;
  }
  GGS_lstring::constructor_retrieveAndResetTemplateString (inLexique COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//             Implementation of production rule 'OIL_version'               *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_syntax::rule_goil_5F_syntax_OIL_5F_version_i3_ (C_Lexique_goil_5F_lexique & inLexique,
                                GGS_lstring  &var_cas_version,
                                GGS_lstring  &var_cas_desc) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_OIL_5F_VERSION) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_HERE) ;
  inLexique.assignFromAttribute_a_5F_string (var_cas_version) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) COMMA_HERE) ;
  nt_description_ (inLexique, var_cas_desc) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_HERE) ;
}

//---------------------------------------------------------------------------*

void goil_syntax::rule_goil_5F_syntax_OIL_5F_version_i3_parse (C_Lexique_goil_5F_lexique & inLexique) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_OIL_5F_VERSION) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) COMMA_HERE) ;
  nt_description_parse (inLexique) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_HERE) ;
  GGS_lstring::constructor_retrieveAndResetTemplateString (inLexique COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//        Implementation of production rule 'application_definition'         *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_syntax::rule_goil_5F_syntax_application_5F_definition_i4_ (C_Lexique_goil_5F_lexique & inLexique,
                                GGS_root_obj  &var_cas_file) {
  GGS_os_obj  var_cas_os = var_cas_file.reader_os (inLexique COMMA_SOURCE_FILE_AT_LINE (317)) ;
  GGS_com  var_cas_com = var_cas_file.reader_com (inLexique COMMA_SOURCE_FILE_AT_LINE (318)) ;
  GGS_task_map  var_cas_tasks = var_cas_file.reader_tasks (inLexique COMMA_SOURCE_FILE_AT_LINE (319)) ;
  GGS_counter_map  var_cas_counters = var_cas_file.reader_counters (inLexique COMMA_SOURCE_FILE_AT_LINE (320)) ;
  GGS_alarm_map  var_cas_alarms = var_cas_file.reader_alarms (inLexique COMMA_SOURCE_FILE_AT_LINE (321)) ;
  GGS_resource_map  var_cas_resources = var_cas_file.reader_resources (inLexique COMMA_SOURCE_FILE_AT_LINE (322)) ;
  GGS_event_map  var_cas_events = var_cas_file.reader_events (inLexique COMMA_SOURCE_FILE_AT_LINE (323)) ;
  GGS_isr_map  var_cas_isrs = var_cas_file.reader_isrs (inLexique COMMA_SOURCE_FILE_AT_LINE (324)) ;
  GGS_message_map  var_cas_messages = var_cas_file.reader_messages (inLexique COMMA_SOURCE_FILE_AT_LINE (325)) ;
  GGS_netmess_map  var_cas_net_messages = var_cas_file.reader_net_messages (inLexique COMMA_SOURCE_FILE_AT_LINE (326)) ;
  GGS_scheduletable_map  var_cas_scheduletables = var_cas_file.reader_scheduletables (inLexique COMMA_SOURCE_FILE_AT_LINE (327)) ;
  GGS_app_map  var_cas_applis = var_cas_file.reader_applis (inLexique COMMA_SOURCE_FILE_AT_LINE (328)) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_CPU) COMMA_HERE) ;
  GGS_lstring  var_cas_cpuName ;
  inLexique.assignFromAttribute_att_5F_token (var_cas_cpuName) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_HERE) ;
  nt_object_5F_definition_5F_list_ (inLexique, var_cas_os, var_cas_com, var_cas_tasks, var_cas_counters, var_cas_alarms, var_cas_resources, var_cas_events, var_cas_isrs, var_cas_messages, var_cas_net_messages, var_cas_scheduletables, var_cas_applis) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_HERE) ;
  GGS_lstring  automatic_var_8964_0 ;
  nt_description_ (inLexique, automatic_var_8964_0) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_HERE) ;
  var_cas_file = GGS_root_obj ::constructor_new (inLexique, var_cas_cpuName, var_cas_os, var_cas_com, var_cas_tasks, var_cas_counters, var_cas_alarms, var_cas_resources, var_cas_events, var_cas_isrs, var_cas_messages, var_cas_net_messages, var_cas_scheduletables, var_cas_applis COMMA_SOURCE_FILE_AT_LINE (351)) ;
}

//---------------------------------------------------------------------------*

void goil_syntax::rule_goil_5F_syntax_application_5F_definition_i4_check_5F_appli_5F_exist (C_Lexique_goil_5F_lexique & inLexique,
                                GGS_root_obj  &var_cas_file_check,
                                GGS_bool &var_cas_appli_exist) {
  GGS_os_obj  var_cas_os = var_cas_file_check.reader_os (inLexique COMMA_SOURCE_FILE_AT_LINE (371)) ;
  GGS_com  var_cas_com = var_cas_file_check.reader_com (inLexique COMMA_SOURCE_FILE_AT_LINE (372)) ;
  GGS_task_map  var_cas_tasks = var_cas_file_check.reader_tasks (inLexique COMMA_SOURCE_FILE_AT_LINE (373)) ;
  GGS_counter_map  var_cas_counters = var_cas_file_check.reader_counters (inLexique COMMA_SOURCE_FILE_AT_LINE (374)) ;
  GGS_alarm_map  var_cas_alarms = var_cas_file_check.reader_alarms (inLexique COMMA_SOURCE_FILE_AT_LINE (375)) ;
  GGS_resource_map  var_cas_resources = var_cas_file_check.reader_resources (inLexique COMMA_SOURCE_FILE_AT_LINE (376)) ;
  GGS_event_map  var_cas_events = var_cas_file_check.reader_events (inLexique COMMA_SOURCE_FILE_AT_LINE (377)) ;
  GGS_isr_map  var_cas_isrs = var_cas_file_check.reader_isrs (inLexique COMMA_SOURCE_FILE_AT_LINE (378)) ;
  GGS_message_map  var_cas_messages = var_cas_file_check.reader_messages (inLexique COMMA_SOURCE_FILE_AT_LINE (379)) ;
  GGS_netmess_map  var_cas_net_messages = var_cas_file_check.reader_net_messages (inLexique COMMA_SOURCE_FILE_AT_LINE (380)) ;
  GGS_scheduletable_map  var_cas_scheduletables = var_cas_file_check.reader_scheduletables (inLexique COMMA_SOURCE_FILE_AT_LINE (381)) ;
  GGS_app_map  var_cas_applis = var_cas_file_check.reader_applis (inLexique COMMA_SOURCE_FILE_AT_LINE (382)) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_CPU) COMMA_HERE) ;
  GGS_lstring  var_cas_cpuName ;
  inLexique.assignFromAttribute_att_5F_token (var_cas_cpuName) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_HERE) ;
  nt_object_5F_definition_5F_list_check_5F_appli_5F_exist (inLexique, var_cas_applis, var_cas_appli_exist) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_HERE) ;
  GGS_lstring  automatic_var_10227_0 ;
  nt_description_ (inLexique, automatic_var_10227_0) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_HERE) ;
  var_cas_file_check = GGS_root_obj ::constructor_new (inLexique, var_cas_cpuName, var_cas_os, var_cas_com, var_cas_tasks, var_cas_counters, var_cas_alarms, var_cas_resources, var_cas_events, var_cas_isrs, var_cas_messages, var_cas_net_messages, var_cas_scheduletables, var_cas_applis COMMA_SOURCE_FILE_AT_LINE (392)) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//        Implementation of production rule 'object_definition_list'         *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_syntax::rule_goil_5F_syntax_object_5F_definition_5F_list_i5_ (C_Lexique_goil_5F_lexique & inLexique,
                                GGS_os_obj  &var_cas_os,
                                GGS_com  &var_cas_com,
                                GGS_task_map  &var_cas_tasks,
                                GGS_counter_map  &var_cas_counters,
                                GGS_alarm_map  &var_cas_alarms,
                                GGS_resource_map  &var_cas_resources,
                                GGS_event_map  &var_cas_events,
                                GGS_isr_map  &var_cas_isrs,
                                GGS_message_map  &var_cas_messages,
                                GGS_netmess_map  &var_cas_net_messages,
                                GGS_scheduletable_map  &var_cas_scheduletables,
                                GGS_app_map  &var_cas_applis) {
  { bool syntaxRepeat_2 = true ;
    while (syntaxRepeat_2) {
      switch (select_goil_5F_syntax_2 (inLexique)) {
        case 2 : {
          nt_os_ (inLexique, var_cas_os) ;
          } break ;
        case 3 : {
          nt_appmode_ (inLexique) ;
          GGS_lstring  automatic_var_11007_0 ;
          nt_description_ (inLexique, automatic_var_11007_0) ;
          } break ;
        case 4 : {
          nt_task_ (inLexique, var_cas_tasks) ;
          } break ;
        case 5 : {
          nt_counter_ (inLexique, var_cas_counters) ;
          } break ;
        case 6 : {
          nt_alarm_ (inLexique, var_cas_alarms) ;
          GGS_lstring  automatic_var_11111_0 ;
          nt_description_ (inLexique, automatic_var_11111_0) ;
          } break ;
        case 7 : {
          nt_resource_ (inLexique, var_cas_resources) ;
          GGS_lstring  automatic_var_11163_0 ;
          nt_description_ (inLexique, automatic_var_11163_0) ;
          } break ;
        case 8 : {
          nt_event_ (inLexique, var_cas_events) ;
          GGS_lstring  automatic_var_11209_0 ;
          nt_description_ (inLexique, automatic_var_11209_0) ;
          } break ;
        case 9 : {
          nt_isr_ (inLexique, var_cas_isrs) ;
          GGS_lstring  automatic_var_11251_0 ;
          nt_description_ (inLexique, automatic_var_11251_0) ;
          } break ;
        case 10 : {
          nt_mess_ (inLexique, var_cas_messages) ;
          GGS_lstring  automatic_var_11298_0 ;
          nt_description_ (inLexique, automatic_var_11298_0) ;
          } break ;
        case 11 : {
          nt_networkmess_ (inLexique, var_cas_net_messages) ;
          GGS_lstring  automatic_var_11356_0 ;
          nt_description_ (inLexique, automatic_var_11356_0) ;
          } break ;
        case 12 : {
          nt_com_ (inLexique, var_cas_com) ;
          GGS_lstring  automatic_var_11397_0 ;
          nt_description_ (inLexique, automatic_var_11397_0) ;
          } break ;
        case 13 : {
          nt_ipdu_ (inLexique) ;
          GGS_lstring  automatic_var_11433_0 ;
          nt_description_ (inLexique, automatic_var_11433_0) ;
          } break ;
        case 14 : {
          nt_nm_ (inLexique) ;
          GGS_lstring  automatic_var_11467_0 ;
          nt_description_ (inLexique, automatic_var_11467_0) ;
          } break ;
        case 15 : {
          nt_scheduletable_ (inLexique, var_cas_scheduletables) ;
          GGS_lstring  automatic_var_11529_0 ;
          nt_description_ (inLexique, automatic_var_11529_0) ;
          } break ;
        case 16 : {
          nt_appli_ (inLexique, var_cas_applis) ;
          GGS_lstring  automatic_var_11575_0 ;
          nt_description_ (inLexique, automatic_var_11575_0) ;
          } break ;
        case 17 : {
          nt_include_5F_cpu_5F_level_ (inLexique, var_cas_os, var_cas_com, var_cas_tasks, var_cas_counters, var_cas_alarms, var_cas_resources, var_cas_events, var_cas_isrs, var_cas_messages, var_cas_net_messages, var_cas_scheduletables, var_cas_applis) ;
          } break ;
        default :
          syntaxRepeat_2 = false ;
          break ;
      }
    }
  }
}

//---------------------------------------------------------------------------*

void goil_syntax::rule_goil_5F_syntax_object_5F_definition_5F_list_i5_check_5F_appli_5F_exist (C_Lexique_goil_5F_lexique & inLexique,
                                GGS_app_map  &var_cas_applis_check,
                                GGS_bool &var_cas_appli_exist) {
  GGS_bool var_cas_appli_exist_temp = GGS_bool (false) ;
  { bool syntaxRepeat_2 = true ;
    while (syntaxRepeat_2) {
      switch (select_goil_5F_syntax_2 (inLexique)) {
        case 2 : {
          nt_os_parse (inLexique) ;
          } break ;
        case 3 : {
          nt_appmode_parse (inLexique) ;
          nt_description_parse (inLexique) ;
          } break ;
        case 4 : {
          nt_task_parse (inLexique) ;
          } break ;
        case 5 : {
          nt_counter_parse (inLexique) ;
          } break ;
        case 6 : {
          nt_alarm_parse (inLexique) ;
          nt_description_parse (inLexique) ;
          } break ;
        case 7 : {
          nt_resource_parse (inLexique) ;
          nt_description_parse (inLexique) ;
          } break ;
        case 8 : {
          nt_event_parse (inLexique) ;
          nt_description_parse (inLexique) ;
          } break ;
        case 9 : {
          nt_isr_parse (inLexique) ;
          nt_description_parse (inLexique) ;
          } break ;
        case 10 : {
          nt_mess_parse (inLexique) ;
          nt_description_parse (inLexique) ;
          } break ;
        case 11 : {
          nt_networkmess_parse (inLexique) ;
          nt_description_parse (inLexique) ;
          } break ;
        case 12 : {
          nt_com_parse (inLexique) ;
          nt_description_parse (inLexique) ;
          } break ;
        case 13 : {
          nt_ipdu_parse (inLexique) ;
          nt_description_parse (inLexique) ;
          } break ;
        case 14 : {
          nt_nm_parse (inLexique) ;
          nt_description_parse (inLexique) ;
          } break ;
        case 15 : {
          nt_scheduletable_parse (inLexique) ;
          nt_description_parse (inLexique) ;
          } break ;
        case 16 : {
          nt_appli_check_5F_appli_5F_exist (inLexique, var_cas_applis_check, var_cas_appli_exist_temp) ;
          nt_description_parse (inLexique) ;
          } break ;
        case 17 : {
          nt_include_5F_cpu_5F_level_parse (inLexique) ;
          } break ;
        default :
          syntaxRepeat_2 = false ;
          break ;
      }
    }
  }
  var_cas_appli_exist = var_cas_appli_exist_temp ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                  Implementation of production rule 'nm'                   *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_syntax::rule_goil_5F_syntax_nm_i6_ (C_Lexique_goil_5F_lexique & inLexique) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_NM) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_HERE) ;
}

//---------------------------------------------------------------------------*

void goil_syntax::rule_goil_5F_syntax_nm_i6_parse (C_Lexique_goil_5F_lexique & inLexique) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_NM) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7B_) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__7D_) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3B_) COMMA_HERE) ;
  GGS_lstring::constructor_retrieveAndResetTemplateString (inLexique COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//               Implementation of production rule 'boolean'                 *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_syntax::rule_goil_5F_syntax_boolean_i7_ (C_Lexique_goil_5F_lexique & inLexique,
                                GGS_lbool  &var_cas_val) {
  switch (select_goil_5F_syntax_3 (inLexique)) {
    case 1 : {
      inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_TRUE) COMMA_HERE) ;
      var_cas_val = GGS_lbool ::constructor_new (inLexique, GGS_bool (true), GGS_location (inLexique) COMMA_SOURCE_FILE_AT_LINE (499)) ;
      } break ;
    case 2 : {
      inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_FALSE) COMMA_HERE) ;
      var_cas_val = GGS_lbool ::constructor_new (inLexique, GGS_bool (false), GGS_location (inLexique) COMMA_SOURCE_FILE_AT_LINE (502)) ;
      } break ;
    default :
      break ;
  }
}

//---------------------------------------------------------------------------*

void goil_syntax::rule_goil_5F_syntax_boolean_i7_parse (C_Lexique_goil_5F_lexique & inLexique) {
  switch (select_goil_5F_syntax_3 (inLexique)) {
    case 1 : {
      inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_TRUE) COMMA_HERE) ;
      } break ;
    case 2 : {
      inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_FALSE) COMMA_HERE) ;
      } break ;
    default :
      break ;
  }
  GGS_lstring::constructor_retrieveAndResetTemplateString (inLexique COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//              Implementation of production rule 'free_field'               *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_syntax::rule_goil_5F_syntax_free_5F_field_i8_ (C_Lexique_goil_5F_lexique & inLexique,
                                GGS_ident_map  &var_cas_ids) {
  GGS_lstring  var_cas_idf ;
  GGS_basic_type  var_cas_val ;
  inLexique.assignFromAttribute_att_5F_token (var_cas_idf) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_HERE) ;
  switch (select_goil_5F_syntax_4 (inLexique)) {
    case 1 : {
      GGS_lstring  var_cas_value ;
      inLexique.assignFromAttribute_att_5F_token (var_cas_value) ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_HERE) ;
      var_cas_val = GGS_string_class ::constructor_new (inLexique, var_cas_value.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (514)), var_cas_value.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (514)) COMMA_SOURCE_FILE_AT_LINE (514)) ;
      } break ;
    case 2 : {
      GGS_luint64  var_cas_value ;
      inLexique.assignFromAttribute_integerNumber (var_cas_value) ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) COMMA_HERE) ;
      var_cas_val = GGS_uint64_class ::constructor_new (inLexique, var_cas_value.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (518)), var_cas_value.reader_uint64 (inLexique COMMA_SOURCE_FILE_AT_LINE (518)) COMMA_SOURCE_FILE_AT_LINE (518)) ;
      } break ;
    case 3 : {
      GGS_lbool  var_cas_value ;
      nt_boolean_ (inLexique, var_cas_value) ;
      var_cas_val = GGS_bool_class ::constructor_new (inLexique, var_cas_idf.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (522)), var_cas_value.reader_bool (inLexique COMMA_SOURCE_FILE_AT_LINE (522)) COMMA_SOURCE_FILE_AT_LINE (522)) ;
      } break ;
    default :
      break ;
  }
  var_cas_ids.modifier_put (inLexique, var_cas_idf, var_cas_val COMMA_SOURCE_FILE_AT_LINE (526)) ;
}

//---------------------------------------------------------------------------*

void goil_syntax::rule_goil_5F_syntax_free_5F_field_i8_parse (C_Lexique_goil_5F_lexique & inLexique) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken__3D_) COMMA_HERE) ;
  switch (select_goil_5F_syntax_4 (inLexique)) {
    case 1 : {
      inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_idf) COMMA_HERE) ;
      } break ;
    case 2 : {
      inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_uint_5F_number) COMMA_HERE) ;
      } break ;
    case 3 : {
      nt_boolean_parse (inLexique) ;
      } break ;
    default :
      break ;
  }
  GGS_lstring::constructor_retrieveAndResetTemplateString (inLexique COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//          Implementation of production rule 'include_file_level'           *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_syntax::rule_goil_5F_syntax_include_5F_file_5F_level_i9_ (C_Lexique_goil_5F_lexique & inLexique,
                                GGS_implementation  &var_cas_imp,
                                GGS_root_obj  &var_cas_cpu) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_include) COMMA_HERE) ;
  GGS_lstring  var_cas_file_name ;
  switch (select_goil_5F_syntax_5 (inLexique)) {
    case 1 : {
      inLexique.assignFromAttribute_a_5F_string (var_cas_file_name) ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_g_5F_string) COMMA_HERE) ;
      ::routine_file_in_path (inLexique,  var_cas_file_name COMMA_SOURCE_FILE_AT_LINE (537)) ;
      } break ;
    case 2 : {
      inLexique.assignFromAttribute_a_5F_string (var_cas_file_name) ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) COMMA_HERE) ;
      } break ;
    default :
      break ;
  }
  const GGS_string _depExtension = GGS_string ("") ;
  const GGS_string _depPath = GGS_string ("") ;
  if (_depExtension.isBuilt () && _depPath.isBuilt ()) {
    C_Grammar_goil_5F_file_5F_level_5F_include::_performSourceFileParsing_ (inLexique,
                                  _depExtension.string (),
                                  _depPath.string (),
                                  NULL,
                                  var_cas_file_name,
                                  var_cas_imp,
                                  var_cas_cpu
                                  COMMA_SOURCE_FILE_AT_LINE (541)) ;
  }
}

//---------------------------------------------------------------------------*

void goil_syntax::rule_goil_5F_syntax_include_5F_file_5F_level_i9_parse (C_Lexique_goil_5F_lexique & inLexique) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_include) COMMA_HERE) ;
  switch (select_goil_5F_syntax_5 (inLexique)) {
    case 1 : {
      inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_g_5F_string) COMMA_HERE) ;
      } break ;
    case 2 : {
      inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) COMMA_HERE) ;
      } break ;
    default :
      break ;
  }
  GGS_lstring::constructor_retrieveAndResetTemplateString (inLexique COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//          Implementation of production rule 'include_cpu_level'            *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_syntax::rule_goil_5F_syntax_include_5F_cpu_5F_level_i10_ (C_Lexique_goil_5F_lexique & inLexique,
                                GGS_os_obj  &var_cas_os,
                                GGS_com  &var_cas_com,
                                GGS_task_map  &var_cas_tasks,
                                GGS_counter_map  &var_cas_counters,
                                GGS_alarm_map  &var_cas_alarms,
                                GGS_resource_map  &var_cas_resources,
                                GGS_event_map  &var_cas_events,
                                GGS_isr_map  &var_cas_isrs,
                                GGS_message_map  &var_cas_messages,
                                GGS_netmess_map  &var_cas_net_messages,
                                GGS_scheduletable_map  &var_cas_scheduletables,
                                GGS_app_map  &var_cas_applis) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_include) COMMA_HERE) ;
  GGS_lstring  var_cas_file_name ;
  switch (select_goil_5F_syntax_6 (inLexique)) {
    case 1 : {
      inLexique.assignFromAttribute_a_5F_string (var_cas_file_name) ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_g_5F_string) COMMA_HERE) ;
      ::routine_file_in_path (inLexique,  var_cas_file_name COMMA_SOURCE_FILE_AT_LINE (565)) ;
      } break ;
    case 2 : {
      inLexique.assignFromAttribute_a_5F_string (var_cas_file_name) ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) COMMA_HERE) ;
      } break ;
    default :
      break ;
  }
  const GGS_string _depExtension = GGS_string ("") ;
  const GGS_string _depPath = GGS_string ("") ;
  if (_depExtension.isBuilt () && _depPath.isBuilt ()) {
    C_Grammar_goil_5F_cpu_5F_level_5F_include::_performSourceFileParsing_ (inLexique,
                                  _depExtension.string (),
                                  _depPath.string (),
                                  NULL,
                                  var_cas_file_name,
                                  var_cas_os,
                                  var_cas_com,
                                  var_cas_tasks,
                                  var_cas_counters,
                                  var_cas_alarms,
                                  var_cas_resources,
                                  var_cas_events,
                                  var_cas_isrs,
                                  var_cas_messages,
                                  var_cas_net_messages,
                                  var_cas_scheduletables,
                                  var_cas_applis
                                  COMMA_SOURCE_FILE_AT_LINE (569)) ;
  }
}

//---------------------------------------------------------------------------*

void goil_syntax::rule_goil_5F_syntax_include_5F_cpu_5F_level_i10_parse (C_Lexique_goil_5F_lexique & inLexique) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_include) COMMA_HERE) ;
  switch (select_goil_5F_syntax_6 (inLexique)) {
    case 1 : {
      inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_g_5F_string) COMMA_HERE) ;
      } break ;
    case 2 : {
      inLexique.acceptTerminal (ACCEPT_TERMINAL (C_Lexique_goil_5F_lexique::kToken_string) COMMA_HERE) ;
      } break ;
    default :
      break ;
  }
  GGS_lstring::constructor_retrieveAndResetTemplateString (inLexique COMMA_HERE) ;
}

//---------------------------------------------------------------------------*

