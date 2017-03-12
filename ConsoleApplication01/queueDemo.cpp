// queueDemo.cpp : �������̨Ӧ�ó������ڵ㡣
//queue�ĳ����÷�  queue�����Ƚ��ȳ���
//ֻ��ͨ��front()���ʶ���Ԫ�أ�����back()���ʶ�βԪ��
//ʹ��pop��frontǰ��empty�ж϶����Ƿ�Ϊ��
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
