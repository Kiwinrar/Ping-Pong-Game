#include<raylib.h>
#include "headers/globals.h"
#include "headers/ball_info.h"

std::map<std::string, TypeOfBallAttribute> ballInformationFunction(){
    std::map<std::string, TypeOfBallAttribute> BallAtrribute;

    BallAtrribute["BallCoordinateX"]=GameWindowWidth/2;
    BallAtrribute["BallCoordinateY"]=GameWindowHeight/2;

    float BallRadius=8.0;
    BallAtrribute["BallRadius"]=BallRadius;

    
    BallAtrribute["BallColor"]=BallColor;
   
    BallAtrribute["BallSpeedX"]=5.0f;
    BallAtrribute["BallSpeedY"]=5.0f;

    return BallAtrribute;
}

