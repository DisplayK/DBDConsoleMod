#include "ScaleformBlueprintLibrary.h"
#include "ASValue.h"

class UTextureRenderTarget2D;
class UGFxMoviePlayer;
class USwfMovie;
class UGFxObject;
class UObject;

UGFxMoviePlayer* UScaleformBlueprintLibrary::OpenMovie(USwfMovie* Movie, UObject* ExternalInterface, UTextureRenderTarget2D* RenderTexture, UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused)
{
	return NULL;
}

FASValue UScaleformBlueprintLibrary::InvokeNoParams(UGFxMoviePlayer* MoviePlayer, const FString& FunctionName)
{
	return FASValue{};
}

FASValue UScaleformBlueprintLibrary::Invoke(UGFxMoviePlayer* MoviePlayer, const FString& FunctionName, const TArray<FASValue>& Params)
{
	return FASValue{};
}

UGFxObject* UScaleformBlueprintLibrary::GetVariable(UGFxMoviePlayer* MoviePlayer, const FString& VariablePath)
{
	return NULL;
}

UGFxObject* UScaleformBlueprintLibrary::GetMovieClip(UGFxMoviePlayer* MoviePlayer, const FString& MovieClipName)
{
	return NULL;
}

UGFxObject* UScaleformBlueprintLibrary::GetMember(UGFxMoviePlayer* MoviePlayer, const FString& MemberName)
{
	return NULL;
}

void UScaleformBlueprintLibrary::CloseMovie(UGFxMoviePlayer* MoviePlayer)
{

}

UScaleformBlueprintLibrary::UScaleformBlueprintLibrary()
{

}
