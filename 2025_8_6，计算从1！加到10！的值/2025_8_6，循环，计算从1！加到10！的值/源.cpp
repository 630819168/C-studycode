#include<stdio.h>
int main() {
	//��һ�ַ�����Ƕ��ѭ��
	int sum1 = 0;
	for (int i = 1; i <= 10; i++) {//����1~10
		int n = 1;
		for (int j = 1; j <= i; j++) {//���������ÿһ�����Ľײ㲢����n
			n *= j;
		}
		sum1 += n;//��ÿ���ײ��ֵ�ۼӵ�sum��
	}
	printf("T1��\n1-10�Ľײ��Ϊ��%d\n\n\n", sum1);//������


	//�ڶ��ַ���������ѭ������
	printf("T2��\n");
	int sum2 = 0;
	int n = 1;
	for (int i = 1; i <= 10; i++) {//����1~10
		n *= i;	//��i�α���ʱ��n��ֵ��Ϊi�Ľײ�
		printf("%d�Ľײ�Ϊ%d\n", i, n);//��������չʾ
		sum2 += n;//��ÿ�ε�i�Ľײ��ۼӸ���sum
		printf("1��%d�Ľײ��Ϊ%d\n", i, sum2);//��������չʾ
	}
	printf("1-10�Ľײ��Ϊ��%d", sum2);//������
	return 0;
}