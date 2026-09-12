#pragma once

#include <raylib.h>
#include <map>
#include <string>
#include <variant>

using TypeOfBallAttribute = std::variant<int, float, Color>;
using namespace GameWindowInformation;

std::map<std::string, TypeOfBallAttribute> ballInformationFunction();