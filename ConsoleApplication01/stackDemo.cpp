// stackDemo.cpp : �������̨Ӧ�ó������ڵ㡣
//stack�ĳ����÷�  stack�����Ƚ������
//ֻ��ͨ��top()����ջ��Ԫ��
//ʹ��pop��topǰ��empty�ж϶����Ƿ�Ϊ��
#include "stdafx.h"
#include<stdio.h>
#include<stack>
#define N 8
using namespace std;

void printstack(stack<int> st) {
	printf("size= %d\n", st.size());

	for (int i = 0; i < N; i++) {
		printf("%d ", st.top());
		st.pop();
	}
	printf("\n");
}

//int main() {
//	stack<int> st;
//	int a[N] = { 1,6,3,12,44,0,-6,2222 };
//	//char c[8] = { 'a','b','y','f','s','x','c','u' };
//	for (int i = 0; i < 8; i++) {
//		st.push(a[i]);
//	}
//	printstack(st);
//
//	while (!st.empty()) {
//		st.pop();
//	}
//
//	if (st.empty() == true) {
//		printf("Empty\n");
//	}
//
//
//	return 0;
//}
