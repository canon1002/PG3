#include "Circle.h"
#include <stdio.h>

void Circle::Size() {

	// 面積を求める
	//	半径 * 半径 * 円周率(3.14)
	area_ = radius_ * radius_ * pi_;

}

void Circle::Draw() {

	// 面積が代入されていなければ早期リターン
	if (area_ == NULL) {
		printf("面積が代入されていません\n");
		printf("Size()で面積を代入してください\n");
		
		// 早期リターン
		return;
	}

	// 面積を表示
	printf("この円の面積は%f平方cmです\n", area_);

}
