#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int n = 0;
	int result = 1;
	scanf("%d", &n);
	//��n�Ľײ㲢����result
	for (int i = 1; i <= n; i++){
		result *= i;
	}
	printf("%d�Ľײ�Ϊ��%d", n, result);
	return 0;
}