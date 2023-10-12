#pragma once


#include "Drawable.h"

// Represents the dice of the game
class Action : public Drawable
{

public:
    explicit Action();
    void draw(GUI& gui) override;




};