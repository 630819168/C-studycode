#include<stdio.h>
int main() {
	//第一种方法：嵌套循环
	int sum1 = 0;
	for (int i = 1; i <= 10; i++) {//遍历1~10
		int n = 1;
		for (int j = 1; j <= i; j++) {//求出遍历的每一个数的阶层并赋给n
			n *= j;
		}
		sum1 += n;//将每个阶层的值累加到sum中
	}
	printf("T1：\n1-10的阶层和为：%d\n\n\n", sum1);//输出结果


	//第二种方法：单层循环即可
	printf("T2：\n");
	int sum2 = 0;
	int n = 1;
	for (int i = 1; i <= 10; i++) {//遍历1~10
		n *= i;	//第i次遍历时，n的值就为i的阶层
		printf("%d的阶层为%d\n", i, n);//遍历过程展示
		sum2 += n;//把每次的i的阶层累加赋给sum
		printf("1到%d的阶层和为%d\n", i, sum2);//遍历过程展示
	}
	printf("1-10的阶层和为：%d", sum2);//输出结果
	return 0;
}