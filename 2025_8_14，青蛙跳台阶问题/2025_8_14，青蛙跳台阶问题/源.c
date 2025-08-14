#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int jump1(int n) {
	if (n <= 2) {
		return n;
	}
	else {
		return jump1(n - 1) + jump1(n - 2);
	}
}
int jump2(int n) {
	if (n <= 2) {
		return n;
	}
	else {
		int a = 1;
		int b = 2;
		for (int i = 3; i <= n; i++) {
			int t = b;
			b = a + b;
			a = t;
		}
		return b;
	}
}
int main() {
	int n = 0;
	int result1 = 0;
	int result2 = 0;
	scanf("%d", &n);
	result1 = jump1(n);
	result2 = jump2(n);
	printf("result1£º%d\nresult2£º%d\n", result1, result2);
}