//#include<stdio.h>
#include <thread>
#include <iostream> 
#include <chrono>
#include <string>

class Test {
public:
	std::string str;

	// コンストラクタ
	Test() = default;

	// ムーブコンストラクタ
	Test(Test&& right) noexcept {
		// std::moveで移動を行う
		this->str = std::move(right.str);
	}

	// ムーブ代入演算子
	Test& operator=(Test&& right) noexcept {
		// std::moveで移動を行う
		this->str = std::move(right.str);

		return *this;
	}

};

int main() {

	// マイクロ秒で図る
	std::chrono::microseconds ms = std::chrono::microseconds::zero();

	Test a, b;
	a.str = std::string(100000, 'a');
	// 現在時間を取得
	std::chrono::steady_clock::time_point start = std::chrono::steady_clock::now();
	//	移す	
	b = std::move(a);
	std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
	ms = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
	// double型に一度変換
	// d = double(ms.count());
	std::cout << ms << std::endl;


	return 0;
}