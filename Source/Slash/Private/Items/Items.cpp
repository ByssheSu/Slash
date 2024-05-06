// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Items.h"
#include "Slash/DebugMacros.h"

//#define THIRTY 30

// Sets default values
AItems::AItems()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMeshComponent"));
	RootComponent = ItemMesh;
}

// Called when the game starts or when spawned
void AItems::BeginPlay()
{
	Super::BeginPlay();

	/*int32 AvgInt = Avg<int32>(1, 3);
	UE_LOG(LogTemp, Warning, TEXT("Avg of 1 and 3: %d"), AvgInt);

	float AvgFloat = Avg<float>(3.45f, 7.86f);
	UE_LOG(LogTemp, Warning, TEXT("Avg of 3.45 and 7.86: %f"), AvgFloat);*/

	//UWorld* World = GetWorld();
   
	/*SetActorLocation(FVector(0.f, 0.f, 50.f));
	SetActorRotation(FRotator(0.f, 45.f, 0.f));*/
	FVector Location = GetActorLocation();
	FVector Forward = GetActorForwardVector();
	//DRAW_SPHERE(Location);
	//DRAW_LINE(Location, Location + Forward * 100.f);
	//DRAW_POINT(Location + Forward * 100.f);
	//DRAW_VECTOR(Location, Location + Forward * 100.f)

	/*if (World)
	{
		DrawDebugPoint(World, Location + Forward * 100.f, 15.f, FColor::Red, true);
	}*/

    /*UE_LOG(LogTemp, Warning, TEXT("Begin Play called!"));

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, FString("Item OnScreen Message!"));
	}*/

	/*if (World)
	{
		FVector Location = GetActorLocation();
		DrawDebugSphere(World, Location, 25.f, THIRTY, FColor::Red, false, 30.f);
	}*/

	/*if (World)
	{

		DrawDebugLine(World, Location, Location + Forward * 100.f, FColor::Red, true, -1.f, 0, 1.f);
	}*/
	
}

float AItems::TransformedSin()
{
	return Amplitude * FMath::Sin(RunningTime * TimeConstant);
}

float AItems::TransformedCos()
{
	return Amplitude * FMath::Cos(RunningTime * TimeConstant);
}

// Called every frame
void AItems::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//RunningTime += DeltaTime;


	//float DeltaZ = Amplitude * FMath::Sin(RunningTime * TimeConstant);  // period = 2*pi/k

	//AddActorWorldOffset(FVector(0.f, 0.f, DeltaZ));
	//AddActorWorldRotation(FRotator(0.f, RunningTime,0.f));

	// Movement rate in units of cm/s
	//float MovementRate = 50.f;
	//float RotationRate = 45.f;
	

	//// MovementRate * DeltaTime (cm/s) * (s/frame) = (cm/frame)
	//AddActorWorldOffset(FVector(MovementRate * DeltaTime, 0.f, 0.f));
	//AddActorWorldRotation(FRotator(0.f, RotationRate * DeltaTime, 0.f));
	/*DRAW_SPHERE_SingleFrame(GetActorLocation());
	DRAW_VECTOR_SingleFrame(GetActorLocation(),GetActorLocation() + GetActorForwardVector() * 100.f);

	FVector AvgVector = Avg<FVector>(GetActorLocation(), FVector::ZeroVector);
	DRAW_POINT_SingleFrame(AvgVector);*/
	

	/*UE_LOG(LogTemp, Warning, TEXT("DeltaTime: %f"),DeltaTime);

	if (GEngine)
	{
		FString Name = GetName();
		FString Message = FString::Printf(TEXT("Item Name: %s"), *Name);
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, Message);

		UE_LOG(LogTemp, Warning, TEXT("Item Name: %s"), *Name);
	}*/

}

