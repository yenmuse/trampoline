//---------------------------------------------------------------------------*
//                                                                           *
//                        File 'goil_types_action.h'                         *
//                       Generated by version 1.9.11                         *
//                      april 30th, 2010, at 16h49'5"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef goil_types_action_DEFINED
#define goil_types_action_DEFINED

#include <string.h>

//---------------------------------------------------------------------------*

#include "galgas/GGS__header.h"

//---------------------------------------------------------------------------*

// Include imported semantics
#include "goil_basic_types.h"
#include "goil_routines.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                          Class Predeclarations                            *
//                                                                           *
//---------------------------------------------------------------------------*

class GGS_action_obj ;
class cPtr_action_obj ;
class GGS_void_action ;
class cPtr_void_action ;
class GGS_setevent_action ;
class cPtr_setevent_action ;
class GGS_activatetask_action ;
class cPtr_activatetask_action ;
class GGS_callback_action ;
class cPtr_callback_action ;
class GGS_flag_action ;
class cPtr_flag_action ;
class GGS_incrementcounter_action ;
class cPtr_incrementcounter_action ;
class GGS_finalize_st_action ;
class cPtr_finalize_st_action ;

//---------------------------------------------------------------------------*
//                                                                           *
//                      GALGAS class 'GGS_action_obj'                        *
//                                                                           *
//---------------------------------------------------------------------------*

extern const C_galgas_type_descriptorEX kTypeDescriptor_GGS_action_obj ;

//---------------------------------------------------------------------------*

class GGS_action_obj : public AC_GGS_class {
//--- Default constructor
  public : inline GGS_action_obj (void) :
  AC_GGS_class () {}

//--- Pointer assignment constructor
  public : GGS_action_obj (const cPtr__AC_galgas_class * inPointer) ;

//--- Object assignment constructor
  public : GGS_action_obj (cPtr__AC_galgas_class & inObject) ;

//--- castFrom class method (implements cast expression)
  public : static GGS_action_obj
  castFrom (C_Compiler & inLexique,
             cPtr__AC_galgas_class * inPointer,
             const bool inUseKindOfClass,
             const GGS_location & inErrorLocation
             COMMA_LOCATION_ARGS) ;

//--- getPtr
  public : inline cPtr_action_obj * getPtr (void) const {
    return (cPtr_action_obj *) mPointer ;
  }

//--- 'description' reader
  public : virtual const char * actualTypeName (void) const ;

//--- Readers
  public : GGS_location  reader_location (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;

//--- Modifiers

//--- operator ()
  #ifndef DO_NOT_GENERATE_CHECKINGS
    public : cPtr_action_obj * operator () (LOCATION_ARGS) const ;
  #else
    public : inline cPtr_action_obj * operator () (LOCATION_ARGS) const {
      return (cPtr_action_obj *) mPointer ;
    }
  #endif

//--- Galgas RTTI
AC_galgasClassRunTimeInformationEX * galgasObjectRunTimeInfo (void) const ;

//--- Introspection
  public : virtual const C_galgas_type_descriptorEX * typeDescriptor (void) const ;

  public : GGS_object reader_object (void) const ;

  public : static GGS_action_obj castFromObject (C_Compiler & inLexique,
                                           const GGS_object & inObject,
                                           const GGS_location & inErrorLocation
                                           COMMA_LOCATION_ARGS) ;

} ;

//---------------------------------------------------------------------------*

extern C_galgasRootClassRunTimeInformationEX gClassInfoFor__action_obj ;

//---------------------------------------------------------------------------*
//                                                                           *
//                      GALGAS class 'GGS_void_action'                       *
//                                                                           *
//---------------------------------------------------------------------------*

extern const C_galgas_type_descriptorEX kTypeDescriptor_GGS_void_action ;

//---------------------------------------------------------------------------*

class GGS_void_action : public GGS_action_obj {
//--- Default constructor
  public : inline GGS_void_action (void) :
  GGS_action_obj () {}

//--- Pointer assignment constructor
  public : GGS_void_action (const cPtr__AC_galgas_class * inPointer) ;

//--- Object assignment constructor
  public : GGS_void_action (cPtr__AC_galgas_class & inObject) ;

//--- castFrom class method (implements cast expression)
  public : static GGS_void_action
  castFrom (C_Compiler & inLexique,
             cPtr__AC_galgas_class * inPointer,
             const bool inUseKindOfClass,
             const GGS_location & inErrorLocation
             COMMA_LOCATION_ARGS) ;

//--- 'new' constructor
  public : static GGS_void_action constructor_new (C_Compiler & inLexique,
                                const GGS_location & argument_0
                                COMMA_LOCATION_ARGS) ;

//--- getPtr
  public : inline cPtr_void_action * getPtr (void) const {
    return (cPtr_void_action *) mPointer ;
  }

//--- 'description' reader
  public : virtual const char * actualTypeName (void) const ;

//--- Readers

//--- Modifiers

//--- operator ()
  #ifndef DO_NOT_GENERATE_CHECKINGS
    public : cPtr_void_action * operator () (LOCATION_ARGS) const ;
  #else
    public : inline cPtr_void_action * operator () (LOCATION_ARGS) const {
      return (cPtr_void_action *) mPointer ;
    }
  #endif

//--- Introspection
  public : virtual const C_galgas_type_descriptorEX * typeDescriptor (void) const ;

  public : GGS_object reader_object (void) const ;

  public : static GGS_void_action castFromObject (C_Compiler & inLexique,
                                           const GGS_object & inObject,
                                           const GGS_location & inErrorLocation
                                           COMMA_LOCATION_ARGS) ;

} ;

//---------------------------------------------------------------------------*

extern C_galgasClassRunTimeInformationEX gClassInfoFor__void_action ;

//---------------------------------------------------------------------------*
//                                                                           *
//                    GALGAS class 'GGS_setevent_action'                     *
//                                                                           *
//---------------------------------------------------------------------------*

extern const C_galgas_type_descriptorEX kTypeDescriptor_GGS_setevent_action ;

//---------------------------------------------------------------------------*

class GGS_setevent_action : public GGS_action_obj {
//--- Default constructor
  public : inline GGS_setevent_action (void) :
  GGS_action_obj () {}

//--- Pointer assignment constructor
  public : GGS_setevent_action (const cPtr__AC_galgas_class * inPointer) ;

//--- Object assignment constructor
  public : GGS_setevent_action (cPtr__AC_galgas_class & inObject) ;

//--- castFrom class method (implements cast expression)
  public : static GGS_setevent_action
  castFrom (C_Compiler & inLexique,
             cPtr__AC_galgas_class * inPointer,
             const bool inUseKindOfClass,
             const GGS_location & inErrorLocation
             COMMA_LOCATION_ARGS) ;

//--- 'new' constructor
  public : static GGS_setevent_action constructor_new (C_Compiler & inLexique,
                                const GGS_location & argument_0,
                                const GGS_lstring & argument_1,
                                const GGS_lstring & argument_2
                                COMMA_LOCATION_ARGS) ;

//--- getPtr
  public : inline cPtr_setevent_action * getPtr (void) const {
    return (cPtr_setevent_action *) mPointer ;
  }

//--- 'description' reader
  public : virtual const char * actualTypeName (void) const ;

//--- Readers
  public : GGS_lstring  reader_task_name (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_lstring  reader_event_name (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;

//--- Modifiers

//--- operator ()
  #ifndef DO_NOT_GENERATE_CHECKINGS
    public : cPtr_setevent_action * operator () (LOCATION_ARGS) const ;
  #else
    public : inline cPtr_setevent_action * operator () (LOCATION_ARGS) const {
      return (cPtr_setevent_action *) mPointer ;
    }
  #endif

//--- Introspection
  public : virtual const C_galgas_type_descriptorEX * typeDescriptor (void) const ;

  public : GGS_object reader_object (void) const ;

  public : static GGS_setevent_action castFromObject (C_Compiler & inLexique,
                                           const GGS_object & inObject,
                                           const GGS_location & inErrorLocation
                                           COMMA_LOCATION_ARGS) ;

} ;

//---------------------------------------------------------------------------*

extern C_galgasClassRunTimeInformationEX gClassInfoFor__setevent_action ;

//---------------------------------------------------------------------------*
//                                                                           *
//                  GALGAS class 'GGS_activatetask_action'                   *
//                                                                           *
//---------------------------------------------------------------------------*

extern const C_galgas_type_descriptorEX kTypeDescriptor_GGS_activatetask_action ;

//---------------------------------------------------------------------------*

class GGS_activatetask_action : public GGS_action_obj {
//--- Default constructor
  public : inline GGS_activatetask_action (void) :
  GGS_action_obj () {}

//--- Pointer assignment constructor
  public : GGS_activatetask_action (const cPtr__AC_galgas_class * inPointer) ;

//--- Object assignment constructor
  public : GGS_activatetask_action (cPtr__AC_galgas_class & inObject) ;

//--- castFrom class method (implements cast expression)
  public : static GGS_activatetask_action
  castFrom (C_Compiler & inLexique,
             cPtr__AC_galgas_class * inPointer,
             const bool inUseKindOfClass,
             const GGS_location & inErrorLocation
             COMMA_LOCATION_ARGS) ;

//--- 'new' constructor
  public : static GGS_activatetask_action constructor_new (C_Compiler & inLexique,
                                const GGS_location & argument_0,
                                const GGS_lstring & argument_1
                                COMMA_LOCATION_ARGS) ;

//--- getPtr
  public : inline cPtr_activatetask_action * getPtr (void) const {
    return (cPtr_activatetask_action *) mPointer ;
  }

//--- 'description' reader
  public : virtual const char * actualTypeName (void) const ;

//--- Readers
  public : GGS_lstring  reader_task_name (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;

//--- Modifiers

//--- operator ()
  #ifndef DO_NOT_GENERATE_CHECKINGS
    public : cPtr_activatetask_action * operator () (LOCATION_ARGS) const ;
  #else
    public : inline cPtr_activatetask_action * operator () (LOCATION_ARGS) const {
      return (cPtr_activatetask_action *) mPointer ;
    }
  #endif

//--- Introspection
  public : virtual const C_galgas_type_descriptorEX * typeDescriptor (void) const ;

  public : GGS_object reader_object (void) const ;

  public : static GGS_activatetask_action castFromObject (C_Compiler & inLexique,
                                           const GGS_object & inObject,
                                           const GGS_location & inErrorLocation
                                           COMMA_LOCATION_ARGS) ;

} ;

//---------------------------------------------------------------------------*

extern C_galgasClassRunTimeInformationEX gClassInfoFor__activatetask_action ;

//---------------------------------------------------------------------------*
//                                                                           *
//                    GALGAS class 'GGS_callback_action'                     *
//                                                                           *
//---------------------------------------------------------------------------*

extern const C_galgas_type_descriptorEX kTypeDescriptor_GGS_callback_action ;

//---------------------------------------------------------------------------*

class GGS_callback_action : public GGS_action_obj {
//--- Default constructor
  public : inline GGS_callback_action (void) :
  GGS_action_obj () {}

//--- Pointer assignment constructor
  public : GGS_callback_action (const cPtr__AC_galgas_class * inPointer) ;

//--- Object assignment constructor
  public : GGS_callback_action (cPtr__AC_galgas_class & inObject) ;

//--- castFrom class method (implements cast expression)
  public : static GGS_callback_action
  castFrom (C_Compiler & inLexique,
             cPtr__AC_galgas_class * inPointer,
             const bool inUseKindOfClass,
             const GGS_location & inErrorLocation
             COMMA_LOCATION_ARGS) ;

//--- 'new' constructor
  public : static GGS_callback_action constructor_new (C_Compiler & inLexique,
                                const GGS_location & argument_0,
                                const GGS_lstring & argument_1
                                COMMA_LOCATION_ARGS) ;

//--- getPtr
  public : inline cPtr_callback_action * getPtr (void) const {
    return (cPtr_callback_action *) mPointer ;
  }

//--- 'description' reader
  public : virtual const char * actualTypeName (void) const ;

//--- Readers
  public : GGS_lstring  reader_function_name (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;

//--- Modifiers

//--- operator ()
  #ifndef DO_NOT_GENERATE_CHECKINGS
    public : cPtr_callback_action * operator () (LOCATION_ARGS) const ;
  #else
    public : inline cPtr_callback_action * operator () (LOCATION_ARGS) const {
      return (cPtr_callback_action *) mPointer ;
    }
  #endif

//--- Introspection
  public : virtual const C_galgas_type_descriptorEX * typeDescriptor (void) const ;

  public : GGS_object reader_object (void) const ;

  public : static GGS_callback_action castFromObject (C_Compiler & inLexique,
                                           const GGS_object & inObject,
                                           const GGS_location & inErrorLocation
                                           COMMA_LOCATION_ARGS) ;

} ;

//---------------------------------------------------------------------------*

extern C_galgasClassRunTimeInformationEX gClassInfoFor__callback_action ;

//---------------------------------------------------------------------------*
//                                                                           *
//                      GALGAS class 'GGS_flag_action'                       *
//                                                                           *
//---------------------------------------------------------------------------*

extern const C_galgas_type_descriptorEX kTypeDescriptor_GGS_flag_action ;

//---------------------------------------------------------------------------*

class GGS_flag_action : public GGS_action_obj {
//--- Default constructor
  public : inline GGS_flag_action (void) :
  GGS_action_obj () {}

//--- Pointer assignment constructor
  public : GGS_flag_action (const cPtr__AC_galgas_class * inPointer) ;

//--- Object assignment constructor
  public : GGS_flag_action (cPtr__AC_galgas_class & inObject) ;

//--- castFrom class method (implements cast expression)
  public : static GGS_flag_action
  castFrom (C_Compiler & inLexique,
             cPtr__AC_galgas_class * inPointer,
             const bool inUseKindOfClass,
             const GGS_location & inErrorLocation
             COMMA_LOCATION_ARGS) ;

//--- 'new' constructor
  public : static GGS_flag_action constructor_new (C_Compiler & inLexique,
                                const GGS_location & argument_0,
                                const GGS_lstring & argument_1
                                COMMA_LOCATION_ARGS) ;

//--- getPtr
  public : inline cPtr_flag_action * getPtr (void) const {
    return (cPtr_flag_action *) mPointer ;
  }

//--- 'description' reader
  public : virtual const char * actualTypeName (void) const ;

//--- Readers
  public : GGS_lstring  reader_flag_name (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;

//--- Modifiers

//--- operator ()
  #ifndef DO_NOT_GENERATE_CHECKINGS
    public : cPtr_flag_action * operator () (LOCATION_ARGS) const ;
  #else
    public : inline cPtr_flag_action * operator () (LOCATION_ARGS) const {
      return (cPtr_flag_action *) mPointer ;
    }
  #endif

//--- Introspection
  public : virtual const C_galgas_type_descriptorEX * typeDescriptor (void) const ;

  public : GGS_object reader_object (void) const ;

  public : static GGS_flag_action castFromObject (C_Compiler & inLexique,
                                           const GGS_object & inObject,
                                           const GGS_location & inErrorLocation
                                           COMMA_LOCATION_ARGS) ;

} ;

//---------------------------------------------------------------------------*

extern C_galgasClassRunTimeInformationEX gClassInfoFor__flag_action ;

//---------------------------------------------------------------------------*
//                                                                           *
//                GALGAS class 'GGS_incrementcounter_action'                 *
//                                                                           *
//---------------------------------------------------------------------------*

extern const C_galgas_type_descriptorEX kTypeDescriptor_GGS_incrementcounter_action ;

//---------------------------------------------------------------------------*

class GGS_incrementcounter_action : public GGS_action_obj {
//--- Default constructor
  public : inline GGS_incrementcounter_action (void) :
  GGS_action_obj () {}

//--- Pointer assignment constructor
  public : GGS_incrementcounter_action (const cPtr__AC_galgas_class * inPointer) ;

//--- Object assignment constructor
  public : GGS_incrementcounter_action (cPtr__AC_galgas_class & inObject) ;

//--- castFrom class method (implements cast expression)
  public : static GGS_incrementcounter_action
  castFrom (C_Compiler & inLexique,
             cPtr__AC_galgas_class * inPointer,
             const bool inUseKindOfClass,
             const GGS_location & inErrorLocation
             COMMA_LOCATION_ARGS) ;

//--- 'new' constructor
  public : static GGS_incrementcounter_action constructor_new (C_Compiler & inLexique,
                                const GGS_location & argument_0,
                                const GGS_lstring & argument_1
                                COMMA_LOCATION_ARGS) ;

//--- getPtr
  public : inline cPtr_incrementcounter_action * getPtr (void) const {
    return (cPtr_incrementcounter_action *) mPointer ;
  }

//--- 'description' reader
  public : virtual const char * actualTypeName (void) const ;

//--- Readers
  public : GGS_lstring  reader_counter_name (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;

//--- Modifiers

//--- operator ()
  #ifndef DO_NOT_GENERATE_CHECKINGS
    public : cPtr_incrementcounter_action * operator () (LOCATION_ARGS) const ;
  #else
    public : inline cPtr_incrementcounter_action * operator () (LOCATION_ARGS) const {
      return (cPtr_incrementcounter_action *) mPointer ;
    }
  #endif

//--- Introspection
  public : virtual const C_galgas_type_descriptorEX * typeDescriptor (void) const ;

  public : GGS_object reader_object (void) const ;

  public : static GGS_incrementcounter_action castFromObject (C_Compiler & inLexique,
                                           const GGS_object & inObject,
                                           const GGS_location & inErrorLocation
                                           COMMA_LOCATION_ARGS) ;

} ;

//---------------------------------------------------------------------------*

extern C_galgasClassRunTimeInformationEX gClassInfoFor__incrementcounter_action ;

//---------------------------------------------------------------------------*
//                                                                           *
//                  GALGAS class 'GGS_finalize_st_action'                    *
//                                                                           *
//---------------------------------------------------------------------------*

extern const C_galgas_type_descriptorEX kTypeDescriptor_GGS_finalize_st_action ;

//---------------------------------------------------------------------------*

class GGS_finalize_st_action : public GGS_action_obj {
//--- Default constructor
  public : inline GGS_finalize_st_action (void) :
  GGS_action_obj () {}

//--- Pointer assignment constructor
  public : GGS_finalize_st_action (const cPtr__AC_galgas_class * inPointer) ;

//--- Object assignment constructor
  public : GGS_finalize_st_action (cPtr__AC_galgas_class & inObject) ;

//--- castFrom class method (implements cast expression)
  public : static GGS_finalize_st_action
  castFrom (C_Compiler & inLexique,
             cPtr__AC_galgas_class * inPointer,
             const bool inUseKindOfClass,
             const GGS_location & inErrorLocation
             COMMA_LOCATION_ARGS) ;

//--- 'new' constructor
  public : static GGS_finalize_st_action constructor_new (C_Compiler & inLexique,
                                const GGS_location & argument_0,
                                const GGS_lstring & argument_1
                                COMMA_LOCATION_ARGS) ;

//--- getPtr
  public : inline cPtr_finalize_st_action * getPtr (void) const {
    return (cPtr_finalize_st_action *) mPointer ;
  }

//--- 'description' reader
  public : virtual const char * actualTypeName (void) const ;

//--- Readers
  public : GGS_lstring  reader_scheduleTableName (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;

//--- Modifiers

//--- operator ()
  #ifndef DO_NOT_GENERATE_CHECKINGS
    public : cPtr_finalize_st_action * operator () (LOCATION_ARGS) const ;
  #else
    public : inline cPtr_finalize_st_action * operator () (LOCATION_ARGS) const {
      return (cPtr_finalize_st_action *) mPointer ;
    }
  #endif

//--- Introspection
  public : virtual const C_galgas_type_descriptorEX * typeDescriptor (void) const ;

  public : GGS_object reader_object (void) const ;

  public : static GGS_finalize_st_action castFromObject (C_Compiler & inLexique,
                                           const GGS_object & inObject,
                                           const GGS_location & inErrorLocation
                                           COMMA_LOCATION_ARGS) ;

} ;

//---------------------------------------------------------------------------*

extern C_galgasClassRunTimeInformationEX gClassInfoFor__finalize_st_action ;

//---------------------------------------------------------------------------*
//                                                                           *
//                     abstract class 'cPtr_action_obj'                      *
//                                                                           *
//---------------------------------------------------------------------------*

class cPtr_action_obj : public cPtr__AC_galgas_class {
//--- Constructor
  public : cPtr_action_obj (const GGS_location & 
                                COMMA_LOCATION_ARGS) ;

//--- Attributes
  public : GGS_location  location ;
//--- Class message
  public : virtual const char * instanceMessage (void) const ;
  public : static const char * _static_message (void) ;

//--- Method for 'description' reader
  public : virtual void
  appendForDescription (C_String & ioString,
                        const PMSInt32 inIndentation) const ;

//--- Galgas RTTI
  public : virtual AC_galgasClassRunTimeInformationEX * galgasRTTI (void) const ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                    abstract class 'cPtr_void_action'                      *
//                                                                           *
//---------------------------------------------------------------------------*

class cPtr_void_action : public cPtr_action_obj {
  private : typedef cPtr_action_obj inherited ;
//--- Constructor
  public : cPtr_void_action (const GGS_location & 
                                COMMA_LOCATION_ARGS) ;

//--- Attributes
//--- Class message
  public : virtual const char * instanceMessage (void) const ;
  public : static const char * _static_message (void) ;

//--- Method for 'description' reader
  public : virtual void
  appendForDescription (C_String & ioString,
                        const PMSInt32 inIndentation) const ;

//--- Comparison
  public : virtual bool
  isEqualToObject (const cPtr__AC_galgas_class * inOperand) const ;

//--- Galgas RTTI
  public : virtual AC_galgasClassRunTimeInformationEX * galgasRTTI (void) const ;

//--- Make clone
  public : virtual cPtr__AC_galgas_class * makeClone (void) const ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                  abstract class 'cPtr_setevent_action'                    *
//                                                                           *
//---------------------------------------------------------------------------*

class cPtr_setevent_action : public cPtr_action_obj {
  private : typedef cPtr_action_obj inherited ;
//--- Constructor
  public : cPtr_setevent_action (const GGS_location & ,
                                const GGS_lstring & ,
                                const GGS_lstring & 
                                COMMA_LOCATION_ARGS) ;

//--- Attributes
  public : GGS_lstring  task_name ;
  public : GGS_lstring  event_name ;
//--- Class message
  public : virtual const char * instanceMessage (void) const ;
  public : static const char * _static_message (void) ;

//--- Method for 'description' reader
  public : virtual void
  appendForDescription (C_String & ioString,
                        const PMSInt32 inIndentation) const ;

//--- Comparison
  public : virtual bool
  isEqualToObject (const cPtr__AC_galgas_class * inOperand) const ;

//--- Galgas RTTI
  public : virtual AC_galgasClassRunTimeInformationEX * galgasRTTI (void) const ;

//--- Make clone
  public : virtual cPtr__AC_galgas_class * makeClone (void) const ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                abstract class 'cPtr_activatetask_action'                  *
//                                                                           *
//---------------------------------------------------------------------------*

class cPtr_activatetask_action : public cPtr_action_obj {
  private : typedef cPtr_action_obj inherited ;
//--- Constructor
  public : cPtr_activatetask_action (const GGS_location & ,
                                const GGS_lstring & 
                                COMMA_LOCATION_ARGS) ;

//--- Attributes
  public : GGS_lstring  task_name ;
//--- Class message
  public : virtual const char * instanceMessage (void) const ;
  public : static const char * _static_message (void) ;

//--- Method for 'description' reader
  public : virtual void
  appendForDescription (C_String & ioString,
                        const PMSInt32 inIndentation) const ;

//--- Comparison
  public : virtual bool
  isEqualToObject (const cPtr__AC_galgas_class * inOperand) const ;

//--- Galgas RTTI
  public : virtual AC_galgasClassRunTimeInformationEX * galgasRTTI (void) const ;

//--- Make clone
  public : virtual cPtr__AC_galgas_class * makeClone (void) const ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                  abstract class 'cPtr_callback_action'                    *
//                                                                           *
//---------------------------------------------------------------------------*

class cPtr_callback_action : public cPtr_action_obj {
  private : typedef cPtr_action_obj inherited ;
//--- Constructor
  public : cPtr_callback_action (const GGS_location & ,
                                const GGS_lstring & 
                                COMMA_LOCATION_ARGS) ;

//--- Attributes
  public : GGS_lstring  function_name ;
//--- Class message
  public : virtual const char * instanceMessage (void) const ;
  public : static const char * _static_message (void) ;

//--- Method for 'description' reader
  public : virtual void
  appendForDescription (C_String & ioString,
                        const PMSInt32 inIndentation) const ;

//--- Comparison
  public : virtual bool
  isEqualToObject (const cPtr__AC_galgas_class * inOperand) const ;

//--- Galgas RTTI
  public : virtual AC_galgasClassRunTimeInformationEX * galgasRTTI (void) const ;

//--- Make clone
  public : virtual cPtr__AC_galgas_class * makeClone (void) const ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                    abstract class 'cPtr_flag_action'                      *
//                                                                           *
//---------------------------------------------------------------------------*

class cPtr_flag_action : public cPtr_action_obj {
  private : typedef cPtr_action_obj inherited ;
//--- Constructor
  public : cPtr_flag_action (const GGS_location & ,
                                const GGS_lstring & 
                                COMMA_LOCATION_ARGS) ;

//--- Attributes
  public : GGS_lstring  flag_name ;
//--- Class message
  public : virtual const char * instanceMessage (void) const ;
  public : static const char * _static_message (void) ;

//--- Method for 'description' reader
  public : virtual void
  appendForDescription (C_String & ioString,
                        const PMSInt32 inIndentation) const ;

//--- Comparison
  public : virtual bool
  isEqualToObject (const cPtr__AC_galgas_class * inOperand) const ;

//--- Galgas RTTI
  public : virtual AC_galgasClassRunTimeInformationEX * galgasRTTI (void) const ;

//--- Make clone
  public : virtual cPtr__AC_galgas_class * makeClone (void) const ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//              abstract class 'cPtr_incrementcounter_action'                *
//                                                                           *
//---------------------------------------------------------------------------*

class cPtr_incrementcounter_action : public cPtr_action_obj {
  private : typedef cPtr_action_obj inherited ;
//--- Constructor
  public : cPtr_incrementcounter_action (const GGS_location & ,
                                const GGS_lstring & 
                                COMMA_LOCATION_ARGS) ;

//--- Attributes
  public : GGS_lstring  counter_name ;
//--- Class message
  public : virtual const char * instanceMessage (void) const ;
  public : static const char * _static_message (void) ;

//--- Method for 'description' reader
  public : virtual void
  appendForDescription (C_String & ioString,
                        const PMSInt32 inIndentation) const ;

//--- Comparison
  public : virtual bool
  isEqualToObject (const cPtr__AC_galgas_class * inOperand) const ;

//--- Galgas RTTI
  public : virtual AC_galgasClassRunTimeInformationEX * galgasRTTI (void) const ;

//--- Make clone
  public : virtual cPtr__AC_galgas_class * makeClone (void) const ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                 abstract class 'cPtr_finalize_st_action'                  *
//                                                                           *
//---------------------------------------------------------------------------*

class cPtr_finalize_st_action : public cPtr_action_obj {
  private : typedef cPtr_action_obj inherited ;
//--- Constructor
  public : cPtr_finalize_st_action (const GGS_location & ,
                                const GGS_lstring & 
                                COMMA_LOCATION_ARGS) ;

//--- Attributes
  public : GGS_lstring  scheduleTableName ;
//--- Class message
  public : virtual const char * instanceMessage (void) const ;
  public : static const char * _static_message (void) ;

//--- Method for 'description' reader
  public : virtual void
  appendForDescription (C_String & ioString,
                        const PMSInt32 inIndentation) const ;

//--- Comparison
  public : virtual bool
  isEqualToObject (const cPtr__AC_galgas_class * inOperand) const ;

//--- Galgas RTTI
  public : virtual AC_galgasClassRunTimeInformationEX * galgasRTTI (void) const ;

//--- Make clone
  public : virtual cPtr__AC_galgas_class * makeClone (void) const ;
} ;

//---------------------------------------------------------------------------*

#endif
