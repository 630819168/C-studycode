#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu() {
	printf("***********************\n");
	printf("********1、play********\n");
	printf("********0、exit********\n");
	printf("***********************\n");
}
void game() {
	//埋雷数组
	char MineBoard[ROW][COL];
	//展示雷信息的数组
	char ShowBoard[ROW][COL];
	//初始化数组
	InitBoard(MineBoard, '0');
	InitBoard(ShowBoard, '*');
	//打印展示
	printBoard(ShowBoard);
	//埋雷
	InputMine(MineBoard);
	//printBoard(MineBoard);
	int input = 0;
	
	do
	{
		printf("1、排雷\n2、标记雷\n0、退出游戏\n请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入排雷坐标：");
			MineSweeping(MineBoard, ShowBoard, &input);
			Is_win(ShowBoard, &input);
			break;
		case 2:
			MarkMine(ShowBoard);
			Is_win(ShowBoard, &input);
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);

}
int main() {
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏退出");
			break;
		default:
			printf("输入错误请重新输入\n");
		}
	} while (input);
}
	
