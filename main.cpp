#include<stdio.h>
#include<thread>
#include <iostream> 

void DisplayWord(const char* word) {

	std::cout << word << std::endl;

}

int main() {

	// thread
	const char* th1_string = "thread1";
	const char* th2_string = "thread2";
	const char* th3_string = "thread3";

	// 並列処理を行う
	// .joinで動作完了を待つ
	std::thread th1(DisplayWord, th1_string);
	th1.join();

	std::thread th2(DisplayWord, th2_string);
	th2.join();

	std::thread th3(DisplayWord, th3_string);
	th3.join();


	return 0;
}