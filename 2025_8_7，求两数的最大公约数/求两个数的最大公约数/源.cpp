#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�������������Լ��T1
int main() {
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int max = a > b ? b : a;//����max�����洢�����������ʼ��Ϊ������С���Ǹ�
	while (1) {
		if (a % max == 0 && b % max == 0) {//�ж�max�Ƿ��ܱ�����ͬʱ���������������������������������
			printf("���Լ���ǣ�%d", max);
			break;
		}
		max--;
	}
	return 0;
}//�������������һ��<=�����и�С���Ǹ���