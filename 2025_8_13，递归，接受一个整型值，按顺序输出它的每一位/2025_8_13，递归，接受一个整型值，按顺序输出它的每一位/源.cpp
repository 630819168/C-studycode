#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(unsigned int x);
//接受一个无符号整数含顺序打印每一位
int main() {
	unsigned int num;
	scanf("%d", &num);//123
	print(num);//打印结果“1 2 3 ”
	return 0;
}
void print(unsigned int x) {
	if (x > 9) {//限制x小于9时递归不再继续
		print(x / 10);//每次递归n接收的数会越来越小，直到小于9便不再递归
	}
	printf("%d ", x % 10);
}
//第一层n=123，第二层n=12，第三层n=1，1<9，递归不再继续，
// 在第三层打印n%10，结果为1 
// 调用结束返回第二层打印n%10，结果为2 
// 调用结束后返回第一层打印n%10，结果为3 
// 调用结束后返回main函数