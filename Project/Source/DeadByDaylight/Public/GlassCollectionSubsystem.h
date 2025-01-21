#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GlassCollectionSubsystem.generated.h"

class UGlassStaticMesh;

UCLASS()
class UGlassCollectionSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient, Export)
	TArray<UGlassStaticMesh*> _glassCollection;

public:
	UGlassCollectionSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UGlassCollectionSubsystem) { return 0; }
