#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main(){
	char password[] = "123456";//������ȷ����
	char getpassworld[20] = {0};//�����ַ��������ڴ洢�û����������
	printf("���������룺");
	for (int i = 1; i <= 3; i++) {//�޶�ѭ���������
		scanf("%s", getpassworld);
		if (strcmp(password, getpassworld) == 0) {//�Ƚ��û��������������ȷ���룬������ȷ����ʾ��½�ɹ�������ѭ��
			printf("��½�ɹ�\n");
			break;
		}
		else {		//�����������ʾ������󲢽�����һ��ѭ��
			system("cls");//����			
			printf("��������������������룺");
		}
		if (i == 3) {
			printf("�Ƴ�����\n");
		}
	}
	return 0;
}