#include "register_types.h"

#include "core/object/class_db.h"

#include "node_4d.h"

/*

void preregister_summator_types()
{

}

void register_summator_types()
{

}

void unregister_summator_types()
{

}
*/
void initialize_krzys_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	//
	GDREGISTER_CLASS(Node4D);
	GDREGISTER_CLASS(Counted);
}

void uninitialize_krzys_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
   // Nothing to do here in this example.
}