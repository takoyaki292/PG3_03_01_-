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
	//駅のリスト
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

	printf("1970年のリスト\n");
	//listにある駅を出力する
	for (auto itr = stationList.begin(); itr != stationList.end(); ++itr)
	{
		cout << *itr << "\n";
	}
	printf("\n");

	printf("2019年のリスト\n");
	//任意の位置要素の追加のfor文
	for (std::list<string>::iterator itr=stationList.begin();itr !=stationList.end();++itr)
	{
		//itrの中にTadataがあったら、実行する
		if (*itr == "Tabata")
		{
			//Nishi-Nipporiを表示させる
			itr = stationList.insert(itr, "Nishi-Nippori");
			++itr;
		}
		
	}
	//listにある駅を出力する
	for (auto itr = stationList.begin(); itr != stationList.end(); ++itr)
	{
		cout << *itr << "\n";
	}
	printf("\n");

	printf("2022年のリスト\n");
	//任意の位置要素の追加のfor文
	for (std::list<string>::iterator itr = stationList.begin(); itr != stationList.end(); ++itr)
	{
		//itrの中にShinagawaがあったら、実行する
		if (*itr == "Shinagawa")
		{
			//Takanawa Gatewayを表示させる
			itr = stationList.insert(itr, "Takanawa Gateway");
			++itr;
		}
	}
	//listにある駅を出力する
	for (auto itr = stationList.begin(); itr != stationList.end(); ++itr)
	{
		cout << *itr << "\n";
	}
	printf("\n");
}