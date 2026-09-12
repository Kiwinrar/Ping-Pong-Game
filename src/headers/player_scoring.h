#include<raylib.h>
#include "globals.h"
#include "ball_creator.h"
#include "paddle_creator.h"

using namespace GameWindowInformation;

void Player_Scoring_And_Reset_Ball_Position(BallAttributeAndPosition& ball, PaddleAttributeAndPosition& Player_1_paddle,PaddleAttributeAndPosition& Player_2_paddle ,bool& ballReset, Rectangle& rect1, Rectangle& rect2);