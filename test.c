
#include<stdio.h>

int main() {

	int n = 0;
	scanf_s("%d", &n);

	if (((n - 1) & n) == 0)
		printf("��2�������η�");
	else
		printf("����2�������η�");
	return 0;
}