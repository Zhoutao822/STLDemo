// mapDemo.cpp : �������̨Ӧ�ó������ڵ㡣
//map�ĳ����÷�  map���Խ��κλ�������ӳ�䵽�κλ�������,�Լ�ֵ��С��������
//multimapһ���Զ�ֵ,unordered_mapֻӳ�䲻����
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
