//#include<stdio.h>
#include <thread>
#include <iostream> 
#include <chrono>
#include <string>

class MoveTest {
public:
	std::string str;

	// コンストラクタ
	MoveTest() = default;

	// ムーブコンストラクタ
	MoveTest(MoveTest&& right) noexcept {
		// std::moveで移動を行う
		this->str = std::move(right.str);
	}

	// ムーブ代入演算子
	MoveTest& operator=(MoveTest&& right) noexcept {
		// std::moveで移動を行う
		this->str = std::move(right.str);

		return *this;
	}

};

int main() {

	// 目的
	std::cout<<"1000000文字を移動とコピーで移した場合の時間を計測" << std::endl;

	// ムーブコンストラクタのテスト用クラス
	MoveTest a, b,c,d;
	a.str = std::string(1000000, 'a');
	c.str = std::string(1000000, 'c');

	//////////////////////////////////////////////
	///	移動の場合の時間計測
	//////////////////////////////////////////////

	// マイクロ秒で図る
	std::chrono::microseconds ms = std::chrono::microseconds::zero();
	// 開始時間を取得
	std::chrono::steady_clock::time_point start = std::chrono::steady_clock::now();
	//	コピーする	
	b.str = a.str;
	// 終了時間を取得
	std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
	// 差分を計算
	ms = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
	std::cout << "コピー:" << ms << std::endl;

	//////////////////////////////////////////////
	///	コピーの場合の時間計測
	//////////////////////////////////////////////

	// マイクロ秒で図る
	ms = std::chrono::microseconds::zero();
	// 開始時間を取得
	start = std::chrono::steady_clock::now();
	//	移す	
	d = std::move(c);
	// 終了時間を取得
	end = std::chrono::steady_clock::now();
	// 差分を計算
	ms = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
	std::cout << "移動:" << ms << std::endl;

	return 0;
}