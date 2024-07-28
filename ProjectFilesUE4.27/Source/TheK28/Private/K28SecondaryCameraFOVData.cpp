#include "K28SecondaryCameraFOVData.h"

FK28SecondaryCameraFOVData::FK28SecondaryCameraFOVData()
{
	this->_fovChangeDuration = 0.0f;
	this->_initialFovValue = 0.0f;
	this->_targetFovValue = 0.0f;
	this->_fovCurve = NULL;
}
