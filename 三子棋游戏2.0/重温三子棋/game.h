#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3 
#define COL 3 
#include<stdio.h>
//初始化棋盘
void InitBoard(char Board[ROW][COL]);
//打印棋盘
void PrintBoard(char Board[ROW][COL]);
//玩家行动
void Player(char Board[ROW][COL], char chess);
//判断游戏状态
char Is_win(char Board[ROW][COL]);