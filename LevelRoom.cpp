﻿#include "LevelRoom.h"
#include "raylib.h"
#include <iostream>
#include <stdlib.h>
#include <vector>

LevelRoom::LevelRoom()
    :x(0), y(0), size(60.0f), roomType(RoomType::ROOM),
roomColor(GRAY), outlineColor(DARKGRAY), outlineWidth(0.2f) {}

LevelRoom::LevelRoom(int posX, int posY)
    :x(posX), y(posY), size(60.0f), roomType(RoomType::ROOM),
roomColor(GRAY), outlineColor(DARKGRAY), outlineWidth(0.2f) {}

Color LevelRoom::SetRoomColor() const
{
    switch (roomType)
    {
        case RoomType::ROOM:
            return GRAY;
        case RoomType::WALL:
            return DARKGRAY;
        case RoomType::VISITED:
            return WHITE;
        case RoomType::FRONTIER:
            return SKYBLUE;
        case RoomType::COMBAT:
            return RED;
        case RoomType::TREASURE:
            return GOLD;
        case RoomType::TRAP:
            return BROWN;
        case RoomType::ENTRY:
            return PURPLE;
        case RoomType::EXIT:
            return PURPLE;
        case RoomType::NONE:
        default:
            return BLACK;
    }
}

void LevelRoom::InitRoomProbabilities()
{
    roomProbabilities =
    {
        {RoomType::COMBAT, 0.30f},
        {RoomType::TREASURE, 0.20f},
        {RoomType::TRAP, 0.10f},
    };
}
