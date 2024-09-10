#include "BloodwebGenerationRulesData.h"

FBloodwebGenerationRulesData::FBloodwebGenerationRulesData()
{
	this->RingComposition = TArray<FBloodwebRingComposition>();
	this->RarityCost = FBloodwebRarityCost{};
	this->TypeCostModifiers = FBloodwebTypeCostModifiers{};
	this->ChestProbability = TArray<FBloodwebChestProbability>();
	this->EventChestProbability = TArray<FBloodwebEventChestProbability>();
}
