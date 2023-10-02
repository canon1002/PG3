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

int main() {

	int c = Min(100, 10);
	float d = Min(100.0f, 10.0f);
	double e = Min(100.0f, 10.0f);
	char f = Min('A', 'B');

	return 0;
}