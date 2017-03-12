// algorithmDemo.cpp : 定义控制台应用程序的入口点。
//max(x,y),min(x,y),abs(x)(必须为整型),fabs(x)(浮点型在math.h下)
//swap(x,y),reverse(it1,it2)(将it1到it2之间的元素反转)
//next_permutation()给出一个序列在全排列中的下一个序列
//fill()将数组或容器中的某区间赋为相同值，sort()排序
//lower_bound(first,last,val)寻找在数组或容器的[first，last）范围内第一个>=val的元素的位置
//upper_bound(first,last,val)寻找在数组或容器的[first，last）范围内第一个>val的元素的位置
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
