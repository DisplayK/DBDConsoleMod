#include "Addon_ThePig_JigsawSketch.h"

UAddon_ThePig_JigsawSketch::UAddon_ThePig_JigsawSketch()
{
	this->_trackedGeneratorRepairs = TMap<ACamperPlayer*, AGenerator*>();
}
