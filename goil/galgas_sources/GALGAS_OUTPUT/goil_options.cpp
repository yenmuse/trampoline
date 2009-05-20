//---------------------------------------------------------------------------*
//                                                                           *
//                         File 'goil_options.cpp'                           *
//                        Generated by version 1.8.2                         *
//                       may 19th, 2009, at 20h10'23"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//---------------------------------------------------------------------------*

#include "version_libpm.h"
#if LIBPM_VERSION != 463
  #error "This file has been compiled with a version of GALGAS different than the version of libpm"
#endif

#include <string.h>

#include "goil_options.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                          C O N S T R U C T O R                            *
//                                                                           *
//---------------------------------------------------------------------------*

goil_options::goil_options (void)
:mStringValue (1 COMMA_HERE) {
  mBoolOptionValues [0] = false ;
  mBoolOptionValues [1] = false ;
  mBoolOptionValues [2] = false ;
  mBoolOptionValues [3] = false ; // Extra unused entry
  mUintOptionValues [0] = 0 ; // Extra unused entry
}

//---------------------------------------------------------------------------*
//                                                                           *
//              G E T    B O O L    O P T I O N S    C O U N T               *
//                                                                           *
//---------------------------------------------------------------------------*

sint32 goil_options::getBoolOptionsCount (void) const {
  return 3 ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//               G E T    B O O L    O P T I O N    V A L U E                *
//                                                                           *
//---------------------------------------------------------------------------*

bool goil_options::getBoolOptionValue (const sint32 inIndex) const {
  return ((inIndex >= 0) && (inIndex < 3)) ? mBoolOptionValues [inIndex] : false ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//               S E T    B O O L    O P T I O N    V A L U E                *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_options::setBoolOptionValue (const sint32 inIndex, const bool inValue) {
  if ((inIndex >= 0) && (inIndex < 3)) {
    mBoolOptionValues [inIndex] = inValue ;
  }
}

//---------------------------------------------------------------------------*
//                                                                           *
//           G E T    B O O L    O P T I O N    C H A R A C T E R            *
//                                                                           *
//---------------------------------------------------------------------------*

char goil_options::getBoolOptionChar (const sint32 inIndex) const {
  const char kCharArray [4] = {'a', 'g', 'i', '\0'} ;
  return ((inIndex >= 0) && (inIndex < 3)) ? kCharArray [inIndex] : '\0' ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//              G E T    B O O L    O P T I O N    S T R I N G               *
//                                                                           *
//---------------------------------------------------------------------------*

const char * goil_options::getBoolOptionString (const sint32 inIndex) const {
  const char * kStringArray [4] = {"autosar",
    "generate-makefile",
    "interrupts",
    ""} ;
  return ((inIndex >= 0) && (inIndex < 3)) ? kStringArray [inIndex] : "" ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//         G E T    B O O L    O P T I O N    D E S C R I P T I O N          *
//                                                                           *
//---------------------------------------------------------------------------*

const char * goil_options::getBoolOptionDescription (const sint32 inIndex) const {
  const char * kDescriptionArray [4] = {"Parse Autosar objects and attributes",
    "Generate a Makefile from OS extra attributes",
    "Use the new interrupt scheme introduced for viper 2",
    ""} ;
  return ((inIndex >= 0) && (inIndex < 3)) ? kDescriptionArray [inIndex] : "" ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//    G E T    B O O L    O P T I O N    V A L U E    F R O M    K E Y S     *
//                                                                           *
//---------------------------------------------------------------------------*

bool goil_options::
boolOptionValueFromKeys (const char * inModuleName,
                         const char * inOptionName,
                         bool * outFound) const {
  const char * kKeyArray [4] = {"autosar_on",
    "generate_makefile",
    "posix_it",
    ""} ;
  bool result = false ;
  bool found = strcmp (inModuleName, "goil_options") == 0 ;
  if (found) {
    found = false ;
    sint32 index = 0 ;
    while ((index < 3) && ! found) {
      found = strcmp (inOptionName, kKeyArray [index]) == 0 ;
      if (found) {
        result = mBoolOptionValues [index] ;
      }
      index ++ ;
    }
  }
  if (outFound != NULL) {
    * outFound = found ;
  }
  return result ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//              G E T    U I N T    O P T I O N S    C O U N T               *
//                                                                           *
//---------------------------------------------------------------------------*

sint32 goil_options::getUintOptionsCount (void) const {
  return 0 ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//               G E T    U I N T    O P T I O N    V A L U E                *
//                                                                           *
//---------------------------------------------------------------------------*

uint32 goil_options::getUintOptionValue (const sint32 inIndex) const {
  return ((inIndex >= 0) && (inIndex < 0)) ? mUintOptionValues [inIndex] : 0 ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//      G E T    U I N T    O P T I O N    D E F A U L T    V A L U E        *
//                                                                           *
//---------------------------------------------------------------------------*

uint32 goil_options::getUintOptionDefaultValue (const sint32 inIndex) const {
  static const uint32 kDefaultValues [1] = {
  0} ;
  return ((inIndex >= 0) && (inIndex < 0)) ? kDefaultValues [inIndex] : 0 ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//               S E T    U I N T    O P T I O N    V A L U E                *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_options::setUintOptionValue (const sint32 inIndex, const uint32 inValue) {
  if ((inIndex >= 0) && (inIndex < 0)) {
    mUintOptionValues [inIndex] = inValue ;
  }
}

//---------------------------------------------------------------------------*
//                                                                           *
//           G E T    U I N T    O P T I O N    C H A R A C T E R            *
//                                                                           *
//---------------------------------------------------------------------------*

char goil_options::getUintOptionChar (const sint32 inIndex) const {
  static const char kCharArray [1] = {'\0'} ;
  return ((inIndex >= 0) && (inIndex < 0)) ? kCharArray [inIndex] : '\0' ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//              G E T    U I N T    O P T I O N    S T R I N G               *
//                                                                           *
//---------------------------------------------------------------------------*

const char * goil_options::getUintOptionString (const sint32 inIndex) const {
  static const char * kStringArray [1] = {""} ;
  return ((inIndex >= 0) && (inIndex < 0)) ? kStringArray [inIndex] : "" ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//         G E T   U I N T    O P T I O N    D E S C R I P T I O N           *
//                                                                           *
//---------------------------------------------------------------------------*

const char * goil_options::getUintOptionDescription (const sint32 inIndex) const {
  static const char * kDescriptionArray [1] = {""} ;
  return ((inIndex >= 0) && (inIndex < 0)) ? kDescriptionArray [inIndex] : "" ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//    G E T    U I N T    O P T I O N    V A L U E    F R O M    K E Y S     *
//                                                                           *
//---------------------------------------------------------------------------*

uint32 goil_options::
uintOptionValueFromKeys (const char * inModuleName,
                         const char * inOptionName,
                         bool * outFound) const {
  static const char * kKeyArray [1] = {""} ;
  uint32 result = 0 ;
  bool found = strcmp (inModuleName, "goil_options") == 0 ;
  if (found) {
    found = false ;
    sint32 index = 0 ;
    while ((index < 0) && ! found) {
      found = strcmp (inOptionName, kKeyArray [index]) == 0 ;
      if (found) {
        result = mUintOptionValues [index] ;
      }
      index ++ ;
    }
  }
  if (outFound != NULL) {
    * outFound = found ;
  }
  return result ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//            G E T    S T R I N G    O P T I O N S    C O U N T             *
//                                                                           *
//---------------------------------------------------------------------------*

sint32 goil_options::
getStringOptionsCount (void) const {
  return 3 ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//            G E T    S T R I N G    O P T I O N S    V A L U E             *
//                                                                           *
//---------------------------------------------------------------------------*

C_String goil_options::
getStringOptionValue (const sint32 inIndex) const {
  return ((inIndex >= 0) && (inIndex < 3)) ? mStringOptionValues [inIndex] : C_String () ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//            S E T    S T R I N G    O P T I O N S    V A L U E             *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_options::
setStringOptionValue (const sint32 inIndex, const C_String & inValue) {
  if ((inIndex >= 0) && (inIndex < 3)) {
     mStringOptionValues [inIndex] = inValue ;
  }
}

//---------------------------------------------------------------------------*
//                                                                           *
//              G E T    S T R I N G    O P T I O N    C H A R               *
//                                                                           *
//---------------------------------------------------------------------------*

char goil_options::
getStringOptionChar (const sint32 inIndex) const {
  static const char kCharArray [4] = {'p', 't', '\0', '\0'} ;
  return ((inIndex >= 0) && (inIndex < 3)) ? kCharArray [inIndex] : '\0' ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//            G E T    S T R I N G    O P T I O N    S T R I N G             *
//                                                                           *
//---------------------------------------------------------------------------*

const char * goil_options::
getStringOptionString (const sint32 inIndex) const {
  static const char * kStringArray [4] = {"project",
    "target",
    "templates",
    ""} ;
  return ((inIndex >= 0) && (inIndex < 3)) ? kStringArray [inIndex] : "" ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//       G E T    S T R I N G    O P T I O N    D E S C R I P T I O N        *
//                                                                           *
//---------------------------------------------------------------------------*

const char * goil_options::
getStringOptionDescription (const sint32 inIndex) const {
  static const char * kDescriptionArray [4] = {"Specifies project directory (by default, the project directory is the name of the oil file, without the .oil extension)",
    "Specifies target platform (avr, h8300h, libpcl, posix, v850e arm, c166, hcs12 or ppc)",
    "Specifies template directory (used by goil for code generation)",
    ""} ;
  return ((inIndex >= 0) && (inIndex < 3)) ? kDescriptionArray [inIndex] : "" ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//   G E T    S T R I N G    O P T I O N    V A L U E   F R O M   K E Y S    *
//                                                                           *
//---------------------------------------------------------------------------*

C_String goil_options::
stringOptionValueFromKeys (const char * inModuleName,
                           const char * inOptionName,
                           bool * outFound) const {
  static const char * kKeyArray [4] = {"project_dir",
    "target_platform",
    "template_dir",
    ""} ;
  C_String result ;
  bool found = strcmp (inModuleName, "goil_options") == 0 ;
  if (found) {
    found = false ;
    sint32 index = 0 ;
    while ((index < 3) && ! found) {
      found = strcmp (inOptionName, kKeyArray [index]) == 0 ;
      if (found) {
        result = mStringOptionValues [index] ;
      }
      index ++ ;
    }
  }
  if (outFound != NULL) {
    * outFound = found ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

