#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int a, b, c;
	//输入三个数
	scanf("%d%d%d", &a, &b, &c);
	//调整顺序
	if (a < b) {
		int mid = 0;
		mid = a;
		a = b;
		b = mid;
	}
	if (a < c) {
		int mid = 0;
		mid = a;
		a = c;
		c = mid;
	}
	if (b < c) {
		int mid = 0;
		mid = b;
		b = c;
		c = mid;
	}
	//输出三个数
	printf("%d,%d,%d", a, b, c);
	return 0;
}