#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AICharacterBehaviour.generated.h"

UCLASS()
class UAICharacterBehaviour : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void Update(float deltaTime);

	UFUNCTION()
	void Stop();

	UFUNCTION()
	void Start();

	UFUNCTION()
	void SetEnable(bool enable);

	UFUNCTION()
	void Resume();

	UFUNCTION()
	void Pause();

	UFUNCTION()
	bool IsEnabled() const;

public:
	UAICharacterBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UAICharacterBehaviour) { return 0; }
