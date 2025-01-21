#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ASValue.h"
#include "ScaleformBlueprintLibrary.generated.h"

class USwfMovie;
class UGFxObject;
class UGFxMoviePlayer;
class UTextureRenderTarget2D;
class UObject;

UCLASS(BlueprintType)
class SCALEFORMUI_API UScaleformBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static UGFxMoviePlayer* OpenMovie(USwfMovie* Movie, UObject* ExternalInterface, UTextureRenderTarget2D* RenderTexture, UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused);

	UFUNCTION(BlueprintCallable)
	static FASValue InvokeNoParams(UGFxMoviePlayer* MoviePlayer, const FString& FunctionName);

	UFUNCTION(BlueprintCallable)
	static FASValue Invoke(UGFxMoviePlayer* MoviePlayer, const FString& FunctionName, const TArray<FASValue>& Params);

	UFUNCTION(BlueprintCallable)
	static UGFxObject* GetVariable(UGFxMoviePlayer* MoviePlayer, const FString& VariablePath);

	UFUNCTION(BlueprintCallable)
	static UGFxObject* GetMovieClip(UGFxMoviePlayer* MoviePlayer, const FString& MovieClipName);

	UFUNCTION(BlueprintCallable)
	static UGFxObject* GetMember(UGFxMoviePlayer* MoviePlayer, const FString& MemberName);

	UFUNCTION(BlueprintCallable)
	static void CloseMovie(UGFxMoviePlayer* MoviePlayer);

public:
	UScaleformBlueprintLibrary();
};

FORCEINLINE uint32 GetTypeHash(const UScaleformBlueprintLibrary) { return 0; }
