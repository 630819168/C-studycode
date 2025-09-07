#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求两个数的最大公约数T2,辗转相除法
int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d", &a, &b);
	while (c = a % b) {
		a = b;
		b = c;
	}
	printf("最大公约数为：%d", b);
	return 0;
}
