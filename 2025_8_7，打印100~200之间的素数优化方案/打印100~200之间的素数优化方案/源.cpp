#include<stdio.h>
#include<math.h>
int is_prime(int x);	//��������
int main() {
	int count = 0;
	for (int i = 101; i < 200; i += 2) {//�����Ż�����101��ʼÿ�μ�2���ų�ż�����жϣ����ټ�����
		if (is_prime(i)) {//ʹ���Ż������жϲ��ִ�main�����з��������ʹ�����������Ӽ���׶���Ҳ��ߴ�����������
			count++;
			printf("%d ", i);
		}
	}
	printf("\n������%d��", count);
	return 0;
}
int is_prime(int x) {
	int result = 0;//�Ƿ�Ϊ�������жϱ�־
	if (1 == x || 2 == x) {
		result = 1;
	}
	int j = 0;
	if (x >= 3) {
		for ( j = 2; j <= sqrt(x); j++) {//�ж��Ż���һ���� i �������1���������б����������ô������һ��С�ڻ���� i �Ŀ�ƽ��
			
			if (x % j == 0) {
				break;
			}
		}
		if (j > sqrt(x)) {//��j>sqrt(x),�������breakδִ�У�˵��2~sqrt(x)û��˭�ܱ�x����
			result = 1;
		}
	}
	return result;//�����򷵻�1���������򷵻�0
}