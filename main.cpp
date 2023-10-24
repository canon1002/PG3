#include <stdio.h>
#include <Windows.h>
#include <random>
#include <functional>
#include <memory>
#include "Calc.h"

int main() {

	// int
	std::unique_ptr<Calc<int>> b1 = std::make_unique<Calc<int>>(4, 7);
	// float
	std::unique_ptr<Calc<float>> b2 = std::make_unique<Calc<float>>(0.0012f, 0.04003f);
	// double
	std::unique_ptr<Calc<double>> b3 = std::make_unique<Calc<double>>(2.003367, 1.41421456);

	printf("2つの数値の小さい方の値は%d\n", b1->Min());
	printf("2つの数値の小さい方の値は%f\n", b2->Min());
	printf("2つの数値の小さい方の値は%lf\n", b3->Min());

	return 0;
}