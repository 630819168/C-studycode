
#include"game.h"
//初始化
void InitBoard(char Init[ROWS][COLS], char set) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			Init[i][j] = set;
		}
	}
}
//打印
PrintBoard(char print[ROWS][COLS]) {
	for (int i = 0; i <= COL; i++) {
		printf(" %d ", i);
	}
	printf("\n");
	for (int i = 1; i <= ROW; i++) {
		printf(" %d ", i);
		for (int j = 1; j <= COL; j++) {
			printf(" %c ", print[i][j]);
		}
		printf("\n");
	}
}
//设置雷
void SetMine(char set[ROWS][COLS], int count) {
	int x = 0;
	int y = 0;
	while (count)
	{
		x = rand() % ROW + 1;
		y = rand() % COL + 1;
		if (set[x][y] == '0') {
			set[x][y] = '1';
			count--;
		}
	}
}
////排雷1.0
//void FindMine1(char mine[ROWS][COLS], char show[ROWS][COLS]) {
//	int x = 0;
//	int y = 0;
//	int safe = 9 * 9 - easy_count;
//	while (safe)
//	{
//		printf("请输入坐标：");
//		scanf("%d%d", &x, &y);
//		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)//判断合法性
//		{
//
//			if ('1' == mine[x][y])
//			{
//				printf("踩到雷啦！游戏结束！");
//				PrintBoard(show);
//				break;
//			}
//			else
//			{
//				if (show[x][y] == '*') {
//					safe--;
//				}
//				int minecount = 0;
//				for (int i = x - 1; i <= x + 1; i++) {
//					for (int j = y - 1; j <= y + 1; j++) {
//						if (mine[i][j] == '1')
//							minecount++;
//					}
//				}
//				show[x][y] = minecount + '0';
//				PrintBoard(show);
//			}
//		}
//	}
//	if (safe == 0) {
//		printf("恭喜你，雷排完啦！");
//	}
//}

//排雷
//数雷函数
char count_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y){
	int count = 0;
	for (int i = x - 1; i <= x + 1; i++) {
		for (int j = y - 1; j <= y + 1; j++) {
			if (i < 0 || i > ROWS || j < 0 || j > COLS)
				continue;
			if (mine[i][j] == '1')
				count++;
		}
	}
	if (count > 0) {
		return count + '0';
	}
	else if (count == 0) {
		return ' ';
	}
}
//展开函数
CheckMine(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y) {
	char count = count_mine(mine, show, x, y);
	if(count == ' ')
	{
		show[x][y] = count;
		for (int i = x - 1; i <= x + 1; i++) {
			for (int j = y - 1; j <= y + 1; j++) {
				if (i < 1 || i > ROW || j < 1 || j > COL)
					continue;
				if (show[i][j] == '*') {
					CheckMine(mine, show, i, j);
				}
			}
		}
	}
	else {
		show[x][y] = count;
	}
}
//排雷函数
void FindMine2 (char mine[ROWS][COLS], char show[ROWS][COLS],int x, int y, int* e) {
	if (x <= ROW && x >= 1 && y <= COL && y >= 1) {
		if ('*' != show[x][y]) {
			printf("该位置已经排过了，重新选择\n");
		}
		else if ('1' == mine[x][y]) {
			printf("踩到雷啦!游戏结束！\n");
			PrintBoard(mine);
			*e = 0;
		}
		else if ('0' == mine[x][y]) {
			CheckMine(mine, show, x, y);
		}
	}
	PrintBoard(show);
}
//判断输赢状态
void Is_win(char mine[ROWS][COLS], char show[ROWS][COLS], int* e) {
	int count = 0;
	int safe = 9 * 9 - easy_count;
	for (int i = 1; i <= ROW; i++) {
		for (int j = 1; j <= COL; j++) {
			if (show[i][j] == 'N') {
				count++;
			}
			if (show[i][j] == '*') {
				safe = 0;
			}
		}
	}
	if (count == easy_count && safe == 9 * 9 - easy_count) {
		printf("恭喜你！雷排完啦！\n");
		*e = 0;
	}
}