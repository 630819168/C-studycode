#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* str) {
	assert(dest != NULL);
	assert(str != NULL);
	int* ret = dest;
	while(*dest++ = *str++)
	{
		;
	}
	return ret;
}
int main() {
	char arr1[10] = "*******";
	char arr2[] = "hello";
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}