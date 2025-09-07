#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void DaoZhi(char* start, char* end) {
	while (start < end) {
		char temp = 0;
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
int main() {
	char input[100] = { 0 };
	gets(input);
	int len = strlen(input);
	//全部倒置
	DaoZhi(input, input + len - 1);
	//各个单词倒置
	char* start = input;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		DaoZhi(start, end - 1);
		if (*end = ' ')
			start = end + 1;
		else
			start = end;
	}
	printf("%s", input);
	return 0;
}