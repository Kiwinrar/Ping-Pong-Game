#include<raylib.h>
#include "headers/globals.h"
#include "headers/ball_creator.h"
#include "headers/paddleInfo.h"
#include "headers/paddle_creator.h"
#include "headers/collision_check.h"
#include "headers/player_scoring.h"
#include "headers/playing_field.h"
#include "headers/text_score.h"

using namespace GameWindowInformation;

int main(){   
    BallAttributeAndPosition ball=createBallAttributes();

    PaddleAttributeAndPosition Player_1_paddle=createPaddleAttributes(PlayerInfo::Player1);
    CpuPaddle Player_2_paddle=createCpuPaddleAttributes(PlayerInfo::Player2);

    Rectangle rect1={Player_1_paddle.positionX, Player_1_paddle.positionY, Player_1_paddle.PaddleWidth, Player_1_paddle.PaddleHeight};
    Rectangle rect2={Player_2_paddle.positionX, Player_2_paddle.positionY, Player_2_paddle.PaddleWidth, Player_2_paddle.PaddleHeight};

    InitWindow(GameWindowWidth, GameWindowHeight, "Ping Pong");
    SetTargetFPS(60);

    while(WindowShouldClose()==false){
        Player_1_paddle.Update(rect1, PlayerInfo::Player1);
        Player_2_paddle.Update(rect2, ball.positionY);

        BeginDrawing();
        ClearBackground(DarkBackgroundColor);
        DrawPlayingField();

        ball.Update();

        bool ballReset=false;
        
        CheckCollision(ball, rect1, rect2);
        Player_Scoring_And_Reset_Ball_Position(ball, Player_1_paddle, Player_2_paddle, ballReset, rect1, rect2);      

        ball.Draw();
        Player_1_paddle.Draw(rect1, Player_1_paddle.PaddleColor);
        Player_2_paddle.Draw(rect2, Player_2_paddle.PaddleColor);

        Draw_Text_Score(Player_1_paddle.PlayerPaddleScore, Player_2_paddle.PlayerPaddleScore);
        
        EndDrawing();

        if(ballReset){
            ball.Wait();
            ball.BallStartingRandomizer();
        }
    }
    CloseWindow();
    return 0;
}