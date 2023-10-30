#pragma once
#include "IShape.h"
class Circle :
    public IShape
{
    void Size()override;
    void Draw()override;
};

