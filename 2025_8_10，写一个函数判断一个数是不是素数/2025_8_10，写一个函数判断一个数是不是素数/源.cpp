#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int is_pri(int x) {//����һ�����������ж��Ƿ�Ϊ�������Ƿ���1���񷵻�0
	if (1 == x || 2 == x) {
		return 1;
	}
	int i = 0;
	for (i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) {
			break;
		}
	}
	if (i > sqrt(x)) {
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	int input = 0;
	printf("������һ����������");
	scanf("%d", &input);
	if (is_pri(input)) {
		printf("\n������");
	}
	else {
		printf("\n��������");
	}
	return 0;
}