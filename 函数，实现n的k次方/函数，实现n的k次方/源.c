#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
double n_k(int a, int b) {
	if (b == 0) {
		return 1.0;	
	}
	else if(b > 0) {
		return a * n_k(a, b - 1);
	}
	else {
		return 1.0 / n_k(a, -b);
	}
}
int main() {
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double result = n_k(n, k);
	printf("%lf", result);
	return 0;
}