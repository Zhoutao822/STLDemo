// vectorDemo.cpp : 定义控制台应用程序的入口点。
//vector的常见用法 vector属于变长数组

#include "stdafx.h"
#include<stdio.h>
#include<vector>
using namespace std;

void printvector(vector<int> vi) {
	for (vector<int>::iterator it = vi.begin(); it != vi.end(); it++) {
		printf("%d ", *it);
	}
	printf("size= %d\n", vi.size());
}

//int main() {
//	vector<int> vi;
//	for (int i = 0; i < 5; i++) {
//		vi.push_back(i);
//	}
//
//	vector<int>::iterator it;//迭代器iterator
//	it = vi.begin();
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", *(it + i));
//	}
//	printf("size= %d\n",vi.size());
//
//
//	vi.pop_back();
//	printvector(vi);
//
//
//	vi.insert(vi.begin()+2,-1);
//	printvector(vi);
//
//	vi.erase(vi.begin()+1);
//	printvector(vi);
//
//	vi.erase(vi.begin(),vi.begin()+2);
//	printvector(vi);
//
//
//	vi.clear();
//	printvector(vi);
//	return 0;
//}
