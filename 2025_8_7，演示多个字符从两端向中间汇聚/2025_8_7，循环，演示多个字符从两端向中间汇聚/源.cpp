#include<stdio.h>
#include<string.h>
#include<windows.h>
int main() {
	char arr1[] = { "happy birthday!!!" };//����չʾ
	char arr2[] = { "                 " };//��ʼչʾ
	int left = 0;//���������������ҿ�ʼչʾ
	int right = strlen(arr1) - 1;//����������������չʾ
	while (left <= right) {//ÿһ��ѭ����ߺ��ұ�չʾһ���ַ�ֱ��ȫ��չʾ�����
		arr2[left] = arr1[left];//����������չʾ�ַ����ǿ�ʼչʾ�ַ�
		arr2[right] = arr1[right];//���Ҳ������չʾ�ַ����ǿ�ʼչʾ�ַ�
		left++;//�����Դ�����������
		right--;//�Լ��Դ�����������
		printf("%s", arr2);//ѭ��һ��չʾһ��
		Sleep(1000);//ִ��ʱ�ȴ�һ���Ա�۲�
		system("cls");//����ϴε�չʾ��������ֶ�̬Ч��
	}
	//ѭ��������ʼչʾ���ַ���������չʾ�����ˣ��������չʾ�ַ�
	printf("%s", arr2);//չʾ
	return 0;
}
