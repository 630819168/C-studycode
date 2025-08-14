#include<stdio.h>
#include<string.h>
#include<windows.h>
int main() {
	char arr1[] = { "happy birthday!!!" };//最终展示
	char arr2[] = { "                 " };//开始展示
	int left = 0;//用于索引从左往右开始展示
	int right = strlen(arr1) - 1;//用于索引从右往左展示
	while (left <= right) {//每一次循环左边和右边展示一个字符直到全部展示后结束
		arr2[left] = arr1[left];//将左侧的最终展示字符覆盖开始展示字符
		arr2[right] = arr1[right];//将右侧的最终展示字符覆盖开始展示字符
		left++;//自增以从左往右索引
		right--;//自减以从右往左索引
		printf("%s", arr2);//循环一次展示一次
		Sleep(1000);//执行时等待一秒以便观察
		system("cls");//清除上次的展示结果以体现动态效果
	}
	//循环结束后开始展示的字符都被最终展示覆盖了，输出最终展示字符
	printf("%s", arr2);//展示
	return 0;
}
