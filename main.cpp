#include <stdio.h>
#include <list>
#include <iostream> 

// using namespace ��p���ā@std:: ���g�킸�ɐ錾�Ȃǂ��ł���
using namespace std;

void DisplayList(list<const char*> l) {

	for (list<const char*>::iterator itr = l.begin(); itr != l.end(); ++itr)
	{
		// �w����\��
		cout << *itr << endl;
	}

	// �\������N�ゲ�Ƃɂ킩��₷�����邽�߂ɉ��s���Ă���
	cout << endl;

};

int main(){

	// �R����̉w�@1970�N�̃��X�g
	// �R���_�w�@���ƒ����̂ŗ��́hJY�h���g�p
	list<const char*> JY{
		"Tokyo","Kanda","Akihabara","Okachimachi","Ueno",
		"Uguisudani","Nippori","Tabata","Komagome",
		"Suagamo","Otsuka","Ikebukuro","Mejiro","Takanobaba",
		"Shin-Okubo","Shinjuku","Yoyogi","Harajuku","Shibuya",
		"Ebisu","Meguro","Gotanda","Osaki","Shinagawa",
		"Tamachi","Hamamatsucho","Shimbashi","Yurakucho"
	};

	// 1970�N�̉w�̃��X�g��\��
	cout << "[1970�N �R��� �w�ꗗ]" << endl;
	DisplayList(JY);

	for (list<const char*>::iterator itr = JY.begin(); itr != JY.end(); ++itr)
	{
		// �����闢�w(1971�N�J��) ��ǉ�
		// insert�ŗv�f��ǉ����悤�Ƃ���ƃC�e���[�^�̑O���ɒǉ������̂�
		// �C�e���[�^���c�[�̂Ƃ��ɒǉ�����
		if (*itr == "Tabata") {
			JY.insert(itr, "Nish-Nippori");
		}
	}

	cout << "[2019�N �R��� �w�ꗗ]" << endl;
	DisplayList(JY);

	for (list<const char*>::iterator itr = JY.begin(); itr != JY.end(); ++itr)
	{
		// ���փQ�[�g�E�F�C�w(2020�N�J��) ��ǉ�
		if (*itr == "Tamachi") {
			JY.insert(itr, "Takawa Gateway");
		}
	}

	cout << "[2022�N �R��� �w�ꗗ]" << endl;
	DisplayList(JY);

	return 0;
}