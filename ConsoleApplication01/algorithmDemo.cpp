// algorithmDemo.cpp : �������̨Ӧ�ó������ڵ㡣
//max(x,y),min(x,y),abs(x)(����Ϊ����),fabs(x)(��������math.h��)
//swap(x,y),reverse(it1,it2)(��it1��it2֮���Ԫ�ط�ת)
//next_permutation()����һ��������ȫ�����е���һ������
//fill()������������е�ĳ���丳Ϊ��ֵͬ��sort()����
//lower_bound(first,last,val)Ѱ���������������[first��last����Χ�ڵ�һ��>=val��Ԫ�ص�λ��
//upper_bound(first,last,val)Ѱ���������������[first��last����Χ�ڵ�һ��>val��Ԫ�ص�λ��
#include "stdafx.h"
#include<stdio.h>
#include<algorithm>
using namespace std;
bool cmp(int a, int b) {
	return a > b;
}

int main() {
	
	int a[8] = { 1,6,3,12,44,0,-6,2222 };
	char c[8] = { 'a','b','y','f','s','x','c','u' };

	for (int i = 0; i < 8; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	reverse(a, a+8);
	for (int i = 0; i < 8; i++) {
		printf("%d ",a[i]);
	}
	printf("\n");

	do {
		printf("%d %d %d\n", a[0], a[1], a[2]);
	} while (next_permutation(a, a + 3));
	
	sort(a, a + 8);
	for (int i = 0; i < 8; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	sort(a, a + 8, cmp);
	for (int i = 0; i < 8; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	printf("%d,%d\n",lower_bound(a,a+8,3)-a,upper_bound(a,a+8,3)-a);


	fill(a, a + 3, 222);
	for (int i = 0; i < 8; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	

	return 0;
}
