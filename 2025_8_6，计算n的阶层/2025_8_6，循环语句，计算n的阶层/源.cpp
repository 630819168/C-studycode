#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int n = 0;
	int result = 1;
	scanf("%d", &n);
	//求n的阶层并赋给result
	for (int i = 1; i <= n; i++){
		result *= i;
	}
	printf("%d的阶层为：%d", n, result);
	return 0;
}