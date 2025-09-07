#include<stdio.h>
int main() {
	int count = 0;
	for (int i = 1; i <= 100; i++) {
		if (9 == i % 10) {
			printf("%d\n", i);
			count++;
		}
		if (9 == i / 10) {
			printf("%d\n", i);
			count++;
		}
	}
	printf("一共有：%d个9", count);
	return 0;
}