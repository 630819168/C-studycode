#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int numberofBT(int a, int b) {
	int c = a ^ b;//相同为0相异为1
	int count = 0;
	//统计c中有几个1
	for (int i = 0; i < 32; i++) {
		if (((c >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}
int main() {
	int a = 1;
	int b = 15;
	int count = numberofBT(a, b);
	printf("%d\n", count);
	return 0;
}