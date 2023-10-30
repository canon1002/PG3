#include "Rectangle.h"
#include <stdio.h>

void Rect::Size() {
	// 面積を求める
	// 直径 * 直径
	area_ = (radius_ * 2) * (radius_ * 2);
}

void Rect::Draw() {

	// 面積が代入されていなければ早期リターン
	if (area_ == NULL) {
		printf("面積が代入されていません\n");
		printf("Size()で面積を代入してください\n");

		// 早期リターン
		return;
	}

	// 面積を表示
	printf("この正方形の面積は%6.3f平方cmです\n", area_);


}
