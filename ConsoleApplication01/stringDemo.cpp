 //stringDemo.cpp : �������̨Ӧ�ó������ڵ㡣
//string�ĳ����÷� string���ڴ����ַ�������

#include "stdafx.h"
#include<stdio.h>
#include<string>//��string.h��ͬ
using namespace std;

void printstring(string str) {
	for (string::iterator it=str.begin(); it !=str.end();it++) {
		printf("%c", *it);
	}
	printf(" size= %d\n", str.size());//length��size������ͬ
}

//int main() {
//	string str="hello world";
//	printstring(str);
//
//
//	printf("%s\n",str.c_str());//��stringʹ��c_str��Ϊ�ַ�����
//
//	for (unsigned int i = 0; i < str.length(); i++) {
//		printf("%c ", str[i]);
//	}
//	printf(" size= %d\n", str.size());
//
//
//	string str2 = " OMG";
//	str.insert(5,str2);//��str[5]��λ�ò���str2
//	printstring(str);
//
//	string str3 = "insert";
//	str.insert(str.begin() + 10, str3.begin(), str3.begin() + 3);
//	//��str[3]λ�ò���str3��0-3
//	printstring(str);
//
//	str.replace(str.begin(), str.begin() + 3, str2);
//	printstring(str);
//
//
//	printstring(str.substr(2, 4));//���ش�2�ſ�ʼ��4���ַ�
//
//	printf("%d", str.find(str2));
//
//
//	str.erase(str.begin()+5);
//	printstring(str);
//
//	str.erase(3,2);//��3�ſ�ʼ��2���ַ�
//	printstring(str);
//
//
//	str.clear();
//	printstring(str);
//	return 0;
//}
