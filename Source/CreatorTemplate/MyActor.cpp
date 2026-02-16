// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	transform = CreateDefaultSubobject<USceneComponent>("Root Scene Component");
	this->SetRootComponent(transform);

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere"));
	UStaticMesh* sphereMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("'StaticMesh'/Engine/BasicShapes/Sphere.Sphere")).Object;

	mesh->SetStaticMesh(sphereMesh);
	this->SetRootComponent(mesh);
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, textColor, input);
}

