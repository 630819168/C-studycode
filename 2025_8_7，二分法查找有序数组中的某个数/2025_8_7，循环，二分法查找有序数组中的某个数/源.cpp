#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���ַ������������е�ĳ����
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//�ṩ��������
	int slong = sizeof(arr) / sizeof(arr[0]);//������鳤�Ȳ�����slong
	int left = 0;							//����left�洢����������±꣬���ڱ�ʾĿ�����޶���������
	int right = slong - 1;					//����right�洢����������±꣬���ڱ�ʾĿ�����޶�������Ҳ�
	int target = 0;							//����target���ڴ洢����������Ҫ���ҵ�Ŀ����
	printf("������Ҫ���ҵ���(1-10)��");
	scanf("%d", &target);
	while (left <= right) {
		int mid = (left + right) / 2;//�ҳ�Ŀ�����޶��������м���Ǹ������±�ż����ȡ��ߣ�������mid
		if (arr[mid] > target) {//��Ŀ�������м������бȽϣ���Ŀ������С������м���-1��Ϊ������
			right = mid - 1;
		}
		else if (arr[mid] < target) {//��Ŀ�������м������бȽϣ���Ŀ������������м���+1��Ϊ������
			left = mid + 1;
		}
		else {			//��Ŀ�������м�����ȣ����м����±�mid����Ŀ�����±����Ŀ����
			printf("���������±�Ϊ��%d\n", mid);
			break;
		}
		if (left > right) {
			printf("������\n");
		}
	}
	return 0;
}