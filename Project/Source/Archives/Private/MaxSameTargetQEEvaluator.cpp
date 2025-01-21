#include "MaxSameTargetQEEvaluator.h"

UMaxSameTargetQEEvaluator::UMaxSameTargetQEEvaluator()
{
	this->_targetList = TMap<TWeakObjectPtr<AActor>, int32>();
}
