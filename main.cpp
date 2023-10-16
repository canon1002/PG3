#include <stdio.h>
#include <Windows.h>
#include <random>

typedef void (*PFunk)(int);

void DiceRoll(int num) {

	// ダイス結果を設定
	int diceNum = rand() % 2;

	// 時間を止める
	Sleep(500);
	printf("\n結");
	Sleep(300);
	printf("果");
	Sleep(300);
	printf("は");
	Sleep(300);
	printf("・");
	Sleep(300);
	printf("・");
	Sleep(300);
	printf("・\n\n");
	Sleep(1500);

	if (diceNum == num) {
		printf("あたり！！\n");
	}
	else
	{
		printf("ハズレ！！\n");
	}

}

void SetRollAnswer(PFunk p) {
	// 回答を入力
	printf("丁か半か選んでください\n");
	printf("丁は0、半は1で入力してください\n\n");

	int num = 0;
	scanf_s("%d", &num);

	p(num);

}

int main() {

	//乱数をリセットする
	srand(time(nullptr));
	// 関数ポインタを宣言
	PFunk p = DiceRoll;
	SetRollAnswer(p);

	return 0;
}