// Copyright 2018 Mozart Alexander Louis

// Main Include
#include "PositionReport.h"

// Other Includes
#include "GameFramework/Actor.h"
#include "Jailbreak.h"

UPositionReport::UPositionReport() { PrimaryComponentTick.bCanEverTick = true; }

// Called when the game starts
void UPositionReport::BeginPlay() {
  Super::BeginPlay();

  const auto name = GetOwner()->GetName();
  const auto pos = GetOwner()->GetActorLocation().ToString();
  UE_LOG(LogTemp, Warning, TEXT("%s is at %s"), *name, *pos);
}

// Called every frame
void UPositionReport::TickComponent(float DeltaTime, ELevelTick TickType,
                                    FActorComponentTickFunction* ThisTickFunction) {
  Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}
