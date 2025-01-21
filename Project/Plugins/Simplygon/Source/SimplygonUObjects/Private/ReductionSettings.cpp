#include "ReductionSettings.h"

FReductionSettings::FReductionSettings()
{
	this->ReductionTargetTriangleRatioEnabled = false;
	this->ReductionTargetTriangleRatio = 0.0f;
	this->ReductionTargetTriangleCountEnabled = false;
	this->ReductionTargetTriangleCount = 0;
	this->ReductionTargetMaxDeviationEnabled = false;
	this->ReductionTargetMaxDeviation = 0.0f;
	this->ReductionTargetOnScreenSizeEnabled = false;
	this->ReductionTargetOnScreenSize = 0;
	this->ReductionTargetStopCondition = EReductionTargetStopCondition::Any;
	this->ReductionHeuristics = EReductionHeuristics::Fast;
	this->GeometryImportance = 0.0f;
	this->MaterialImportance = 0.0f;
	this->TextureImportance = 0.0f;
	this->ShadingImportance = 0.0f;
	this->GroupImportance = 0.0f;
	this->VertexColorImportance = 0.0f;
	this->EdgeSetImportance = 0.0f;
	this->SkinningImportance = 0.0f;
	this->CurvatureImportance = 0.0f;
	this->CreateGeomorphGeometry = false;
	this->AllowDegenerateTexCoords = false;
	this->KeepSymmetry = false;
	this->UseAutomaticSymmetryDetection = false;
	this->UseSymmetryQuadRetriangulator = false;
	this->SymmetryAxis = ESymmetryAxis::X;
	this->SymmetryOffset = 0.0f;
	this->SymmetryDetectionTolerance = 0.0f;
	this->DataCreationPreferences = EDataCreationPreferences::OnlyUseOriginalData;
	this->GenerateGeomorphData = false;
	this->OutwardMoveMultiplier = 0.0f;
	this->InwardMoveMultiplier = 0.0f;
	this->MaxEdgeLength = 0.0f;
	this->UseHighQualityNormalCalculation = false;
	this->ProcessSelectionSetID = 0;
	this->ProcessSelectionSetName = TEXT("");
	this->MergeGeometries = false;
	this->KeepUnprocessedSceneMeshes = false;
	this->LockGeometricBorder = false;
}
