#include <stdio.h>

template <typename T>
T Min(T a, T b) 
{
	if (a < b) {
		return a;
	}
	else {
		return b;
	}
}

char* Min(char a, char b) {
	static char str[] = "数字以外は入力できません";
	return str;
}

int main(void) {

	printf("%d\n", Min(10, 12));
	printf("%f\n", Min(15.0f, 12.0f));
	printf("%lf\n", Min(13.0, 12.0));
	printf("%s\n", Min('s', 'd'));

	return 0;
}