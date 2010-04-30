//---------------------------------------------------------------------------*
//                                                                           *
//                           File 'goil_obj_os.h'                            *
//                       Generated by version 1.9.11                         *
//                      april 30th, 2010, at 16h49'8"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef goil_obj_os_DEFINED
#define goil_obj_os_DEFINED

#include <string.h>

//---------------------------------------------------------------------------*

#include "galgas/GGS__header.h"
#include "goil_lexique.h"

//---------------------------------------------------------------------------*

// Include imported semantics
#include "goil_options.h"
#include "goil_semantics.h"
#include "goil_types_os.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                          Class Predeclarations                            *
//                                                                           *
//---------------------------------------------------------------------------*


//---------------------------------------------------------------------------*
//                                                                           *
//                   Parser class goil_obj_os declaration                    *
//                                                                           *
//---------------------------------------------------------------------------*

class goil_obj_os {
  public : virtual ~goil_obj_os (void) {}

  protected : virtual void nt_os_ (C_Lexique_goil_5F_lexique &,
                                GGS_os_obj  &) = 0 ;

  protected : virtual void nt_os_parse (C_Lexique_goil_5F_lexique &) = 0 ;

  protected : virtual void nt_description_ (C_Lexique_goil_5F_lexique &,
                                GGS_lstring  &) = 0 ;

  protected : virtual void nt_description_parse (C_Lexique_goil_5F_lexique &) = 0 ;

  protected : virtual void nt_free_5F_field_ (C_Lexique_goil_5F_lexique &,
                                GGS_ident_map  &) = 0 ;

  protected : virtual void nt_free_5F_field_parse (C_Lexique_goil_5F_lexique &) = 0 ;

  protected : virtual void nt_boolean_ (C_Lexique_goil_5F_lexique &,
                                GGS_lbool  &) = 0 ;

  protected : virtual void nt_boolean_parse (C_Lexique_goil_5F_lexique &) = 0 ;

  protected : void rule_goil_5F_obj_5F_os_os_i0_ (C_Lexique_goil_5F_lexique &,
                                GGS_os_obj  &) ;

  protected : virtual PMSInt16 select_goil_5F_obj_5F_os_0 (C_Lexique_goil_5F_lexique &) = 0 ;

  protected : virtual PMSInt16 select_goil_5F_obj_5F_os_1 (C_Lexique_goil_5F_lexique &) = 0 ;

  protected : virtual PMSInt16 select_goil_5F_obj_5F_os_2 (C_Lexique_goil_5F_lexique &) = 0 ;

  protected : virtual PMSInt16 select_goil_5F_obj_5F_os_3 (C_Lexique_goil_5F_lexique &) = 0 ;

  protected : virtual PMSInt16 select_goil_5F_obj_5F_os_4 (C_Lexique_goil_5F_lexique &) = 0 ;

  protected : virtual PMSInt16 select_goil_5F_obj_5F_os_5 (C_Lexique_goil_5F_lexique &) = 0 ;

  protected : virtual PMSInt16 select_goil_5F_obj_5F_os_6 (C_Lexique_goil_5F_lexique &) = 0 ;

  protected : virtual PMSInt16 select_goil_5F_obj_5F_os_7 (C_Lexique_goil_5F_lexique &) = 0 ;

  protected : virtual PMSInt16 select_goil_5F_obj_5F_os_8 (C_Lexique_goil_5F_lexique &) = 0 ;

  protected : void rule_goil_5F_obj_5F_os_os_i0_parse (C_Lexique_goil_5F_lexique & inLexique) ;

} ;

//---------------------------------------------------------------------------*

#endif
