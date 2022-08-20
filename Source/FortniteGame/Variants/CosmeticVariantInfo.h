#pragma once

#include "CoreMinimal.h"
#include "GameplayTags.h"
#include "CosmeticVariantInfo.generated.h"

USTRUCT(BlueprintType)
struct FCosmeticVariantInfo
{
    GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FGameplayTag VariantChannelTag;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FGameplayTag ActiveVariantTag;
};