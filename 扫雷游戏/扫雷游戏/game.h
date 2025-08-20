#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROWS 11
#define COLS 11
#define easy_count 10
//初始化
void InitBoard(char Init[ROWS][COLS], char set);
//打印
PrintBoard(char print[ROWS][COLS]);
//设置雷
void SetMine(char set[ROWS][COLS], int count);
//排雷1.0
void FindMine1(char mine[ROWS][COLS], char show[ROWS][COLS]);