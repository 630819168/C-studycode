#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求两个数最小公倍数
//若已知最大公约数，则最小公倍数 = a * b / 最大公约数
int main() {
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int c = a > b ? a : b;
	while (1) {
		if (c % a == 0 && c % b == 0) {
			printf("最小公倍数为：%d", c);
			break;
		}
		else {
			c++;
		}
	}
	return 0;
}