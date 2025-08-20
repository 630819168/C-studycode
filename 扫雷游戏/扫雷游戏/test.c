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
	FindMine1(mine, show);
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