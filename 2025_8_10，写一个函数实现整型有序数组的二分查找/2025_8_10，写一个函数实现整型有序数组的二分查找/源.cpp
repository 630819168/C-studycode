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
	int slong = sizeof(arr) / sizeof(arr[0]);//���鳤��
	int input = 4;//Ҫ���ҵ���
	if (-1 == seek_seq_arr(arr, slong, input)) {
		printf("�Ҳ���");
	}
	else {
		printf("�������±�Ϊ��%d", seek_seq_arr(arr, slong, input));
	}
}
//������Ϊʵ�δ�����������һ����������Ԫ�صĵ�ַ