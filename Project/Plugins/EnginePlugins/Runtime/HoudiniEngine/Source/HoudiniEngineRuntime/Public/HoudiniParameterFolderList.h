#pragma once

#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "HoudiniParameterFolderList.generated.h"

class UHoudiniParameterFolder;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniParameterFolderList : public UHoudiniParameter
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool bIsTabMenu;

	UPROPERTY()
	bool bIsTabsShown;

	UPROPERTY(Export)
	TArray<UHoudiniParameterFolder*> TabFolders;

public:
	UHoudiniParameterFolderList();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameterFolderList) { return 0; }
