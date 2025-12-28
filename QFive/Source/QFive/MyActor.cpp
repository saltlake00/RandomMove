// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "Engine/Engine.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	StepCount = 0;
	TotalDistance = 0.0f;
	EventCount = 0;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
	// 시작점 초기화
	FVector StartLocation(0.0f, 50.0f, 0.0f);
	SetActorLocation(StartLocation);

	// 시작 메시지
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("=== 이동 시작 ==="));
	}

	// 0.5초마다 MoveStep 함수 실행
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AMyActor::MoveStep, 0.5f, true);
}

void AMyActor::MoveStep()
{
	// 10회 이동시 종료 및 결과출력
	if (StepCount >= 10)
	{
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle);

		FString ResultMsg = FString::Printf(TEXT("완료! 총 거리: %.2f | 총 이벤트: %d회"), TotalDistance, EventCount);

		if (GEngine)
		{
			// 결과 출력
			GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, ResultMsg);
		}

		UE_LOG(LogTemp, Error, TEXT("%s"), *ResultMsg);
		return;
	}

	// 랜덤 이동
	FVector PreviousLocation = GetActorLocation();
	float RandomX = FMath::RandRange(-200.0f, 200.0f);
	float RandomY = FMath::RandRange(-200.0f, 200.0f);
	FVector NewLocation = PreviousLocation + FVector(RandomX, RandomY, 0.0f);

	SetActorLocation(NewLocation);

	SetActorLocation(NewLocation);

	// 거리 누적
	float Dist = FVector::Dist(PreviousLocation, NewLocation);
	TotalDistance += Dist;
	StepCount++;

	// 이벤트 발생
	bool bEventTriggered = RandomEvent();

	FString EventMsg = TEXT("");
	if (bEventTriggered)
	{
		EventCount++;
		EventMsg = TEXT("이벤트 발생!");
	}

	// 좌표 및 이동 횟수, 이벤트 여부 출력
	FString LogMsg = FString::Printf(TEXT("[%d회차] 좌표: %s | 이동거리: %.2f | %s"),
		StepCount, *NewLocation.ToString(), Dist, *EventMsg);

	if (GEngine)
	{
		// 이벤트 발생 시 Cyan색, 평소엔 Green색
		FColor MsgColor = bEventTriggered ? FColor::Cyan : FColor::Green;
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, MsgColor, LogMsg);
	}
	UE_LOG(LogTemp, Log, TEXT("%s"), *LogMsg);
}

// 이벤트 발생
bool AMyActor::RandomEvent()
{
	// 0 아니면 1 (50% 확률)
	int32 RandomValue = FMath::RandRange(0, 1);

	if (RandomValue == 1)
	{
		return true;
	}
	return false;
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

