#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int get_max(int a, int b);
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int max = get_max(a, b);//调用函数求出最大值并赋给max
	printf("%d", max);
	return 0;
}
int get_max(int a, int b)//返回a和b较大的那个数
{
	return a > b ? a : b;
}