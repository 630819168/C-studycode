#include<stdio.h>
//能被4整除，不能被100整除的是闰年
//能被400整除的是闰年
int main() {
	int y = 0;
	int count = 0;
	for (y = 1000; y <= 2000; y++) {
		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {//满足闰年条件的y进入下面语句
			printf("%d ", y);//输出闰年
			count++;		//闰年个数+1
		}
	}
	printf("\n闰年有：%d个", count);//输出闰年个数
	return 0;
}