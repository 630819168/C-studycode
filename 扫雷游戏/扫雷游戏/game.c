#include"game.h"
//≥ı ºªØ
void InitBoard(char Init[ROWS][COLS], char set) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			Init[i][j] = set;
		}
	}
}
//¥Ú”°
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
//…Ë÷√¿◊
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
//≈≈¿◊1.0
void FindMine1(char mine[ROWS][COLS], char show[ROWS][COLS]) {
	int x = 0;
	int y = 0;
	int safe = 9 * 9 - easy_count;
	while (safe)
	{
		printf("«Î ‰»Î◊¯±Í£∫");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)//≈–∂œ∫œ∑®–‘
		{

			if ('1' == mine[x][y])
			{
				printf("≤»µΩ¿◊¿≤£°”Œœ∑Ω· ¯£°\n");
				PrintBoard(mine);
				break;
			}
			else
			{
				if (show[x][y] == '*') {
					safe--;
				}
				int minecount = 0;
				for (int i = x - 1; i <= x + 1; i++) {
					for (int j = y - 1; j <= y + 1; j++) {
						if (mine[i][j] == '1')
							minecount++;
					}
				}
				show[x][y] = minecount + '0';
				PrintBoard(show);
			}
		}
	}
	if (safe == 0) {
		printf("πßœ≤ƒ„£¨¿◊≈≈ÕÍ¿≤£°\n");
		PrintBoard(mine);
	}
}