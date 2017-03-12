// pairDemo.cpp : 定义控制台应用程序的入口点。
//pair的常见用法  pair可以将两个元素绑定，但不需要结构体

#include "stdafx.h"
#include<stdio.h>
#include<utility>
#include<map>

#define N 8
using namespace std;

void printpair(pair<char,int> p) {
	printf("(%c,%d)\n", p.first,p.second);
}


//int main() {
//	pair<char, int> p[N];
//	map<char, int> mp;
//	int a[N] = { 1,6,3,12,44,0,-6,2222 };
//	char c[8] = { 'a','b','y','f','s','x','c','u' };
//	
//	for (int i = 0; i < N; i++) {
//		p[i].first = c[i];
//		p[i].second = a[i];
//		printpair(p[i]);
//		mp.insert(p[i]);
//	}
//
//	for (map<char, int>::iterator it = mp.begin(); it != mp.end(); it++) {
//		printf("(%c,%d) ", it->first, it->second);
//	}
//	printf("size= %d\n", mp.size());
//
//	return 0;
//}
