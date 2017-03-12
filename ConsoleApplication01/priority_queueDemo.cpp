// priority_queueDemo.cpp : 定义控制台应用程序的入口点。
//priority_queue的常见用法  队列先进先出,且按优先级排序
//只能通过top()访问队首元素
//使用pop和top前用empty判断队列是否为空
#include "stdafx.h"
#include<stdio.h>
#include<queue>
#define N 8
using namespace std;

void printpriqueue(priority_queue<int> q) {
	printf("size= %d\n", q.size());

	for (int i = 0; i < N; i++) {
		printf("%d ", q.top());
		q.pop();
	}
	printf("\n");
}

struct chartoint {
	char c;
	int a;
	friend bool operator < (chartoint ci1, chartoint ci2) {
		return ci1.a > ci2.a;
	}
}ci[N];

//int main() {
//	priority_queue<int> q;
//	priority_queue<chartoint> ciq;
//	int a[N] = { 1,6,3,12,44,0,-6,2222 };
//	char c[N] = { 'a','b','y','f','s','x','c','u' };
//
//	for (int i = 0; i < N; i++) {
//		ci[i].a = a[i];
//		ci[i].c = c[i];
//		ciq.push(ci[i]);
//	}
//	printf("size= %d\n", ciq.size());
//
//	for (int i = 0; i < N; i++) {
//		printf("(%c,%d) ", ciq.top());
//		ciq.pop();
//	}
//	printf("\n");
//
//	for (int i = 0; i < 8; i++) {
//		q.push(a[i]);
//	}
//	printpriqueue(q);
//
//	while (!q.empty()) {
//		q.pop();
//	}
//
//	if (q.empty() == true) {
//		printf("Empty\n");
//	}
//
//
//	return 0;
//}
