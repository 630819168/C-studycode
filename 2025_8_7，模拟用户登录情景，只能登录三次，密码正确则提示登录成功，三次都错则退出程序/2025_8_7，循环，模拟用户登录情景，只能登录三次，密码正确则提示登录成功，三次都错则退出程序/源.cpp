#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main(){
	char password[] = "123456";//设置正确密码
	char getpassworld[20] = {0};//创建字符数组用于存储用户输入的密码
	printf("请输入密码：");
	for (int i = 1; i <= 3; i++) {//限定循环最多三次
		scanf("%s", getpassworld);
		if (strcmp(password, getpassworld) == 0) {//比较用户输入的密码与正确密码，输入正确则提示登陆成功并结束循环
			printf("登陆成功\n");
			break;
		}
		else {		//输入错误则提示密码错误并进入下一次循环
			system("cls");//清屏			
			printf("密码错误，请重新输入密码：");
		}
		if (i == 3) {
			printf("推出程序\n");
		}
	}
	return 0;
}