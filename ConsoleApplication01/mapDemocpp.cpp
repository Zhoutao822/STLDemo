// mapDemo.cpp : 定义控制台应用程序的入口点。
//map的常见用法  map可以将任何基本类型映射到任何基本类型,以键值从小到大排序
//multimap一键对多值,unordered_map只映射不排序
#include "stdafx.h"
#include<stdio.h>
#include<map>
using namespace std;

void printmap(map<char,int> mp) {
	for (map<char,int>::iterator it = mp.begin(); it != mp.end(); it++) {
		printf("(%c,%d) ", it->first,it->second);
	}
	printf("size= %d\n", mp.size());
}

//int main() {
//	map<char,int> mp;
//	int a[8] = { 1,6,3,12,44,0,-6,2222 };
//	char c[8] = { 'a','b','y','f','s','x','c','u' };
//	for (int i = 0; i < 8; i++) {
//		mp[c[i]] = a[i];
//	}
//	printmap(mp);
//
//	map<char, int>::iterator it = mp.find('f');
//	printf("(%c,%d)\n",it->first,it->second);
//	
//	mp.erase(it);
//	printmap(mp);
//
//	mp.erase(mp.find('u'), mp.end());
//	printmap(mp);
//
//	mp.clear();
//	printmap(mp);
//
//	return 0;
//}
