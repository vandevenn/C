#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Q2438()
{
	int N = 1;
	scanf("%d", &N);
	if ((N < 1) || (N > 100))
	{
		printf("1~100사이 입력");
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("*");
		printf("\n");
	}
}

int main()
{
	Q2438();
}