#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UMGRoleSwitcherWidget.generated.h"

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGRoleSwitcherWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	bool _isCurrentRoleRoleSwitcher;

	UPROPERTY(EditAnywhere)
	float _touchDeltaTolerance;

public:
	UUMGRoleSwitcherWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGRoleSwitcherWidget) { return 0; }
