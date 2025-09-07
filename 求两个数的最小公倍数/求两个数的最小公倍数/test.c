#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int lcmul(int a, int b) {
	int c = a > b ? a : b;
	while (1) {
		if (c % a == 0 && c % b == 0) {
			return c;
		}
		c++;
	}
}
//int maxYS(int a, int b) {
//	int c = 0;
//	while (c = a % b) {
//		a = b;
//		b = c;
//	}
//	return b;
//}
int main() {
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int min = lcmul(a, b);
	//int max = maxYS(a, b);
	printf("%d", min);

}