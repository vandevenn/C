#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_num(void)
{
	int num = 0;

	printf("양수 입력 : ");
	scanf("%d", &num);
	while (num < 0)
	{
		printf("양수를 입력하세요\n");
		printf("양수 입력 : ");
		scanf("%d", &num);
	}

	return num;
}

int get_num_main(void)
{
	int result = 0;

	result = get_num();
	printf("반환값 : %d\n", result);
	return 0;
}

int sum(int cnt)
{
	int i;
	int	sum = 0;
	
	for (i = 1; i <= cnt; i++)
	{
		sum = sum + i;
	}

	printf("1부터 %d까지의 합은 %d입니다.\n", cnt, sum);
	return sum;
}

int func(int n)
{
	int res;
	res = poly(n);
	if (res >= 0) return res;
	else return -res;
}

int poly(int n)
{
	return ((2 * n * n) + (3 * n));
}

int rec_func(int n)
{
	if (n == 1) return 1;
	else {
		return n += rec_func(n - 1);
	}
}

int main()
{
	//get_num_main();
	//sum(10);
	//sum(100);
	//printf("%d",func(-3));
	printf("%d",rec_func(10));



	return 0;
}
