#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include <random>
#include <functional>
#include <memory>
#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"

int main() {

	// 宣言
	IShape* shape[2] = { nullptr };
	// 円形
	shape[0] = new Circle();
	// 正方形
	shape[1] = new Rect();

	for (int32_t i = 0; i < 2; i++) {
		// 半径を代入
		shape[i]->SetRadius(4.0f);
		// 面積を計算
		shape[i]->Size();
		// 面積を表示する
		shape[i]->Draw();
	}

	// 解放処理
	for (int32_t i = 0; i < 2; i++) {
		delete shape[i];
	}

	return 0;
}