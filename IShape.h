#pragma once
class IShape
{
public:

	IShape();
	virtual ~IShape();

	virtual void SetRadius(float radius) { radius_ = radius; }
	virtual void Size() = 0;
	virtual void Draw() = 0;

protected:
	
	// 円周率
	const float pi_ = 3.14f;
	// 半径
	float radius_;
	// 面積
	float area_;

};

