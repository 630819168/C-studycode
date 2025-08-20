#include"game.h"
void menu() {
	printf("**********************\n");
	printf("****** 1、play  ******\n");
	printf("****** 0、exit  ******\n");
	printf("**********************\n");
}
void game() {
	//创建
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine, '0');
	InitBoard(show, '*');
	//设置雷
	SetMine(mine, easy_count);
	//打印展示
	PrintBoard(show);
	PrintBoard(mine);
	//排雷1.0
	//FindMine1(mine, show);
	//排雷2.0
	int x = 0;
	int y = 0;
	int Function = 0;
	int count = 0;
	do
	{	
		printf("\n1、排雷\n2、标记/取消标记雷\n0、结束游戏\n请选择:");
		scanf("%d", &Function);
		switch (Function)
		{
		case 1://排雷
			printf("请输入排雷的坐标：");
			scanf("%d%d", &x, &y);
			FindMine2(mine, show, x, y, &Function);
			Is_win(mine, show, &Function);
			break;
		case 2://标记或取消标记雷
			printf("请输入标记雷的坐标：");
			scanf("%d%d", &x, &y);
			if ('*' == show[x][y])
				show[x][y] = 'N';
			else if ('N' == show[x][y])
				show[x][y] = '*';
			else
				printf("排过的地方不能标记");
			PrintBoard(show);
			Is_win(mine, show, &Function);
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("选择错误，再试一次\n");
		}
	} while (Function);
}
int main() {
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("游戏退出\n");
			break;
		default:
			printf("选择错误，请重新选择：\n");
			break;
		}
	} while (input);
	return 0;
}