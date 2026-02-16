// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class CREATORTEMPLATE_API AMyActor : public AActor
{
	GENERATED_BODY()


public:	
	// Sets default values for this actor's properties
	AMyActor();

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attributes);
	FString input;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attributes);
	FColor textColor;

	USceneComponent* transform;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UStaticMeshComponent* mesh;
};