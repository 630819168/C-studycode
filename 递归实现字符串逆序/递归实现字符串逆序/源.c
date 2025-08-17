#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char* str) {
	if (str[0] != '\0') {
		return 1 + my_strlen(str + 1);
	}
	else {
		return 0;
	}
}
void reverse_string(char* str) {
	char temp = *str;
	int len = my_strlen(str);
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (my_strlen(str+1) >= 2) {
		reverse_string(str + 1);
	}
	*(str + len - 1) = temp;
}
int main() {
	char str[10] = { 0 };
	scanf("%s", str);
	reverse_string(str);
	printf("%s", str);
	return 0;
}