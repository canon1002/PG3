#pragma once
#include "IShape.h"

class Rect :
	public IShape
{
public:
	Rect() = default;
	~Rect() override = default;

	void Size()override;
	void Draw()override;
};

