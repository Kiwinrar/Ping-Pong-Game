#pragma once

#include <raylib.h>
#include <map>
#include <string>
#include <variant>


class BallAttributeAndPosition{
    public:
        float positionX, positionY;
        float speed_x, speed_y;
        int radius;
        Color ballColor;
        void Draw();
        void Update();
        void ResetPosition();
        void Wait();
        void IncreaseSpeed();
        void BallStartingRandomizer();
};

BallAttributeAndPosition createBallAttributes();