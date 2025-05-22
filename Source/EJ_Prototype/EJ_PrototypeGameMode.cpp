
#include "EJ_PrototypeGameMode.h"
#include "MyPlayerController.h"

AEJ_PrototypeGameMode::AEJ_PrototypeGameMode()
{
    PlayerControllerClass = AMyPlayerController::StaticClass();
}