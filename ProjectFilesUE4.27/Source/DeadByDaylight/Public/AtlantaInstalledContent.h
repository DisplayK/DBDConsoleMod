#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaInstalledContent.generated.h"

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UAtlantaInstalledContent : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	bool Mount(int32 PakOrder, const FString& MountPoint);

	UFUNCTION(BlueprintPure)
	float GetInstalledContentSize();

	UFUNCTION(BlueprintPure)
	float GetFreeDiskSpace();

public:
	UAtlantaInstalledContent();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaInstalledContent) { return 0; }
