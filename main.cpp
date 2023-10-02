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

template<>
char Min<char>(char a, char b) {
	printf("数字以外は入力できません");
	return '\n';
}

int main(void) {

	printf("%d\n", Min(10, 12));
	printf("%f\n", Min(15.0f, 12.0f));
	printf("%lf\n", Min(13.0, 12.0));
	printf("%c", Min('s', 'd'));

	return 0;
}