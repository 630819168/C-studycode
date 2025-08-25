#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//初始化
void InitBoard(char Board[ROW][COL], char ch) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			Board[i][j] = ch;
		}
	}
}
//打印展示
void printBoard(char Board[ROW][COL]) {
	printf("\n*************扫雷游戏*************\n");
	printf(" 0|");
	for(int i = 1; i <= COL; i++)
	{
		printf(" %d ", i);
	}
	printf("\n");
	printf("--|");
	for (int i = 1; i <= COL; i++)
	{
		printf("---");
	}
	printf("\n");
	for (int i = 0; i < ROW; i++) {
		printf(" %d|", i+1);
		for (int j = 0; j < COL; j++) {
			printf(" %c ", Board[i][j]);
		}
		printf("\n");
	}
	printf("*************扫雷游戏*************\n\n");
}
//埋雷
void InputMine(char MineBoard[ROW][COL]) {
	int x = 0;
	int y = 0;
	int count = MineCount;
	while(count) 
	{
		x = rand() % 9;
		y = rand() % 9;
		if(MineBoard[x][y] == '0')
		{
			MineBoard[x][y] = '1';
			count--;
		}
	}
}
//排雷
//--数雷
char CountMine(char MineBoard[ROW][COL], int x, int y)
{
	int count = 0;
	for (int i = x - 1; i <= x + 1; i++) 
	{
		for (int j = y - 1; j <= y + 1; j++)
		{
			if (i < 0 || i >= ROW || j < 0 || j >= COL)
				continue;
			if (MineBoard[i][j] == '1')
			{
				count++;
			}
		}
	}
	if (count == 0) 
		return ' ';
	if(count > 0)
	return count + '0';
}
//--展开函数
void Expand(char MineBoard[ROW][COL], char ShowBoard[ROW][COL], int x, int y)
{
	char count = CountMine(MineBoard, x, y);
	if (count == ' ')
	{
		ShowBoard[x][y] = count;
		for (int i = x - 1; i <= x + 1; i++)
		{
			for (int j = y - 1; j <= y + 1; j++)
			{
				if (i < 0 || i >= ROW || j < 0 || j >= COL)
					continue;
				if (ShowBoard[i][j] == '*')
				{
					Expand(MineBoard, ShowBoard, i, j);
				}
			}
		}
	}
	else
		ShowBoard[x][y] = count;
}
//--
void MineSweeping(char MineBoard[ROW][COL], char ShowBoard[ROW][COL], int* R) {
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int x = m - 1;
	int y = n - 1;
	if (x >= 0 && x < ROW && y >= 0 && y < COL)
	{
		if (ShowBoard[x][y] == '*')
		{
			if (MineBoard[x][y] == '1')
			{
				printf("踩到雷啦！游戏结束\n");
				printBoard(MineBoard);
				*R = 0;
			}
			if (MineBoard[x][y] == '0')
			{
				Expand(MineBoard, ShowBoard, x, y);
				printBoard(ShowBoard);
			}
		}
		else
		{
			printf("该位置已经排过啦！\n");
		}
	}
	else
	{
		printf("超出范围\n");
	}
	
		
	
}
void MarkMine(char ShowBoard[ROW][COL]) {
	printf("请输入标记雷的坐标：");
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int x = m - 1;
	int y = n - 1;
	if (x >= 0 && x < ROW && y >= 0 && y < COL)
	{
		if (ShowBoard[x][y] == '*')
		{
			ShowBoard[x][y] = 'N';
		}
		else if (ShowBoard[x][y] == 'N')
		{
			ShowBoard[x][y] = '*';
		}
		else
			printf("该位置已经排了，不是雷哦！\n");
	}
	else
	{
		printf("超出范围\n");
	}
	printBoard(ShowBoard);
}
//判断输赢
void Is_win(char ShowBoard[ROW][COL], int* R) {
	int unknow = 0;
	int mine = 0;
	for (int i = 0; i < ROW; i++) 
	{
		for (int j = 0; j < COL; j++) 
		{
			if (ShowBoard[i][j] == 'N')
				mine++;
			if (ShowBoard[i][j] == '*')
				unknow++;
		}
	}
	if (mine == MineCount && unknow == 0) 
	{
		printf("恭喜你排雷成功辣！！！！\n");
		*R = 0;
	}
}
