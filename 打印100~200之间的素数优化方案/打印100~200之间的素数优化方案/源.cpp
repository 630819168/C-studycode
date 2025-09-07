#include<stdio.h>
#include<math.h>
int is_prime(int x);	//函数声明
int main() {
	int count = 0;
	for (int i = 101; i < 200; i += 2) {//遍历优化：从101开始每次加2，排除偶数的判断，减少计算量
		if (is_prime(i)) {//使用优化：把判断部分从main函数中分离出来，使得主函数更加简洁易读，也提高代了码利用率
			count++;
			printf("%d ", i);
		}
	}
	printf("\n素数有%d个", count);
	return 0;
}
int is_prime(int x) {
	int result = 0;//是否为素数的判断标志
	if (1 == x || 2 == x) {
		result = 1;
	}
	int j = 0;
	if (x >= 3) {
		for ( j = 2; j <= sqrt(x); j++) {//判断优化：一个数 i 如果除了1和它本身还有别的因数，那么至少有一个小于或等于 i 的开平方
			
			if (x % j == 0) {
				break;
			}
		}
		if (j > sqrt(x)) {//若j>sqrt(x),则上面的break未执行，说明2~sqrt(x)没有谁能被x整除
			result = 1;
		}
	}
	return result;//素数则返回1，非素数则返回0
}