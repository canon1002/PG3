#include "Rectangle.h"
#include <stdio.h>

void Rectangle::Size(){
	// 面積を求める
	// 直径 * 直径
	area_ = (radius_ * 2) * (radius_ * 2);
}

void Rectangle::Draw() {

	// 面積が代入されていなければ早期リターン
	if (area_ == NULL) {
		printf("面積が代入されていません\n");
		printf("Size()で面積を代入してください\n");

		// 早期リターン
		return;
	}

	// 面積を表示
	printf("この正方形の面積は%f平方cmです\n", area_);


}
