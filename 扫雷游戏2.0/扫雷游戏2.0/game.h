#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROWS 11
#define COLS 11
#define easy_count 10
//≥ı ºªØ
void InitBoard(char Init[ROWS][COLS], char set);
//¥Ú”°
PrintBoard(char print[ROWS][COLS]);
//…Ë÷√¿◊
void SetMine(char set[ROWS][COLS], int count);
//≈≈¿◊1.0
void FindMine1(char mine[ROWS][COLS], char show[ROWS][COLS]);
//≈≈¿◊2.0
void FindMine2(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y, int* e);
//≈–∂œ ‰”Æ
void Is_win(char mine[ROWS][COLS], char show[ROWS][COLS], int* e);