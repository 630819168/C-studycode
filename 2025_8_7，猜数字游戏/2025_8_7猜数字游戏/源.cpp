#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu();//�˵���������
void game();//��Ϸ��������
int main() {
	int input = 0;//���������洢�û���ѡ��
	srand((unsigned int)time(NULL));//�õ�ǰϵͳʱ����Ϊ���ӣ���ʼ�� C ���������������Ϊ�������� rand �����������׼��
	do {
		menu();//�ȼ�����ʾ�˵�
		printf("��ѡ��");//�û�ѡ����ʾ
		scanf("%d", &input);//�û����벢�洢��input
		switch (input) {//�����û��Ĳ�ͬѡ��ִ�в�ͬ�Ĵ���
			case 1:
				game();//��ѡ��1�����game��������������Ϸ����while�ж�Ϊ1�������һ��ѭ������Ϸ������������һ��ѡ��
				break;
			case 0:
				printf("�˳���Ϸ");//��ѡ��0��while�ж���Ϊ0���˳�ѭ��
				break;
			default:
				printf("ѡ�����������ѡ��\n");//��ѡ��ļȲ���1Ҳ����0������ʾ�û�ѡ�������while�ж�Ϊ��0���������һ��ѡ��
				break;
		}
	} while (input);
	return 0;//����0���������
}
void menu() {//�˵�����
	printf("------------------\n");
	printf("----��������Ϸ----\n");
	printf("----1.....play----\n");
	printf("----0.....exit----\n");
	printf("------------------\n");
}
void game() {//��Ϸ����
	int unswer = rand() % 100 + 1;//����rand��������1~100�������������unswer
	int guess = 0;//����guess���ڴ洢�û��²������
	printf("�����֣�1-100����");//��ʾ�û�������
	while (1) {//ѭ�������û��´���ٴβ²⣬ֻ�в¶��˲Ż�ִ��break�˳�ѭ��
		scanf("%d", &guess);
		if (guess > unswer) {
			printf("�´��ˣ��ٲ�һ�Σ�");
		}
		else if (guess < unswer) {
			printf("��С�ˣ�����һ�Σ�");
		}
		else {
			printf("��ϲ��¶���\n");
			break;
		}
	}
}