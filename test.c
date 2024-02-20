
#include<stdio.h>

int main() {

	int n = 0;
	scanf_s("%d", &n);

	if (((n - 1) & n) == 0)
		printf("是2的整数次方");
	else
		printf("不是2的整数次方");
	return 0;
}