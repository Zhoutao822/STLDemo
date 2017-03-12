// stackDemo.cpp : 定义控制台应用程序的入口点。
//stack的常见用法  stack队列先进后出，
//只能通过top()访问栈顶元素
//使用pop和top前用empty判断队列是否为空
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
