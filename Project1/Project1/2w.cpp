/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int i = 0, n;
	int mutiply[9];

	printf("\n1~9�� ������ �Է��ϼ���.");

	while (true)
	{
		scanf("%d", &n);
		if (n < 0 || n > 9) {
			printf("\n 1~9�� ������ �Է��ϼ���.");
		}
		else
		{
			break;
		}
	}

	printf("\n");

	for (i = 0; i < 9; i++)
	{
		mutiply[i] = n * (i + 1);
		printf("%d * %d = %d \n", n, (i + 1), mutiply[i]);
	}

	getchar(); getchar();
}
*/
