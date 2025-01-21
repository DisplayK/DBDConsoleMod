#include "DemogorgonPortalPlacementValidationStrategy.h"

UDemogorgonPortalPlacementValidationStrategy::UDemogorgonPortalPlacementValidationStrategy()
{
	this->_portalPlacerState = NULL;
	this->_chargedAttackState = NULL;
	this->_distanceForWorldCollisionDetection = 0.000000;
	this->_numberOfGroundTest = 8.000000;
	this->_portalEdgeTestRadius = 120.000000;
	this->_maxElevationDifferentialOnPortalEdge = 30.000000;
}
