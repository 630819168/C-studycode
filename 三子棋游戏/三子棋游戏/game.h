#define ROW 3
#define COL 3

//������Ϸ
void game();
//��ӡ����
void printboard(char chessboard[ROW][COL]);
//��Ҷ�
void PlayerMove(char chessboard[ROW][COL]);
//���Զ�
void ComputerMove(char chessboard[ROW][COL]);
//�ж���Ӯ
char is_win(char chessboard[ROW][COL]);
//�ж������Ƿ���
int is_full(char chessboard[ROW][COL]);