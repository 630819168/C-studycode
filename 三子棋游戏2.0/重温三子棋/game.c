#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//��ʼ������
void InitBoard(char Board[ROW][COL]) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			Board[i][j] = ' ';
		}
	}
}
//��ӡ����
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
//��Ҷ�
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
				printf("��λ���Ѿ��¹��ˣ�����һ��\n");
			}
		}
		else 
		{
			printf("�������̣�����һ��\n");
		}
	} while (1);
}
//�ж���Ϸ״̬
char Is_win(char Board[ROW][COL]) {
	//����ͬ
	for (int i = 0; i < ROW; i++) {
		if (Board[i][0] == Board[i][1] && Board[i][1] == Board[i][2] && Board[i][1] != ' ') {
			return Board[i][1];
		}
	}
	//����ͬ
	for (int i = 0; i < COL; i++) {
		if (Board[0][i] == Board[1][i] && Board[1][i] == Board[2][i] && Board[1][i] != ' ') {
			return Board[1][i];
		}
	}
	//�Խ�����ͬ
	if (Board[0][0] == Board[1][1] && Board[1][1] == Board[2][2] && Board[1][1] != ' ') {
		return Board[1][1];
	}
	if (Board[0][2] == Board[1][1] && Board[1][1] == Board[2][0] && Board[1][1] != ' ') {
		return Board[1][1];
	}
	//ƽ��
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



