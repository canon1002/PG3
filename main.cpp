#include <stdio.h>
#include <list>
#include <iostream> 

// using namespace を用いて　std:: を使わずに宣言などができる
using namespace std;

void DisplayList(list<const char*> l) {

	for (list<const char*>::iterator itr = l.begin(); itr != l.end(); ++itr)
	{
		// 駅名を表示
		cout << *itr << endl;
	}

	// 表示する年代ごとにわかりやすくするために改行しておく
	cout << endl;

};

int main(){

	// 山手線の駅　1970年のリスト
	// 山手線_駅　だと長いので略称”JY”を使用
	list<const char*> JY{
		"Tokyo","Kanda","Akihabara","Okachimachi","Ueno",
		"Uguisudani","Nippori","Tabata","Komagome",
		"Suagamo","Otsuka","Ikebukuro","Mejiro","Takanobaba",
		"Shin-Okubo","Shinjuku","Yoyogi","Harajuku","Shibuya",
		"Ebisu","Meguro","Gotanda","Osaki","Shinagawa",
		"Tamachi","Hamamatsucho","Shimbashi","Yurakucho"
	};

	// 1970年の駅のリストを表示
	cout << "[1970年 山手線 駅一覧]" << endl;
	DisplayList(JY);

	for (list<const char*>::iterator itr = JY.begin(); itr != JY.end(); ++itr)
	{
		// 西日暮里駅(1971年開業) を追加
		// insertで要素を追加しようとするとイテレータの前方に追加されるので
		// イテレータが田端のときに追加する
		if (*itr == "Tabata") {
			JY.insert(itr, "Nish-Nippori");
		}
	}

	cout << "[2019年 山手線 駅一覧]" << endl;
	DisplayList(JY);

	for (list<const char*>::iterator itr = JY.begin(); itr != JY.end(); ++itr)
	{
		// 高輪ゲートウェイ駅(2020年開業) を追加
		if (*itr == "Tamachi") {
			JY.insert(itr, "Takawa Gateway");
		}
	}

	cout << "[2022年 山手線 駅一覧]" << endl;
	DisplayList(JY);

	return 0;
}