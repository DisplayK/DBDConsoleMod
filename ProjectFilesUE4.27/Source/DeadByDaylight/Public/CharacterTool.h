#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "DBDEditorActor.h"
#include "CharacterToolData.h"
#include "CharacterToolSpawnParameters.h"
#include "UObject/SoftObjectPtr.h"
#include "NamedButton.h"
#include "CharacterTool.generated.h"

class AActor;
class ATargetPoint;
class ABaseSky;
class ADBDMenuPlayer;

UCLASS()
class ACharacterTool : public ADBDEditorActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TArray<ATargetPoint*> SpawnLocations;

private:
	UPROPERTY(EditAnywhere)
	FCharacterToolData _customizationData;

	UPROPERTY(EditAnywhere)
	FCharacterToolSpawnParameters _defaultSpawnParams;

	UPROPERTY(EditAnywhere)
	FName _powerSocket;

	UPROPERTY(EditAnywhere)
	EAttachmentRule _powerAttachmentRule;

	UPROPERTY(EditAnywhere)
	bool _muteAudioInPIE;

	UPROPERTY(VisibleAnywhere)
	bool _isUsingGameSkeleton;

	UPROPERTY(EditAnywhere)
	TSoftClassPtr<ABaseSky> _overallLightingClass;

	UPROPERTY(EditAnywhere)
	FNamedButton _showHelp;

	UPROPERTY(Transient)
	TMap<ADBDMenuPlayer*, FCharacterToolSpawnParameters> _characters;

	UPROPERTY(Transient)
	AActor* _lighting;

public:
	ACharacterTool();
};

FORCEINLINE uint32 GetTypeHash(const ACharacterTool) { return 0; }
