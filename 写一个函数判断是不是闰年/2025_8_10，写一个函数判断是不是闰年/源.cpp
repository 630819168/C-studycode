#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//写一个函数来判断是不是润年
int is_runyear(int y) {
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	int year = 0;
	printf("请输入一个年份：");
	scanf("%d", &year);
	if (is_runyear(year)) {
		printf("是闰年");
	}
	else {
		printf("不是闰年");
	}
}