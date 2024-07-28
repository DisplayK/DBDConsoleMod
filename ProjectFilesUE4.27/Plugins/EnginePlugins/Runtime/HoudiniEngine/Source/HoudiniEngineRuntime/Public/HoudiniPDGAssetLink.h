#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPDGLinkState.h"
#include "AggregatedWorkItemTally.h"
#include "Engine/EngineTypes.h"
#include "HoudiniPDGAssetLink.generated.h"

class AActor;
class UTOPNetwork;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniPDGAssetLink : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(NonTransactional, DuplicateTransient)
	FString AssetName;

	UPROPERTY(NonTransactional, DuplicateTransient)
	FString AssetNodePath;

	UPROPERTY(NonTransactional, DuplicateTransient)
	int32 AssetID;

	UPROPERTY()
	TArray<UTOPNetwork*> AllTOPNetworks;

	UPROPERTY()
	int32 SelectedTOPNetworkIndex;

	UPROPERTY(NonTransactional, Transient)
	EPDGLinkState LinkState;

	UPROPERTY()
	bool bAutoCook;

	UPROPERTY()
	bool bUseTOPNodeFilter;

	UPROPERTY()
	bool bUseTOPOutputFilter;

	UPROPERTY()
	FString TOPNodeFilter;

	UPROPERTY()
	FString TOPOutputFilter;

	UPROPERTY(NonTransactional)
	int32 NumWorkitems;

	UPROPERTY(NonTransactional, Transient)
	FAggregatedWorkItemTally WorkItemTally;

	UPROPERTY()
	FString OutputCachePath;

	UPROPERTY(Transient)
	bool bNeedsUIRefresh;

	UPROPERTY(EditAnywhere)
	AActor* OutputParentActor;

	UPROPERTY()
	FDirectoryPath BakeFolder;

public:
	UHoudiniPDGAssetLink();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniPDGAssetLink) { return 0; }
