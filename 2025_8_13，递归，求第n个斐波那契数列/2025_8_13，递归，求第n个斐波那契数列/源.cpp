#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int fib1(int n) {//�ݹ鷽ʽ��Ч�ʵͣ�
//	if (n <= 2) {
//		return 1;
//	}
//	else {
//		return fib1(n - 1) + fib1(n - 2);
//	}
//}
int fib2(int n) {//�ݹ�������ȱ�ݵ�ʱ���Ҫ�õ����ķ�ʽʵ��
	if (n <= 2) {
		return 1;
	}
	if (n > 2) {
		int result = 0;
		for (int i = 1, j = 1, count = 2; count < n; count++) {
			result = i + j;
			i = j;
			j = result;
		}
		return result;
	}
}

int main() {
	int n = 1;
	scanf("%d", &n);
	printf("%d", fib2(n));
	return 0;
}