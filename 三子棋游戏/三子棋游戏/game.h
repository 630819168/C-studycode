#define ROW 3
#define COL 3

//进入游戏
void game();
//打印棋盘
void printboard(char chessboard[ROW][COL]);
//玩家动
void PlayerMove(char chessboard[ROW][COL]);
//电脑动
void ComputerMove(char chessboard[ROW][COL]);
//判断输赢
char is_win(char chessboard[ROW][COL]);
//判断棋盘是否满
int is_full(char chessboard[ROW][COL]);