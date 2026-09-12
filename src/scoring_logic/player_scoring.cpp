#include <raylib.h>
#include "headers/globals.h"
#include "headers/ball_creator.h"
#include "headers/paddle_creator.h"

void Player_Scoring_And_Reset_Ball_Position(BallAttributeAndPosition& ball, PaddleAttributeAndPosition& Player_1_paddle, PaddleAttributeAndPosition& Player_2_paddle, bool& ballReset, Rectangle& rect1, Rectangle& rect2){
    if(ball.positionX+ball.radius>=GameWindowWidth){
            Player_1_paddle.PlayerPaddleScore++;
            ball.ResetPosition();
            Player_1_paddle.ResetPosition(rect1);
            Player_2_paddle.ResetPosition(rect2);
            ballReset=true;
        }
        else if(ball.positionX-ball.radius<=0){
            Player_2_paddle.PlayerPaddleScore++;
            ball.ResetPosition();
            Player_1_paddle.ResetPosition(rect1);
            Player_2_paddle.ResetPosition(rect2);
            ballReset=true;
        }
}