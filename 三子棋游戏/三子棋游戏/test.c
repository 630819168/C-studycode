#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"menu.h"
#include"game.h"

int main() {
	srand((unsigned int)time(NULL));
	int change = 0;
	do {
		menu();
		scanf("%d", &change);
		switch (change) {
		case 0:
			printf("��Ϸ�˳�\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("ѡ���������һ��\n");
				break;
		}
	}while (change);
	
	return 0;
}