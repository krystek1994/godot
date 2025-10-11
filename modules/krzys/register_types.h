#include "modules/register_module_types.h"

/*
#define MODULE_SUMMATOR_HAS_PREREGISTER
void preregister_krzys_types();

void register_summator_types();
void unregister_summator_types();
*/

void initialize_krzys_module(ModuleInitializationLevel p_level);
void uninitialize_krzys_module(ModuleInitializationLevel p_level);
/* yes, the word in the middle must be the same as the module folder name */