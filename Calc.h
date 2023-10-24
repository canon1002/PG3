#pragma once
template <typename Type>

class Calc
{
public: // メンバ関数
	
	// コンストラクタ
	Calc(Type a, Type b) :a_(a), b_(b) {};
	Type Min() {
		if (a_ <= b_) {
			return static_cast<Type>(a_);

		}else {
			return static_cast<Type>(b_);
		}
	}

public:	// メンバ変数

	Type a_;
	Type b_;

private:

};

