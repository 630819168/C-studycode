#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�������������Լ��T2,շת�����
int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d", &a, &b);
	while (c = a % b) {
		a = b;
		b = c;
	}
	printf("���Լ��Ϊ��%d", b);
	return 0;
}
