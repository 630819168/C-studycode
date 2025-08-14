#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求两个数的最大公约数T1
int main() {
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int max = a > b ? b : a;//创建max用来存储最大公因数并初始化为两数更小的那个
	while (1) {
		if (a % max == 0 && b % max == 0) {//判断max是否能被两数同时整除，能则是最大公因数，不能则往下找
			printf("最大公约数是：%d", max);
			break;
		}
		max--;
	}
	return 0;
}//两数的最大公因数一定<=两数中更小的那个数