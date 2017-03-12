// queueDemo.cpp : 定义控制台应用程序的入口点。
//queue的常见用法  queue队列先进先出，
//只能通过front()访问队首元素，或是back()访问队尾元素
//使用pop和front前用empty判断队列是否为空
#include "stdafx.h"
#include<stdio.h>
#include<queue>
#define N 8
using namespace std;

void printqueue(queue<int> q) {
	printf("size= %d\n", q.size());

	for (int i = 0; i < N;i++) {
		printf("%d ", q.front());
		q.pop();
	}
	printf("\n");
}

//int main() {
//	queue<int> q;
//	int a[N] = { 1,6,3,12,44,0,-6,2222 };
//	//char c[8] = { 'a','b','y','f','s','x','c','u' };
//	for (int i = 0; i < 8; i++) {
//		q.push(a[i]);
//	}
//	printqueue(q);
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
