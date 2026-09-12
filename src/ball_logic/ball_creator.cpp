#include<raylib.h>
#include "headers/globals.h"
#include "headers/ball_info.h"
#include "headers/ball_creator.h"
#include <cmath>
#include <thread>
#include <chrono>
#include <random>

BallAttributeAndPosition ball;

void BallAttributeAndPosition::Draw(){
    DrawCircle(positionX, positionY, radius, ballColor);
}
void BallAttributeAndPosition::BallStartingRandomizer(){
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distr(1, 2);
        speed_x=std::abs(speed_x)*(distr(gen)==1 ? 1.0f : -1.0f);
        speed_y=std::abs(speed_y)*(distr(gen)==1 ? 1.0f : -1.0f);
}
void BallAttributeAndPosition::Update(){
    positionX+=speed_x;
    positionY+=speed_y;

    if(positionY+radius>=static_cast<float>(GetScreenHeight()) || positionY-radius<=0){
        speed_y*=-1;
    }
    if(positionX+radius>=static_cast<float>(GetScreenWidth()) || positionX-radius<=0){
        speed_x*=-1;
    }
}
void BallAttributeAndPosition::IncreaseSpeed(){
    constexpr float max_speed=10.0f;
    constexpr float speed_increment=1.0f;

    if(std::abs(speed_x)<max_speed){
        speed_x += std::copysign(speed_increment, speed_x);
    }
    if(std::abs(speed_y)<max_speed){
        speed_y += std::copysign(speed_increment, speed_y);
    }
}
void BallAttributeAndPosition::ResetPosition(){
    const auto BallAttribute=ballInformationFunction();

    positionX=std::get<int>(BallAttribute.at("BallCoordinateX"));
    positionY=std::get<int>(BallAttribute.at("BallCoordinateY"));

    speed_x=std::get<float>(BallAttribute.at("BallSpeedX"));
    speed_y=std::get<float>(BallAttribute.at("BallSpeedY"));
    
}
void BallAttributeAndPosition::Wait(){
    std::this_thread::sleep_for(std::chrono::seconds(1));
}
BallAttributeAndPosition createBallAttributes(){
    const auto BallAtrributes=ballInformationFunction();

    int BallCoordinateX=std::get<int>(BallAtrributes.at("BallCoordinateX")); 
    int BallCoordinateY=std::get<int>(BallAtrributes.at("BallCoordinateY"));
    float BallRadius=std::get<float>(BallAtrributes.at("BallRadius"));
    Color BallColor=std::get<Color>(BallAtrributes.at("BallColor"));
    float BallSpeedX=std::get<float>(BallAtrributes.at("BallSpeedX"));
    float BallSpeedY=std::get<float>(BallAtrributes.at("BallSpeedY"));

    ball.speed_x=BallSpeedX;
    ball.speed_y=BallSpeedY;
    ball.positionX=BallCoordinateX;
    ball.positionY=BallCoordinateY;
    ball.radius=BallRadius;
    ball.ballColor=BallColor;
    
    return ball;
}

