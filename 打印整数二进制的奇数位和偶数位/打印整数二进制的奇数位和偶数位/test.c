#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//打印奇数位
void printJ(int t) {
	for (int i = 30; i >= 0; i -= 2) {
		printf("%d ", ((t >> i) & 1));
	}
}
//打印偶数位
void printO(int t) {
	for (int i = 31; i >= 1; i -= 2) {
		printf("%d ", ((t >> i) & 1));
	}
}
int main() {
	int t = 10;
	printJ(t);
	printf("\n");
	printO(t);
	return 0;
}