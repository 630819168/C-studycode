#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu() {
	printf("***********************\n");
	printf("********1��play********\n");
	printf("********0��exit********\n");
	printf("***********************\n");
}
void game() {
	char Board[ROW][COL];
	InitBoard(Board);
	PrintBoard(Board);
	char result = 0;
	do
	{
		printf("���1�ж�:");
		Player(Board, '*');
		result = Is_win(Board);
		if (result != 'C')
			break;
		printf("���2�ж�:");
		Player(Board, '#');
		result = Is_win(Board);
		if (result != 'C')
			break;
	} while (1);
	if (result == '*') {
		printf("���1ʤ��\n");
	}
	else if (result == '#') {
		printf("���2ʤ��\n");
	}
	else if (result == 'P') {
		printf("ƽ��\n");
	}
}
int main() {
	int input = 0;
	do {
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input) 
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ�˳�");
			break;
		default:
			printf("�����������������\n");
		}
	} while (input);
}