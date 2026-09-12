#pragma once
#include <raylib.h>

namespace GameWindowInformation{
    inline const int GameWindowHeight=600;
    inline const int GameWindowWidth=800;
    inline Color LightBackgroundColor={173, 216, 230, 255};
    inline Color DarkBackgroundColor={0, 0, 139, 255};
    inline Color BackgroundBlueColor={0, 0, 205, 255};
    inline Color DividerLineColor={255, 255, 255, 80};
    inline Color BallColor={253, 255, 0, 255};
    enum class PlayerInfo{
    Player1,
    Player2
    };
}