#pragma once

#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <string>

constexpr int MAX {100};
class Greed
{
public:
    std::string nome[MAX];
    int size[MAX];
    int estimateTime[MAX];
    int totalClothes;


    Greed();
    ~Greed();

    void insertClothes();

    void listClothes();

    void init();

};

