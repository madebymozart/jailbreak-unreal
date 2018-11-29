// Copyright 2018 Mozart Alexander Louis

#pragma once

#include "Components/ActorComponent.h"
#include "PositionReport.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class JAILBREAK_API UPositionReport : public UActorComponent {
  GENERATED_BODY()

 public:
  // Sets default values for this component's properties
  UPositionReport();

 protected:
  // Called when the game starts
  virtual void BeginPlay() override;

 public:
  // Called every frame
  virtual void TickComponent(float DeltaTime, ELevelTick TickType,
                             FActorComponentTickFunction* ThisTickFunction) override;
};
