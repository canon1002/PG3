#include <stdio.h>
#include <Windows.h>
#include <random>
#include <functional>

typedef void (*PFunk)(int);

/// <summary>
/// 回答を入力して返す関数
/// </summary>
/// <returns>入力した回答</returns>
int SetAnswer() {
	// 回答を入力
	printf("丁か半か選んでください\n");
	printf("丁は0、半は1で入力してください\n\n");
	int num = 0;
	scanf_s("%d", &num);

	// 入力した値を返す
	return num;
}

/// <summary>
/// 一時停止する
/// </summary>
/// <param name="waitTime">停止する時間</param>
void SetTImeout(int waitTime) {

	// システムメッセージを表示
	printf("\n結果は...\n\n");

	// 時間を止める
	Sleep(waitTime);

}

int main() {

	//乱数をリセットする
	srand(time(nullptr));
	// ランダムで正解を代入
	int diceNum = rand() % 2;
	// 回答を保存する
	int answerNun = -1;

	// ラムダ式
	// ラムダキャプチャを&diceNumにして参照できるように
	std::function<void(int)> answer = [&diceNum](int answerNum) {// ダイス結果を設定

		if (diceNum == answerNum) {
			printf("あたり！！\n\n");
		}
		else
		{
			printf("ハズレ！！\n\n");
		}
	};

	// ループ可能にしておく
	while (true)
	{
		// 答えを記入させる
		answerNun = SetAnswer();
		// 結果を待つ
		SetTImeout(3000);
		// 結果を出す(ラムダ式の引数にSetAnswerで代入した数値を入れる)
		answer(answerNun);
	}

	return 0;
}