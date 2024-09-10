#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EScreenType.h"
#include "ScreenController.generated.h"

class UDBDGameInstance;
class UUserWidget;
class UScreenBase;
class UGFxMoviePlayer;
class UGFxObject;

UCLASS()
class DEADBYDAYLIGHT_API UScreenController : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UDBDGameInstance* _gameInstance;

	UPROPERTY(Transient)
	UGFxObject* _screenControllerObj;

	UPROPERTY(Transient)
	UGFxMoviePlayer* _moviePlayer;

	UPROPERTY(Transient)
	TMap<FString, UScreenBase*> _screenDictionary;

	UPROPERTY(Transient)
	TMap<FString, EScreenType> _screenTypeDictionary;

	UPROPERTY(Transient, Export)
	TMap<UClass*, TWeakObjectPtr<UUserWidget>> _cachedUMGScreens;

public:
	UScreenController();
};

FORCEINLINE uint32 GetTypeHash(const UScreenController) { return 0; }
