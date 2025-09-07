#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//T1
//int numberof1(int t) {
//	int count = 0;
//	for (int i = 0; i < 32; i++) {
//		if (((t >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//判断最右边的数是不是1，是则count++且右移一位
//T2
int numberof1(int t) {
	int count = 0;
	while (t) {
		t = t & (t - 1);
		count++;
	}
	return count;
}
//把最右边的1去掉再count++，再判断是否停止循环
int main() {
	int t = 15;
	int count = numberof1(t);
	printf("%d\n", count);
	return 0;
}
//若一个数是2的k次方，则这个数的二进制序列中只有一个1.即若t&（t-1） = 0，则t为2的k次方
