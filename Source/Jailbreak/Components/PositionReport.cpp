// Copyright 2018 Mozart Alexander Louis

#include "PositionReport.h"
#include "GameFramework/Actor.h"

UPositionReport::UPositionReport() { PrimaryComponentTick.bCanEverTick = true; }

// Called when the game starts
void UPositionReport::BeginPlay() { Super::BeginPlay(); }

// Called every frame
void UPositionReport::TickComponent(float DeltaTime, ELevelTick TickType,
                                    FActorComponentTickFunction* ThisTickFunction) {
  Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}
