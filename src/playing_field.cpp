#include<raylib.h>
#include "headers/globals.h"
#include "headers/playing_field.h"

void DrawPlayingField(){
    DrawRectangle(GameWindowWidth/2, 0, GameWindowWidth/2, GameWindowHeight, BackgroundBlueColor);
    DrawCircle(GameWindowWidth/2, GameWindowHeight/2, 100, LightBackgroundColor);
    DrawLine(GameWindowWidth/2, 0, GameWindowWidth/2, GameWindowHeight, DividerLineColor);
}