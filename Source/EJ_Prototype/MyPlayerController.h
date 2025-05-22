
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

UCLASS()
class EJ_PROTOTYPE_API AMyPlayerController : public APlayerController
{
    GENERATED_BODY()
public:
    AMyPlayerController();
protected:
    virtual void SetupInputComponent() override;
private:
    UPROPERTY()
    class ABloque_Acero* SteelBlockPrototype;
    UPROPERTY()
    class ABloque_Concreto* ConcreteBlockPrototype;

    FVector LastSteelCloneLocation;
    FVector LastConcreteCloneLocation;
    bool FirstSteelClone;
    bool FirstConcreteClone;
    void OnPressG();
    void OnPressH();
};