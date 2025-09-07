#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//二分法找有序数组中的某个数
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//提供有序数组
	int slong = sizeof(arr) / sizeof(arr[0]);//求出数组长度并赋给slong
	int left = 0;							//创建left存储有序数组的下标，用于表示目标数限定区间的左侧
	int right = slong - 1;					//创建right存储有序数组的下标，用于表示目标数限定区间的右侧
	int target = 0;							//创建target用于存储有序数组中要查找的目标数
	printf("请输入要查找的数(1-10)：");
	scanf("%d", &target);
	while (left <= right) {
		int mid = (left + right) / 2;//找出目标数限定区间内中间的那个数的下表（偶数则取左边）并赋给mid
		if (arr[mid] > target) {//令目标数与中间数进行比较，若目标数更小，则把中间数-1改为右区间
			right = mid - 1;
		}
		else if (arr[mid] < target) {//令目标数与中间数进行比较，若目标数更大，则把中间数+1改为左区间
			left = mid + 1;
		}
		else {			//若目标数与中间数相等，则中间数下标mid就是目标数下表，输出目标数
			printf("所找数的下标为：%d\n", mid);
			break;
		}
		if (left > right) {
			printf("不存在\n");
		}
	}
	return 0;
}