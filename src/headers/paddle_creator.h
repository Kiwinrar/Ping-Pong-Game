#pragma once

#include <raylib.h>
#include <map>
#include <string>
#include "globals.h"
using namespace GameWindowInformation;
class PaddleAttributeAndPosition{
    protected:
        void LimitMovement(Rectangle& rect);
    public:
        float positionX, positionY;
        int speed_y;
        float PaddleHeight;
        float PaddleWidth;
        int PlayerPaddleScore;
        Color PaddleColor;
        void Draw(Rectangle& rect, Color PaddleColor);
        void Update(Rectangle& rect, PlayerInfo player);
        void ResetPosition(Rectangle& rect);
};
class CpuPaddle: public PaddleAttributeAndPosition{
    public:
    void Update(Rectangle& rect, float ball_position_y);
};
PaddleAttributeAndPosition createPaddleAttributes(PlayerInfo player);
CpuPaddle createCpuPaddleAttributes(PlayerInfo player);