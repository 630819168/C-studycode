#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int get_max(int a, int b);
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int max = get_max(a, b);//���ú���������ֵ������max
	printf("%d", max);
	return 0;
}
int get_max(int a, int b)//����a��b�ϴ���Ǹ���
{
	return a > b ? a : b;
}