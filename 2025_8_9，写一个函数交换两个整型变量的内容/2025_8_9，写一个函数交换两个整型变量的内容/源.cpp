#include<stdio.h>
void exchg_num(int * x, int * y)//�������յ��ǵ�ַ
{
	int t = 0;
	t = *x;
	*x = *y;
	*y = t;
}
int main()
{
	int a = 4;
	int b = 5;
	printf("ʹ�ú���ǰ��\na��ֵΪ��%d\nb��ֵΪ��%d\n", a, b);
	exchg_num(&a, &b);
	printf("ʹ�ú�����\na��ֵΪ��%d\nb��ֵΪ��%d\n", a, b);
	return 0;
}