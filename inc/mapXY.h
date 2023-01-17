#pragma once

#include <iostream>

constexpr int POSX {30};
constexpr int POSY {30};


class MapXY {

    int posMap[POSX][POSY];
    MapXY();
    ~MapXY();

    void printMap();

    void clearMap();

};
