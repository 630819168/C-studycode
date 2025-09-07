#include<stdio.h>
void exchg_num(int * x, int * y)//参数接收的是地址
{
	int t = 0;
	t = *x;
	*x = *y;
	*y = t;
}
int main()
{
	int a = 4;
	int b = 5;
	printf("使用函数前：\na的值为：%d\nb的值为：%d\n", a, b);
	exchg_num(&a, &b);
	printf("使用函数后：\na的值为：%d\nb的值为：%d\n", a, b);
	return 0;
}