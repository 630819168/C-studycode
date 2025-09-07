#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int gcd(int a, int b);
//已知最大公因数求最小公倍数：最小公倍数 = a * b / 最大公约数
int main() {
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int max = 0;//创建max用于存储最大公因数
	int min = 0;//创建min用于村塾最小公倍数
	max = gcd(a, b);
	min = a * b / max;
	printf("最大公因数为：%d\n最小公倍数为：%d\n", max, min);
		return 0;
}
int gcd(int a, int b) {//求最大公因数的函数
	int c = 0;
	while (c = a % b) {
		a = b;
		b = c;
	}
	return b;
}