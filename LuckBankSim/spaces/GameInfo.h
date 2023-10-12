#pragma once
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;

class GameInfo 
{
public:
    explicit GameInfo();
    int leftside = 0;
    int rightside = 0;
    int upside = 0;
    int downside = 0;
    int startvalue = 0;
    int notesamount = 0;
    GameInfo Readgameinfo(GameInfo& C);

};