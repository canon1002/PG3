#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include <random>
#include <functional>
#include <memory>
#include "Calc.h"

int main() {

	// int
	std::unique_ptr<Calc<int,int>> b1 = std::make_unique<Calc<int,int>>(4, 7);
	// float
	std::unique_ptr<Calc<float,float>> b2 = std::make_unique<Calc<float,float>>(0.0012f, 0.04003f);
	// double
	std::unique_ptr<Calc<double,double>> b3 = std::make_unique<Calc<double,double>>(2.003367, 1.4142);
	// int + float
	std::unique_ptr<Calc<int,float>> c1 = std::make_unique<Calc<int,float>>(54, 7.5f);
	// int + double 
	std::unique_ptr<Calc<int,double>> c2 = std::make_unique<Calc<int,double>>(4371, 0.1753f);
	// float + double
	std::unique_ptr<Calc<float,double>> c3 = std::make_unique<Calc<float,double>>(6.0893f, 99.414);

	printf("<int,int>2つの数値の小さい方の値は%d\n", b1->Min());
	printf("<float,float>2つの数値の小さい方の値は%lf\n", b2->Min());
	printf("<double,double>2つの数値の小さい方の値は%lf\n", b3->Min());
	printf("<int,float>2つの数値の小さい方の値は%f\n", c1->Min());
	printf("<int,double>2つの数値の小さい方の値は%lf\n", c2->Min());
	printf("<float,double>2つの数値の小さい方の値は%lf\n", c3->Min());
	
	return 0;
}