#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//дһ���������ж��ǲ�������
int is_runyear(int y) {
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	int year = 0;
	printf("������һ����ݣ�");
	scanf("%d", &year);
	if (is_runyear(year)) {
		printf("������");
	}
	else {
		printf("��������");
	}
}