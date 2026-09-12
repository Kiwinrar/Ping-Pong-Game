#include<raylib.h>
#include "headers/ball_creator.h"

void CheckCollision(BallAttributeAndPosition& ball, Rectangle& rect1, Rectangle& rect2){
    if(CheckCollisionCircleRec(Vector2{ball.positionX, ball.positionY}, ball.radius, rect1)){
        ball.speed_x*=-1;
        ball.IncreaseSpeed();
    }
    if(CheckCollisionCircleRec(Vector2{ball.positionX, ball.positionY}, ball.radius, rect2)){
        ball.speed_x*=-1;
        ball.IncreaseSpeed();
    }
}