#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//初始化棋盘
void InitBoard(char Board[ROW][COL]) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			Board[i][j] = ' ';
		}
	}
}
//打印棋盘
void PrintBoard(char Board[ROW][COL]) {
	for(int i = 0; i < ROW; i++)
	{
		for(int j = 0; j < COL; j++) 
		{
			printf(" %c ", Board[i][j]);
			if (j < COL - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if(i < ROW - 1)
		{
			for (int j = 0; j < COL; j++)
			{
				printf("---");
				if (j < COL - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
//玩家动
void Player(char Board[ROW][COL], char chess) {
	int x = 0;
	int y = 0;
	do
	{
		scanf("%d%d", &x, &y);
		if(x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (Board[x - 1][y - 1] == ' ')
			{
				Board[x - 1][y - 1] = chess;
				PrintBoard(Board);
				break;
			}
			else
			{
				printf("该位置已经下过了，再试一次\n");
			}
		}
		else 
		{
			printf("超出棋盘，再试一次\n");
		}
	} while (1);
}
//判断游戏状态
char Is_win(char Board[ROW][COL]) {
	//行相同
	for (int i = 0; i < ROW; i++) {
		if (Board[i][0] == Board[i][1] && Board[i][1] == Board[i][2] && Board[i][1] != ' ') {
			return Board[i][1];
		}
	}
	//列相同
	for (int i = 0; i < COL; i++) {
		if (Board[0][i] == Board[1][i] && Board[1][i] == Board[2][i] && Board[1][i] != ' ') {
			return Board[1][i];
		}
	}
	//对角线相同
	if (Board[0][0] == Board[1][1] && Board[1][1] == Board[2][2] && Board[1][1] != ' ') {
		return Board[1][1];
	}
	if (Board[0][2] == Board[1][1] && Board[1][1] == Board[2][0] && Board[1][1] != ' ') {
		return Board[1][1];
	}
	//平局
	int count = 0;
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			if (Board[i][j] == ' ')
			{
				count++;
			}
		}
	}
	if (count == 0) 
	{
		return 'P';
	}
	return 'C';
}



