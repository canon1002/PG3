#include <stdio.h>
#include <Windows.h>
#include <random>
#include <functional>
#include <memory>
#include "Enemy.h"

int main() {

	// 敵の宣言
	std::unique_ptr<Enemy> enemy = std::make_unique<Enemy>();

	while (enemy->GetState() != EnemyState::kEnd) {
		enemy->Update();
	}

	return 0;
}