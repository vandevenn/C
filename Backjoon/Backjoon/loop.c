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

void Q2439()
{
	int N = 1;
	scanf("%d", &N);
	if ((N < 1) || (N > 100))
	{
		printf("1~100사이 입력");
	}
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N - i; j++)
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void Q10952()
{
	int A = 0;
	int B = 0;
	while (1)
	{
		scanf("%d %d", &A, &B);
		if ((A == 0) && (B == 0))
		{
			break;
		}
		else if ((A < 0) || (A > 9) || (B < 0) || (B > 9))
		{
			printf("1~9사이만 입력");
		}
		else
		{
			printf("%d\n", A + B);
		}
	}
}


void Q10951()
{
	int A = 0;
	int B = 0;
	while (scanf("%d %d", &A, &B) != EOF)
	{
		if ((A < 1) || (A > 9) || (B < 1) || (B > 9))
		{
			printf("1~9사이만 입력");
		}
		else
		{
			printf("%d\n", A + B);
		}
	}
}
int main()
{
	//Q2438();
	//Q2439();
	//Q10952();
	Q10951();
	return 0;
}