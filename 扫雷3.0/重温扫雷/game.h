#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 9
#define COL 9
#define MineCount 10
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//初始化信息
void InitBoard(char Board[ROW][COL], char ch);
//打印展示
void printBoard(char Board[ROW][COL]);
//埋雷
void InputMine(char MineBoard[ROW][COL]);
//排雷
void MineSweeping(char MineBoard[ROW][COL], char ShowBoard[ROW][COL], int* R);
//标记雷
void MarkMine(char ShowBoard[ROW][COL]);
//判断输赢
void Is_win(char ShowBoard[ROW][COL], int* R);