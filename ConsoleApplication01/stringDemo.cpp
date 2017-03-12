 //stringDemo.cpp : 定义控制台应用程序的入口点。
//string的常见用法 string用于处理字符串问题

#include "stdafx.h"
#include<stdio.h>
#include<string>//与string.h不同
using namespace std;

void printstring(string str) {
	for (string::iterator it=str.begin(); it !=str.end();it++) {
		printf("%c", *it);
	}
	printf(" size= %d\n", str.size());//length与size功能相同
}

//int main() {
//	string str="hello world";
//	printstring(str);
//
//
//	printf("%s\n",str.c_str());//将string使用c_str变为字符数组
//
//	for (unsigned int i = 0; i < str.length(); i++) {
//		printf("%c ", str[i]);
//	}
//	printf(" size= %d\n", str.size());
//
//
//	string str2 = " OMG";
//	str.insert(5,str2);//在str[5]的位置插入str2
//	printstring(str);
//
//	string str3 = "insert";
//	str.insert(str.begin() + 10, str3.begin(), str3.begin() + 3);
//	//在str[3]位置插入str3的0-3
//	printstring(str);
//
//	str.replace(str.begin(), str.begin() + 3, str2);
//	printstring(str);
//
//
//	printstring(str.substr(2, 4));//返回从2号开始的4个字符
//
//	printf("%d", str.find(str2));
//
//
//	str.erase(str.begin()+5);
//	printstring(str);
//
//	str.erase(3,2);//从3号开始的2个字符
//	printstring(str);
//
//
//	str.clear();
//	printstring(str);
//	return 0;
//}
