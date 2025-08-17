#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_string(int x) {
	if (x > 9) {
		return x % 10 + my_string(x / 10);
	}
	else {
		return x;
	}
}
int main() {
	int input = 0;
	scanf("%d", &input);
	int result = my_string(input);
	printf("%d", result);
	return 0;
}