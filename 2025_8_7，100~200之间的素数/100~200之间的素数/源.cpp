#include<stdio.h>
//打印100-200之间的素数
int main() {
	for (int i = 100; i <= 200; i++) {
		int j = 0;
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (i == j) {
			printf("%d ", i);
		}
	}	
	return 0;
}