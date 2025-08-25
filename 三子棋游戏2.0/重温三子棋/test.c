#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu() {
	printf("***********************\n");
	printf("********1、play********\n");
	printf("********0、exit********\n");
	printf("***********************\n");
}
void game() {
	char Board[ROW][COL];
	InitBoard(Board);
	PrintBoard(Board);
	char result = 0;
	do
	{
		printf("玩家1行动:");
		Player(Board, '*');
		result = Is_win(Board);
		if (result != 'C')
			break;
		printf("玩家2行动:");
		Player(Board, '#');
		result = Is_win(Board);
		if (result != 'C')
			break;
	} while (1);
	if (result == '*') {
		printf("玩家1胜利\n");
	}
	else if (result == '#') {
		printf("玩家2胜利\n");
	}
	else if (result == 'P') {
		printf("平局\n");
	}
}
int main() {
	int input = 0;
	do {
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input) 
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏退出");
			break;
		default:
			printf("输入错误请重新输入\n");
		}
	} while (input);
}