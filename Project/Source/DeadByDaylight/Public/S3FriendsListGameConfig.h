#pragma once

#include "CoreMinimal.h"
#include "S3FriendsListGameConfig.generated.h"

USTRUCT()
struct FS3FriendsListGameConfig
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 MaxFriendSuggestionsFacebook;

	UPROPERTY()
	int32 MaxFriendSuggestionsGoogle;

	UPROPERTY()
	int32 MaxFriendSuggestionsRecentlyPlayed;

public:
	DEADBYDAYLIGHT_API FS3FriendsListGameConfig();
};

FORCEINLINE uint32 GetTypeHash(const FS3FriendsListGameConfig) { return 0; }
