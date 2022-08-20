// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FortCosmeticVariantBackedByArray.h"
#include "BaseVariantDef.h"
#include "MaterialVariantDef.h"
#include "FortCosmeticMaterialVariant.generated.h"


UCLASS()
class UFortCosmeticMaterialVariant : public UFortCosmeticVariantBackedByArray
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<FMaterialVariantDef> MaterialOptions;
};
