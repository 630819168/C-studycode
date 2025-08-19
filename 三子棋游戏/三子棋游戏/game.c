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
		printf("玩家胜利\n");
	}
	else if ('#' == result) {
		printf("电脑胜利\n");
	}
	else if ('D' == result) {
		printf("平局\n");
	}
}
//打印棋盘
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
//玩家动
void PlayerMove(char chessboard[ROW][COL]) {
	int row = 0;
	int col = 0;
	printf("玩家动：");
	while (1) {
		scanf("%d%d", &row, &col);
		if (row <= ROW && col <= COL && row > 0 && col > 0) {
			if (' ' != chessboard[row-1][col-1]) {
				printf("该位置已经有棋子了，再试一次：");
			}
			else {
				break;
			}
		}
		else {
			printf("\n超出棋盘范围，再试一次：");
		}
	}
	chessboard[row-1][col-1] = '*';
}
//电脑动
void ComputerMove(char chessboard[ROW][COL]) {
	printf("电脑动：\n");
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
//判断棋盘是否下满
int is_full(char chessboard[ROW][COL]) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			if (' ' == chessboard[i][j])
				return 0;
		}
	}
	return 1;
}
//判断输赢
char is_win(char chessboard[ROW][COL]) {
	//行相同
	for (int i = 0; i < ROW; i++) {
		if (chessboard[i][0] == chessboard[i][1] && chessboard[i][1] == chessboard[i][2] && chessboard[i][1] != ' ')
			return chessboard[i][1];
	}
	//列相同
	for (int i = 0; i < COL; i++) {
		if (chessboard[0][i] == chessboard[1][i] && chessboard[1][i] == chessboard[2][i] && chessboard[1][i] != ' ')
			return chessboard[1][i];
	}
	//对角线相同
	if (chessboard[0][0] == chessboard[1][1] && chessboard[1][1] == chessboard[2][2] && chessboard[1][1] != ' ') {
		return chessboard[1][1];
	}
	if (chessboard[0][2] == chessboard[1][1] && chessboard[1][1] == chessboard[2][0] && chessboard[1][1] != ' ') {
		return chessboard[1][1];
	}
	//是否下满
	int full = 0;
	full = is_full(chessboard);
	if (1 == full) {
		return 'D';//下满：平局
	}
	else {
		return 'C';//未满：继续
	}
}
