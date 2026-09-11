// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX JA
#define PREFIX jangos_Armory

#define AUTHOR QUOTE(Your Name)
#define MOD_NAME_BEAUTIFIED QUOTE(Your Name Beautified)


#include "script_version.hpp"


#define VERSION     MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR  MAJOR,MINOR,PATCHLVL,BUILD

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 1.0
#define REQUIRED_CBA_VERSION {3,15,6}
#define REQUIRED_ACE_VERSION {3,14,0,63}
#define REQUIRED_TFAR_VERSION {1,-1,0,328}

#define RELEASE_BUILD

#ifdef RELEASE_BUILD
	// insert debug defines here
#endif

#ifdef COMPONENT_BEAUTIFIED
    // #define COMPONENT_NAME QUOTE(91st MRC Auxillary - COMPONENT_BEAUTIFIED)
    #define COMPONENT_NAME QUOTE(Your name - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(Your name - COMPONENT)
#endif
