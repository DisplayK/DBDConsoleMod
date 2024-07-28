#pragma once

#include "CoreMinimal.h"
#include "ECDNPatchCompleteStatus.generated.h"

UENUM(BlueprintType)
enum class ECDNPatchCompleteStatus : uint8
{
	Success,
	NotEnoughDiskSpace,
	PatchInstallDownloadError,
	PatchInstallFileConstructionFail,
	PatchInstallMoveFileToInstallFail,
	PatchInstallBuildVerifyFail,
	PatchInstallApplicationClosing,
	PatchInstallApplicationError,
	PatchInstallUserCanceled,
	PatchInstallPrerequisiteError,
	PatchInstallInitializationError,
	PatchInstallPathLengthExceeded,
	PatchInstallOutOfDiskSpace,
	PatchInstallUnknownError,
	FailureToMountContent,
	InstalledContentNotFound,
	InvalidPendingContent,
	CantFindContentToDownload,
	NoPatchForCurrentPlatformAndVersion,
	FailureToRetrieveContent,
	CancelledByUser,
};
