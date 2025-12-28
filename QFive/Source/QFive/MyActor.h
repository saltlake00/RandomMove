// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class QFIVE_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// 이동 
	void MoveStep();

private:

	// 이벤트 발생
	bool RandomEvent();
	
	// 타이머
	FTimerHandle TimerHandle;

	int32 StepCount;      // 변동 횟수
	float TotalDistance;  // 누적 이동 거리
	int32 EventCount;     // 이벤트 횟수
};
