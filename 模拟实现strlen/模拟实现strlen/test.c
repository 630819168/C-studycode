#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
size_t my_strlen(const char* ch) {
	assert(ch != NULL);
	size_t count = 0;
	while (*ch++ != '\0')
	{
		count++;
	}
	return count;
}
int main() {
	char arr[] = "helloworld!";
	printf("%d\n", my_strlen(arr));
	return 0;
}