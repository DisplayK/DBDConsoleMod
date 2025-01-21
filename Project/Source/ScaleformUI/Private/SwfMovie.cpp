#include "SwfMovie.h"

USwfMovie::USwfMovie()
{
	this->bUseGFxExport = false;
	this->bOptimizeForMobiles = false;
	this->bSetSRGBOnImportedTextures = false;
	this->bPackTextures = false;
	this->PackTextureSize = 0;
	this->bForceSquarePacking = false;
	this->TextureRescale = FlashTextureScale_High;
	this->TextureFormat = TEXT("");
	this->bReplaceImages = false;
	this->SourceFile = TEXT("");
	this->FontMappings = TArray<FString>();
	this->SourceFileTimestamp = TEXT("");
	this->ImportTimeStamp = 0;
	this->RawData = TArray<uint8>();
	this->ReferencedAssetNames = TArray<FString>();
	this->References = TArray<UObject*>();
	this->UserReferences = TArray<UObject*>();
}
