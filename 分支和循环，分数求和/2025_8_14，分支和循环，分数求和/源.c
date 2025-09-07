#include<stdio.h>
int main() {
	double result = 0.0;
	for (int i = 1; i <= 100; i++) {
		if (0 == i % 2) {
			result -= 1.0 / i;
		}
		if (1 == i % 2) {
			result += 1.0 / i;
		}
	}
	printf("%lf", result);
	return 0;
}