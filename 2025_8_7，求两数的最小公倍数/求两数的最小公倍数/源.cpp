#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����������С������
//����֪���Լ��������С������ = a * b / ���Լ��
int main() {
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int c = a > b ? a : b;
	while (1) {
		if (c % a == 0 && c % b == 0) {
			printf("��С������Ϊ��%d", c);
			break;
		}
		else {
			c++;
		}
	}
	return 0;
}