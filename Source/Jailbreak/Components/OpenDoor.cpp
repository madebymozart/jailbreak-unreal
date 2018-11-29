// Copyright 2018 Mozart Alexander Louis

// Main Actor
#include "OpenDoor.h"

// Other Includes
#include "GameFramework/Actor.h"
#include "Jailbreak.h"

// Sets default values for this component's properties
UOpenDoor::UOpenDoor() {
  // Set this component to be initialized when the game starts, and to be ticked every
  // frame.  You can turn these features off to improve performance if you don't need
  // them.
  PrimaryComponentTick.bCanEverTick = true;

  // ...
}

// Called when the game starts
void UOpenDoor::BeginPlay() {
  Super::BeginPlay();

  // Find the owning Actor
  const auto owner = GetOwner();

  // Create  rotatator
  owner->SetActorRotation(FRotator(0.f, 0.f, 0.f));
}

// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType,
                              FActorComponentTickFunction* ThisTickFunction) {
  Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

  // ...
}
