#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int seek_seq_arr(int arr[], int slong, int input) {
	
	int left = 0;
	int right = slong - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (input > arr[mid]) {
			left = mid + 1;
		}
		else if (input < arr[mid]) {
			right = mid - 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int slong = sizeof(arr) / sizeof(arr[0]);//数组长度
	int input = 4;//要查找的数
	if (-1 == seek_seq_arr(arr, slong, input)) {
		printf("找不到");
	}
	else {
		printf("该数的下标为：%d", seek_seq_arr(arr, slong, input));
	}
}
//数组作为实参传给函数的是一个该数组首元素的地址