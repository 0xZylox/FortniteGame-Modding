// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFortRarity.h"
#include "GameplayTags.h"
#include "FortMontageItemDefinitionBase.h"
#include "FVariantSwapMontageData.h"
#include "AthenaDanceItemDefinition.generated.h"

UCLASS(BlueprintType)
class FORTNITEGAME_API UAthenaDanceItemDefinition : public UFortMontageItemDefinitionBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	bool bMovingEmote;    

	UPROPERTY(EditAnywhere)
	bool bMovingEmoteSkipLandingFX;     

	UPROPERTY(EditAnywhere)
	bool bMoveForwardOnly; 

	UPROPERTY(EditAnywhere)
	bool bMoveFollowingOnly;    

	UPROPERTY(EditAnywhere)
	bool bGroupEmote;     

	UPROPERTY(EditAnywhere)
	bool bUseHighPreviewCamera;  

	UPROPERTY(EditAnywhere)
	bool bGroupAnimationSync;

	UPROPERTY(EditAnywhere)
	float WalkForwardSpeed;

	UPROPERTY(EditAnywhere)
	UAthenaDanceItemDefinition* GroupEmoteToStartLeader;       

	UPROPERTY(EditAnywhere)
	 UAthenaDanceItemDefinition* GroupEmoteToStartFollower;  

	UPROPERTY(EditAnywhere)
	UAthenaDanceItemDefinition* GroupEmoteToStartLeaderIfBothOwn;    

	UPROPERTY(EditAnywhere)
	 UAthenaDanceItemDefinition* GroupEmoteToStartFollowerIfBothOwn;  
	
	UPROPERTY(EditAnywhere)
	 TArray<FVariantSwapMontageData> MotageSelectionGroups;       
	 
	UPROPERTY(EditAnywhere)
	FVector GroupEmotePositionOffset;          

	UPROPERTY(EditAnywhere)
	float GroupEmotePositionOffsetTolerance;     

	UPROPERTY(EditAnywhere)
	bool bLockGroupEmoteLeaderRotation;        

	UPROPERTY(EditAnywhere)
	float GroupEmoteLeaderRotationYawOffset;    

	UPROPERTY(EditAnywhere)
	float GroupEmoteFollowerRotationYawOffset;  

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAnimMontage> FrontEndAnimation;        

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAnimMontage> FrontEndAnimationFemaleOverride;      
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath CustomDanceAbility;
	
	UPROPERTY(EditAnywhere)
	FText ChatTriggerCommandName;                           
};
