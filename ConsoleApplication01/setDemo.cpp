// setDemo.cpp : �������̨Ӧ�ó������ڵ㡣
//set�ĳ����÷�  set�����ڲ��Զ������Ҳ����ظ�Ԫ�ص�����

#include "stdafx.h"
#include<stdio.h>
#include<set>
using namespace std;

void printset(set<int> st) {
	for (set<int>::iterator it = st.begin(); it != st.end(); it++) {
		printf("%d ", *it);
	}
	printf("size= %d\n", st.size());
}

//int main() {
//	set<int> st;
//	int a[8] = { 1,6,3,12,44,0,-6,2222 };
//	for (int i = 0; i < 8; i++) {
//		st.insert(a[i]);
//	}
//	printset(st);
//
//
//	set<int>::iterator it;//������iterator
//	it = st.find(2222);
//	printf("%d\n", *it);
//
//
//	st.erase(st.begin());
//	printset(st);
//
//	st.erase(44);
//	printset(st);
//
//	st.erase(st.find(12), st.end());
//	printset(st);
//
//
//	st.clear();
//	printset(st);
//	return 0;
//}
