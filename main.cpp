#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include <random>
#include <functional>
#include <memory>
#include "Disk.h"
#include "CD.h"
#include "DVD.h"

int main() {

	// ディスクを召喚
	IDisk* disks[2] = {nullptr};
	// CD と DVD に割り当てる
	disks[0] = new CD;
	disks[1] = new DVD;
	
	// ディスクの使用
	for (int32_t i = 0; i < 2; i++) {
		disks[i]->Use();
	}

	// ディスクの破棄
	for (int32_t i = 0; i < 2; i++) {
		delete disks[i];
	}

	return 0;
}