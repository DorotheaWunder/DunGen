﻿#ifndef ROOM_H
#define ROOM_H
#include <memory>
#include <stdlib.h>
#include "raylib.h"

enum class RoomType
{
    NONE,
    NORMAL,
    COMBAT,
    TREASURE,
    ENTRY,
    EXIT
};

class LevelRoom
{
public:
    int x,y;
    int size;
    RoomType roomType;
    Color roomColor;
    Color outlineColor;
    float outlineWidth;

    LevelRoom();
    LevelRoom(int posX, int posY);

    int GetX() const { return x; }
    int GetY() const { return y; }
    RoomType GetRoomType() const { return roomType; }
    Color GetRoomColor() const { return roomColor; }
    Color GetOutlineColor() const { return outlineColor; }
    float GetOutlineWidth() const { return outlineWidth; }
};

#endif //ROOM_H
