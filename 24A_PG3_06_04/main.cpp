#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include <string>  
#include<Windows.h>
#include <functional>
#include <list>
#include<vector>
#include <iostream>
using namespace std;

int main()
{
	//�w�̃��X�g
	list<string> stationList
	{ 
		"Tokyo","Kanda","Akibahara",
		"Okasimati","Ueno","Uguisudani","Nippori",
		"Tabata","Komagome","Sugamo",
		"Otsuka","Ikebukuro","Mejiro","Takabanobaba",
		"Shin-Okubo","Shinjuku","Youogi","Harajuku",
		"Shibuya","Ebisu","Meguro","Gotanda","Osaki",
		"Shinagawa","Tamachi",
		"Hamamatsucho","Shimdashi","Yurakucho" 
	};

	printf("1970�N�̃��X�g\n");
	//list�ɂ���w���o�͂���
	for (auto itr = stationList.begin(); itr != stationList.end(); ++itr)
	{
		cout << *itr << "\n";
	}
	printf("\n");

	printf("2019�N�̃��X�g\n");
	//�C�ӂ̈ʒu�v�f�̒ǉ���for��
	for (std::list<string>::iterator itr=stationList.begin();itr !=stationList.end();++itr)
	{
		//itr�̒���Tadata����������A���s����
		if (*itr == "Tabata")
		{
			//Nishi-Nippori��\��������
			itr = stationList.insert(itr, "Nishi-Nippori");
			++itr;
		}
		
	}
	//list�ɂ���w���o�͂���
	for (auto itr = stationList.begin(); itr != stationList.end(); ++itr)
	{
		cout << *itr << "\n";
	}
	printf("\n");

	printf("2022�N�̃��X�g\n");
	//�C�ӂ̈ʒu�v�f�̒ǉ���for��
	for (std::list<string>::iterator itr = stationList.begin(); itr != stationList.end(); ++itr)
	{
		//itr�̒���Shinagawa����������A���s����
		if (*itr == "Shinagawa")
		{
			//Takanawa Gateway��\��������
			itr = stationList.insert(itr, "Takanawa Gateway");
			++itr;
		}
	}
	//list�ɂ���w���o�͂���
	for (auto itr = stationList.begin(); itr != stationList.end(); ++itr)
	{
		cout << *itr << "\n";
	}
	printf("\n");
}