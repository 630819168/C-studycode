#include"game.h"
void game() {
	char chessboard[ROW][COL];
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			chessboard[i][j] = ' ';
		}
	}
	printboard(chessboard);
	char result = 0;
	while (1) {
		PlayerMove(chessboard);
		printboard(chessboard);
		result = is_win(chessboard);
		if (result != 'C') {
			break;
		}
		ComputerMove(chessboard);
		printboard(chessboard);
		result = is_win(chessboard);
		if (result != 'C') {
			break;
		}	
	}
	if ('*' == result) {
		printf("���ʤ��\n");
	}
	else if ('#' == result) {
		printf("����ʤ��\n");
	}
	else if ('D' == result) {
		printf("ƽ��\n");
	}
}
//��ӡ����
void printboard(char chessboard[ROW][COL]) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			printf(" %c ", chessboard[i][j]);
			if (j < COL - 1)
				printf("|");
		}
		printf("\n");
		if (i < ROW - 1) {
			for (int j = 0; j < COL; j++) {
				printf("---");
				if (j < COL - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
//��Ҷ�
void PlayerMove(char chessboard[ROW][COL]) {
	int row = 0;
	int col = 0;
	printf("��Ҷ���");
	while (1) {
		scanf("%d%d", &row, &col);
		if (row <= ROW && col <= COL && row > 0 && col > 0) {
			if (' ' != chessboard[row-1][col-1]) {
				printf("��λ���Ѿ��������ˣ�����һ�Σ�");
			}
			else {
				break;
			}
		}
		else {
			printf("\n�������̷�Χ������һ�Σ�");
		}
	}
	chessboard[row-1][col-1] = '*';
}
//���Զ�
void ComputerMove(char chessboard[ROW][COL]) {
	printf("���Զ���\n");
	int row = 0;
	int col = 0;
	while (1) {
		row = rand() % 3;
		col = rand() % 3;
		if (chessboard[row][col] == ' ')
			break;
	}
	chessboard[row][col] = '#';
}
//�ж������Ƿ�����
int is_full(char chessboard[ROW][COL]) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			if (' ' == chessboard[i][j])
				return 0;
		}
	}
	return 1;
}
//�ж���Ӯ
char is_win(char chessboard[ROW][COL]) {
	//����ͬ
	for (int i = 0; i < ROW; i++) {
		if (chessboard[i][0] == chessboard[i][1] && chessboard[i][1] == chessboard[i][2] && chessboard[i][1] != ' ')
			return chessboard[i][1];
	}
	//����ͬ
	for (int i = 0; i < COL; i++) {
		if (chessboard[0][i] == chessboard[1][i] && chessboard[1][i] == chessboard[2][i] && chessboard[1][i] != ' ')
			return chessboard[1][i];
	}
	//�Խ�����ͬ
	if (chessboard[0][0] == chessboard[1][1] && chessboard[1][1] == chessboard[2][2] && chessboard[1][1] != ' ') {
		return chessboard[1][1];
	}
	if (chessboard[0][2] == chessboard[1][1] && chessboard[1][1] == chessboard[2][0] && chessboard[1][1] != ' ') {
		return chessboard[1][1];
	}
	//�Ƿ�����
	int full = 0;
	full = is_full(chessboard);
	if (1 == full) {
		return 'D';//������ƽ��
	}
	else {
		return 'C';//δ��������
	}
}
