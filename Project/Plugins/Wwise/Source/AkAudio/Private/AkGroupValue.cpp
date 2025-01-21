#include "AkGroupValue.h"

UAkGroupValue::UAkGroupValue()
{
	this->MediaDependencies = TArray<TSoftObjectPtr<UAkMediaAsset>>();
	this->GroupShortID = 0;
}
