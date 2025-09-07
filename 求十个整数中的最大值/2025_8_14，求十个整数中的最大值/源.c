#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>	

int main() {
	int a[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	int max = a[0];
	for (int i = 1; i < 10; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	printf("max:%d", max);
}