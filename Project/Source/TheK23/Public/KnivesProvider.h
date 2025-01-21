#pragma once

#include "CoreMinimal.h"
#include "ProjectileProvider.h"
#include "AuthoritativeActorPoolComponent.h"
#include "KnivesProvider.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UKnivesProvider : public UAuthoritativeActorPoolComponent, public IProjectileProvider
{
	GENERATED_BODY()

public:
	UKnivesProvider();
};

FORCEINLINE uint32 GetTypeHash(const UKnivesProvider) { return 0; }
