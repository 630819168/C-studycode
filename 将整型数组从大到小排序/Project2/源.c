#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
//将整型数组从大到小排序
sort(int x[],int y) {
	for (int i = 0; i < y - 1; i++) {
		for (int j = 0; j < y-1-i ; j++) {
			if (x[j] < x[j + 1]) {
				int temp = x[j];
				x[j] = x[j + 1];
				x[j + 1] = temp;
			}
		}
	}
}
int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int len = sizeof(arr) / sizeof(arr[0]);
	sort(arr, len);
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}