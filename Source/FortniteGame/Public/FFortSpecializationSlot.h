// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FHeroSpecializationAttributeRequirement.h"
#include "GameplayTags.h"
#include "FFortSpecializationSlot.generated.h"

USTRUCT()
struct FFortSpecializationSlot
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<FHeroSpecializationAttributeRequirement> AttributeRequirements;                                   
	
	UPROPERTY(EditAnywhere)
		FGameplayTagContainer RequiredTags;                                             
	
	UPROPERTY(EditAnywhere)
	int MinimumHeroLevel;                                        
};
