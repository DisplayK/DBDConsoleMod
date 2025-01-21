#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "WhiteGlyphSurfaceComponent.generated.h"

class AGlyph;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UWhiteGlyphSurfaceComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_TeleportGlyph(FVector location);

	UFUNCTION(BlueprintPure)
	AGlyph* GetOwningGlyph() const;

public:
	UWhiteGlyphSurfaceComponent();
};

FORCEINLINE uint32 GetTypeHash(const UWhiteGlyphSurfaceComponent) { return 0; }
