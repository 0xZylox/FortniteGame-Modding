// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Items/FortAccountItemDefinition.h"
#include "../Abilities/FortAbilitySet.h"
#include "NiagaraSystem.h"
#include "FortAlterationItemDefinition.generated.h"

/**
 * 
 */


USTRUCT(BlueprintType)
struct FFortCosmeticModification
{

	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UMaterialInterface> CosmeticMaterial;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UParticleSystem> AmbientParticleSystem;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UParticleSystem> MuzzleParticleSystem;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UNiagaraSystem> MuzzleNiagaraSystem;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UParticleSystem> ReloadParticleSystem;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UParticleSystem> BeamParticleSystem;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UNiagaraSystem> BeamNiagaraSystem;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UParticleSystem> ImpactPhysicalSurfaceEffects[0x1b];

	UPROPERTY(EditAnywhere)
		TArray<TSoftObjectPtr<UNiagaraSystem>> ImpactNiagaraPhysicalSurfaceEffects;

	UPROPERTY(EditAnywhere)
		UClass* TracerTemplate;

	UPROPERTY(EditAnywhere)
		bool bModifyColor;

	UPROPERTY(EditAnywhere)
		FLinearColor ColorAlteration;

	UPROPERTY(EditAnywhere)
		FName ColorParameterName;

	UPROPERTY(EditAnywhere)
		bool bModifyDecalColour;

	UPROPERTY(EditAnywhere)
		FLinearColor DecalColourAlterationStart;

	UPROPERTY(EditAnywhere)
		FLinearColor DecalColourAlterationEnd;

	UPROPERTY(EditAnywhere)
		bool bModifyShellColour;

	UPROPERTY(EditAnywhere)
		FLinearColor ShellColourAlteration;

};

USTRUCT(BlueprintType)
struct FFortItemQuantityPair 
{

	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FPrimaryAssetId ItemPrimaryAssetId; 

	UPROPERTY(EditAnywhere)
	int Quantity; 
};

USTRUCT(BlueprintType)
struct FFortConditionalIncludeTags
{

	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	 FGameplayTagContainer ConditionTags;

	UPROPERTY(EditAnywhere)
	 FGameplayTagContainer IncludeTags; 
};

USTRUCT(BlueprintType)
struct FFortConditionalCosmeticModification
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	 FFortCosmeticModification CosmeticModification; // 0x00(0x5e0)

	UPROPERTY(EditAnywhere)
	 FGameplayTagContainer ConditionalTags; // 0x5e0(0x20)
};


UCLASS(BlueprintType)
class FORTNITEGAME_API UFortAlterationItemDefinition : public UFortAccountItemDefinition
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		EFortAlteration AlterationType;

	UPROPERTY(EditAnywhere)
		FFortCosmeticModification DefaultCosmetic;

	UPROPERTY(EditAnywhere)
		TArray<FFortConditionalCosmeticModification> ConditionalCosmetics;

	UPROPERTY(EditAnywhere)
		TArray<FFortConditionalIncludeTags> AdditionalGameplayTags;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortAbilitySet> AlterationAbilitySet;

	UPROPERTY(EditAnywhere)
		TArray<FFortItemQuantityPair> AdditionalRespecCosts;

};
