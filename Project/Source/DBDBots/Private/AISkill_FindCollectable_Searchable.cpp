#include "AISkill_FindCollectable_Searchable.h"

UAISkill_FindCollectable_Searchable::UAISkill_FindCollectable_Searchable()
{
	this->SearchIntervalAfterOpenSearchable = 0.500000;
	this->OpenSearchableRelevancyDuration = 3.000000;
	this->_relevantSearchable = NULL;
}
