#pragma once
template <typename Type, typename Type2>

class Calc
{
public: // メンバ関数
	
	// コンストラクタ
	Calc(Type a, Type2 b) :a_(a), b_(b) {};
	Type Min() {
		if (a_ <= b_) {
			return static_cast<Type>(a_);

		}else {
			return static_cast<Type2>(b_);
		}
	}

public:	// メンバ変数

	Type a_;
	Type2 b_;

private:

};

