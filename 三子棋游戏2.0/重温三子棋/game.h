#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3 
#define COL 3 
#include<stdio.h>
//��ʼ������
void InitBoard(char Board[ROW][COL]);
//��ӡ����
void PrintBoard(char Board[ROW][COL]);
//����ж�
void Player(char Board[ROW][COL], char chess);
//�ж���Ϸ״̬
char Is_win(char Board[ROW][COL]);