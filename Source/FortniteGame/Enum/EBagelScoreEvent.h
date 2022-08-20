#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EBagelScoreEvent : uint8 
{
	BruteKill,
	RangedKill,
	ExplodingKill,
	ChillKill,
	PoisonKill,
	GoldKill,
	RiftDestroyed,
	ScoreMultiplierUsed,
	HeadshotKill,
	RespawnPenalty,
	AmmoBoxOpened,
	ChestOpened,
	FinalBossKill,
	MAX,
};