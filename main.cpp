#include <stdio.h>

static int Min(int a, int b) {
	if (a < b) {
		printf("%d\n", a);
		return a;
	}
	if (a > b) {
		printf("%d\n", b);
		return b;
	}
	if (a = b) {
		printf("入力された値が同じです\n");
		return 0;
	}

	return 0;
}
static float Min(float a, float b) {
	if (a < b) {
		printf("%f\n", a);
		return a;
	}
	if (a > b) {
		printf("%f\n", b);
		return b;
	}
	if (a = b) {
		printf("入力された値が同じです\n");
		return 0;
	}

	return 0;
}
static double Min(double a, double b) {
	if (a < b) {
		printf("%lf\n", a);
		return a;
	}
	if (a > b) {
		printf("%lf\n",b);
		return b;
	}
	if (a = b) {
		printf("入力された値が同じです\n");
		return 0;
	}

	return 0;
}
static char Min(const char a, const char b) {

	printf("数字以外は入力できません\n");
	return 0;
}

static int CalcCash(int cash, int time) {

	// 最初の100円を加算
	if (cash == 0) {
		cash = 100;
		return CalcCash(cash, time - 1);
	}
	
	// 時間がある場合更に働く
	if (time > 0) {
		cash = cash * 2 - 50;
		return CalcCash(cash, time - 1);
	}
	
	return cash;

}

int main() {

	int nomal = 0;
	int recursive = 0;
	int time = 1;

	// 一般的賃金の合計 よりも 再帰的賃金の合計が多くなったらループを抜ける
	while (nomal >= recursive)
	{
		//　時給を加算する
		nomal += 1072;
		recursive += CalcCash(0, time);

		//一時間ごとに現在の賃金合計を出力
		printf("勤務時間:%d時間 : 一般的な賃金合計[%d]円 再帰的な賃金合計[%d]円 \n", time, nomal, recursive);

		// 労働時間を加算( +1時間 )
		time++;

	}

	return 0;
}