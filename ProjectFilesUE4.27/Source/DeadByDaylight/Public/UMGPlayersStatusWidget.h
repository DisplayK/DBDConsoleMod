#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "CustomizedHudPlayerWrapperIdMapContainer.h"
#include "EPlayerRole.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGPlayersStatusWidget.generated.h"

class UHorizontalBox;
class UUMGPlayerStatusIcon;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGPlayersStatusWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TMap<EPlayerRole, FCustomizedHudPlayerWrapperIdMapContainer> CustomizedHudWrapperIdMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUMGPlayerStatusIcon> PlayerStatusIconClass;

	UPROPERTY(BlueprintReadOnly, Export)
	UHorizontalBox* playersContainer;

private:
	UPROPERTY(Transient, Export)
	TMap<FString, UUMGPlayerStatusIcon*> playerIconsByName;

	UPROPERTY(Transient, Export)
	TArray<UUMGPlayerStatusIcon*> _playerIcons;

private:
	UFUNCTION()
	void OnPlayerStatusClicked(UUMGPlayerStatusIcon* playerStatusIcon);

public:
	UUMGPlayersStatusWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPlayersStatusWidget) { return 0; }
