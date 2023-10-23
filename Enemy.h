#pragma once

enum class EnemyState {
	kAttack,	// 攻撃 
	kShot,		// 射撃
	kLeave,		// 離脱
	kEnd,		// 終了
};

class Enemy
{
public: // メンバ関数
	Enemy();
	~Enemy();

	void Update();
	void Attack();
	void Shot();
	void Leave();
	EnemyState GetState() { return state_; }

private: // メンバ変数

	// メンバ関数ポインタ
	static void (Enemy::*spFunkTable[])();

	EnemyState state_;
};
