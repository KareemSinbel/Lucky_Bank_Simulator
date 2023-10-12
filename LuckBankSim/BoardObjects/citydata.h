#pragma once

#include "Drawable.h"

// Represents the dice of the game
class citydata : public Drawable
{

public:
    explicit citydata();
    void draw(GUI& gui) override;




};
