#pragma once

#include "CoreMinimal.h"
#include "EPawnType.h"
#include "Components/ActorComponent.h"
#include "GlyphDebugComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class ARCHIVES_API UGlyphDebugComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	bool _assignOwnerOnBeginPlay;

	UPROPERTY(EditAnywhere)
	EPawnType _ownerPawnType;

public:
	UGlyphDebugComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGlyphDebugComponent) { return 0; }
