#include <raylib.h>
#include <map>
#include <string>
#include "headers/paddle_creator.h"
#include "headers/paddleInfo.h"

void PaddleAttributeAndPosition::Draw(Rectangle& rect, Color RectangleColor){
    DrawRectangleRounded(rect,1.0f, 100, RectangleColor);
}
void PaddleAttributeAndPosition::ResetPosition(Rectangle& rect){
    const auto PaddleAttributes=PaddleInformationFunction();
    rect.y=PaddleAttributes.at("PaddleCoordinateY");
}
void PaddleAttributeAndPosition::LimitMovement(Rectangle& rect){
    if(rect.y<=0) rect.y=0;
    else if(rect.y+rect.height>=GameWindowHeight) rect.y=GameWindowHeight-rect.height;
}
void CpuPaddle::Update(Rectangle& rect, float ball_position_y){
    if(rect.y+rect.height/2>ball_position_y){
        rect.y-=(speed_y-1.0f);
    }else if(rect.y+rect.height/2<ball_position_y){
        rect.y+=(speed_y-1.0f);
    }
    LimitMovement(rect);
    positionY=rect.y;
}
void PaddleAttributeAndPosition::Update(Rectangle& rect, PlayerInfo player){
        if(IsKeyDown(KEY_UP) && player==PlayerInfo::Player2){
            rect.y-=speed_y;
        }else if(IsKeyDown(KEY_DOWN) && player==PlayerInfo::Player2){
            rect.y+=speed_y;
        }
        if(IsKeyDown(KEY_W) && player==PlayerInfo::Player1){
            rect.y-=speed_y;
        }else if(IsKeyDown(KEY_S) && player==PlayerInfo::Player1){
            rect.y+=speed_y;
        }
        LimitMovement(rect);
}
PaddleAttributeAndPosition createPaddleAttributes(PlayerInfo player){
    PaddleAttributeAndPosition paddle;
    const auto PaddleAttributes=PaddleInformationFunction();

    float PaddleHeight=(PaddleAttributes.at("PaddleHeight"));
    float PaddleWidth=(PaddleAttributes.at("PaddleWidth"));
    float PaddleCoordinateY=(PaddleAttributes.at("PaddleCoordinateY"));
    int PlayerPaddleScore=(PaddleAttributes.at("PlayerPaddleScore"));
    paddle.speed_y=10;
    paddle.positionY=PaddleCoordinateY;
    paddle.PaddleHeight=PaddleHeight;
    paddle.PaddleWidth=PaddleWidth;
    paddle.PaddleColor=WHITE;

    paddle.PlayerPaddleScore=PlayerPaddleScore;

    if(player==PlayerInfo::Player1){
        paddle.positionX=5.0f;
    }else{
        paddle.positionX=GameWindowWidth-paddle.PaddleWidth-5.0f;
    }

    return paddle;
}

CpuPaddle createCpuPaddleAttributes(PlayerInfo player){
    CpuPaddle paddle;
    static_cast<PaddleAttributeAndPosition&>(paddle)=createPaddleAttributes(player);
    return paddle;
}