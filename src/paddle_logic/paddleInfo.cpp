#include <raylib.h>
#include <map>
#include <string>
#include "headers/globals.h"

using namespace GameWindowInformation;

std::map<std::string, float> PaddleInformationFunction(){
    std::map<std::string, float> PaddleAttrdibute;
    PaddleAttrdibute["PaddleWidth"]=8.0f;
    PaddleAttrdibute["PaddleHeight"]=100.0f;
    PaddleAttrdibute["PaddleCoordinateY"]=GameWindowHeight/2-(PaddleAttrdibute["PaddleHeight"]/2);
    PaddleAttrdibute["PlayerPaddleScore"]=0;
    return PaddleAttrdibute;
}