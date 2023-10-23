#include "Enemy.h"
#include <stdio.h>
#include <Windows.h>
#include <functional>


// メンバ関数ポインタ
void (Enemy::* Enemy::spFunkTable[])() = {
	&Enemy::Attack,
	&Enemy::Shot,
	&Enemy::Leave
};

Enemy::Enemy()
{
	state_ = EnemyState::kAttack;
}

Enemy::~Enemy()
{

}

void Enemy::Update() {

	// テーブルから関数を呼び出す
	(this->*spFunkTable[static_cast<size_t>(state_)])();

}

void Enemy::Attack() {
	printf("近接攻撃を行った！\n");
	state_ = EnemyState::kShot;
}

void Enemy::Shot() {
	printf("零距離射撃を行った！\n");
	state_ = EnemyState::kLeave;
}

void Enemy::Leave() {
	printf("帰っていった...\n");
	state_ = EnemyState::kEnd;
}
