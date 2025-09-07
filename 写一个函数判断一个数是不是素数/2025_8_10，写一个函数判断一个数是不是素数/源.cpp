#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int is_pri(int x) {//定义一个函数用于判断是否为素数，是返回1，否返回0
	if (1 == x || 2 == x) {
		return 1;
	}
	int i = 0;
	for (i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) {
			break;
		}
	}
	if (i > sqrt(x)) {
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	int input = 0;
	printf("请输入一个正整数：");
	scanf("%d", &input);
	if (is_pri(input)) {
		printf("\n是素数");
	}
	else {
		printf("\n不是素数");
	}
	return 0;
}