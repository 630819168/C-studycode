#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(unsigned int x);
//����һ���޷���������˳���ӡÿһλ
int main() {
	unsigned int num;
	scanf("%d", &num);//123
	print(num);//��ӡ�����1 2 3 ��
	return 0;
}
void print(unsigned int x) {
	if (x > 9) {//����xС��9ʱ�ݹ鲻�ټ���
		print(x / 10);//ÿ�εݹ�n���յ�����Խ��ԽС��ֱ��С��9�㲻�ٵݹ�
	}
	printf("%d ", x % 10);
}
//��һ��n=123���ڶ���n=12��������n=1��1<9���ݹ鲻�ټ�����
// �ڵ������ӡn%10�����Ϊ1 
// ���ý������صڶ����ӡn%10�����Ϊ2 
// ���ý����󷵻ص�һ���ӡn%10�����Ϊ3 
// ���ý����󷵻�main����