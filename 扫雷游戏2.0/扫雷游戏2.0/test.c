#include"game.h"
void menu() {
	printf("**********************\n");
	printf("****** 1��play  ******\n");
	printf("****** 0��exit  ******\n");
	printf("**********************\n");
}
void game() {
	//����
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine, '0');
	InitBoard(show, '*');
	//������
	SetMine(mine, easy_count);
	//��ӡչʾ
	PrintBoard(show);
	PrintBoard(mine);
	//����1.0
	//FindMine1(mine, show);
	//����2.0
	int x = 0;
	int y = 0;
	int Function = 0;
	int count = 0;
	do
	{	
		printf("\n1������\n2�����/ȡ�������\n0��������Ϸ\n��ѡ��:");
		scanf("%d", &Function);
		switch (Function)
		{
		case 1://����
			printf("���������׵����꣺");
			scanf("%d%d", &x, &y);
			FindMine2(mine, show, x, y, &Function);
			Is_win(mine, show, &Function);
			break;
		case 2://��ǻ�ȡ�������
			printf("���������׵����꣺");
			scanf("%d%d", &x, &y);
			if ('*' == show[x][y])
				show[x][y] = 'N';
			else if ('N' == show[x][y])
				show[x][y] = '*';
			else
				printf("�Ź��ĵط����ܱ��");
			PrintBoard(show);
			Is_win(mine, show, &Function);
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("ѡ���������һ��\n");
		}
	} while (Function);
}
int main() {
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ�˳�\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}