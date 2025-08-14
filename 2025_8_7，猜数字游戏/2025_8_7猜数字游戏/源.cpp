#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu();//菜单函数声明
void game();//游戏函数声明
int main() {
	int input = 0;//创建变量存储用户的选择
	srand((unsigned int)time(NULL));//用当前系统时间作为种子，初始化 C 的随机数生成器，为后续调用 rand 生成随机数做准备
	do {
		menu();//先加载显示菜单
		printf("请选择：");//用户选择提示
		scanf("%d", &input);//用户输入并存储到input
		switch (input) {//根据用户的不同选择执行不同的代码
			case 1:
				game();//若选择1则调用game（）函数进行游戏，且while判断为1会进行下一次循环，游戏结束后会进行下一次选择
				break;
			case 0:
				printf("退出游戏");//若选择0，while判断则为0，退出循环
				break;
			default:
				printf("选择错误，请重新选择：\n");//若选择的既不是1也不是0，则提示用户选择错误，且while判断为非0，会进行下一次选择
				break;
		}
	} while (input);
	return 0;//返回0，程序结束
}
void menu() {//菜单函数
	printf("------------------\n");
	printf("----猜数字游戏----\n");
	printf("----1.....play----\n");
	printf("----0.....exit----\n");
	printf("------------------\n");
}
void game() {//游戏函数
	int unswer = rand() % 100 + 1;//调用rand（）生成1~100的随机数并赋给unswer
	int guess = 0;//创建guess用于存储用户猜测的数字
	printf("猜数字（1-100）：");//提示用户猜数字
	while (1) {//循环用于用户猜错后再次猜测，只有猜对了才会执行break退出循环
		scanf("%d", &guess);
		if (guess > unswer) {
			printf("猜大了，再猜一次：");
		}
		else if (guess < unswer) {
			printf("猜小了，再试一次：");
		}
		else {
			printf("恭喜你猜对了\n");
			break;
		}
	}
}