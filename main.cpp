#include <stdio.h>
#include <Windows.h>
#include <random>

typedef void (*PFunk)(int);

void DiceRoll(int num) {
	// n面ダイスの結果を表示
	printf("%dだよ！\n", rand() % num);
}

void SetTimeOut(PFunk p,int second) {
	// コールバック関数を呼び出す
	Sleep(second * 100);
	p(&second);
}

int main() {
	// 関数ポインタを宣言
	PFunk p;
	p = DiceRoll(6);
	SetTimeOut(p, 10);

	return 0;
}