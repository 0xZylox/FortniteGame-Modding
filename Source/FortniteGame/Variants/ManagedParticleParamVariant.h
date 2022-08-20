// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VectorParamVariant.h"
#include "MaterialVectorVariant.h"
#include "MaterialFloatVariant.h"
#include "ManagedParticleParamVariant.generated.h"


USTRUCT()
struct FManagedParticleParamVariant
{
	GENERATED_BODY()

public:
	/*
	UPROPERTY(EditAnywhere)
    FGameplayTag ParamGroupTag;
	/*
	UPROPERTY(EditAnywhere)
		unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
*/
	UPROPERTY(EditAnywhere)
		TArray<FMaterialVectorVariant> ColorParams;

	UPROPERTY(EditAnywhere)
		TArray<FVectorParamVariant>  VectorParams;

	UPROPERTY(EditAnywhere)
		TArray<FMaterialFloatVariant> FloatParams;
};

