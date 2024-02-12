#include <stdio.h>
#include <Windows.h>
#include <random>

typedef void (*PFunk)(int);

void DisplayResult(int num) {

	// ダイス結果を設定
	int diceNum = rand() % 2;

	if (diceNum == num) {
		printf("あたり！！\n\n\n");
	}
	else
	{
		printf("ハズレ！！\n\n\n");
	}

}

void SetRollAnswer(PFunk p) {
	

	

}

void setTimeout(PFunk p, int second) {

	// 回答を入力
	printf("丁か半か選んでください\n");
	printf("丁は0、半は1で入力してください\n\n");

	// 数値を保存
	int num = 0;
	scanf_s("%d", &num);

	printf("\n結果は...\n\n");

	// seconnd秒間停止する
	Sleep(second * 1000);

	p(num);
}

int main() {

	while (1)
	{

		//乱数をリセットする
		srand(time(nullptr));
		// 関数ポインタを宣言
		PFunk p;
		p = &DisplayResult;
		// setTimeout関数を呼び出して3秒間停止後に結果を表示
		setTimeout(p, 3);

	}

	return 0;
}