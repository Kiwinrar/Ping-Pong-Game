#include <raylib.h>
#include "headers/globals.h"
#include "headers/paddle_creator.h"
void Draw_Text_Score(int& Player_1_Score, int& Player_2_Score){
    DrawText(TextFormat("%i", Player_1_Score), GameWindowWidth/4-20, 20, 80, WHITE);
    DrawText(TextFormat("%i", Player_2_Score), (GameWindowWidth/2)+(GameWindowWidth/4)+20, 20, 80, WHITE);
}