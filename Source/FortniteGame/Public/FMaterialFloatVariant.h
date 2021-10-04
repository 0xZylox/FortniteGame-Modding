// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FMaterialParamName.h"
#include "FMaterialFloatVariant.generated.h"


USTRUCT()
struct FMaterialFloatVariant : public FMaterialParamName
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		float Value;
};
