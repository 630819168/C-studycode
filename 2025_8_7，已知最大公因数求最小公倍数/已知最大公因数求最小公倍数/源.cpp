#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int gcd(int a, int b);
//��֪�����������С����������С������ = a * b / ���Լ��
int main() {
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int max = 0;//����max���ڴ洢�������
	int min = 0;//����min���ڴ�����С������
	max = gcd(a, b);
	min = a * b / max;
	printf("�������Ϊ��%d\n��С������Ϊ��%d\n", max, min);
		return 0;
}
int gcd(int a, int b) {//����������ĺ���
	int c = 0;
	while (c = a % b) {
		a = b;
		b = c;
	}
	return b;
}