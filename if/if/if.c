#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Q1()
{
	int a;
	scanf("%d", &a);
	if (a < 0)
	{
		a = -a;
		if ((a % 2) == 0)
		{
			a = 2;
		}
		else
		{
			a = 1;
		}
	}
	printf("a = %d", a);
}	

void Q2()
{
	int chest = 0;
	char size;
	
	printf("가슴둘레 : ");
	scanf("%d", &chest);
	if (chest <= 90)
	{
		size = 'S';
	}
	else if ((chest > 90) && (chest <= 100))
	{
		size = 'M';
	}
	else
	{
		size = 'L';
	}
	printf("당신의 사이즈는 : %c", size);
}

void Q3()
{
	double height = 0;
	double weight = 0;

	printf("키,몸무게 : ");
	scanf("%lf %lf", &height, &weight);

	if ((height >= 187.5) && (weight < 80))
	{
		printf("ok\n");
	}
	else
	{
		printf("cancel\n");
	}
	return 0;
}

void Q4()
{
	int n;
	printf("정수 입력 : ");
	scanf("%d", &n);
	switch (n % 3)
	{
		case 0:
			printf("거짓");
			break;
		case 1:
			printf("참");
			break;
	}
	return 0;
}

void Q5()
{
	int age = 25;
	int chest = 95;
	char size;

	if (age < 20)
	{
		if (chest < 85)
		{
			size = 'S';
		}
		else if ((chest >= 95) && (chest < 95))
		{
			size = 'M';
		}
		else
		{
			size = 'L';
		}
	}
	else
	{
		if (chest < 90)
		{
			size = 'S';
		}
		else if ((chest >= 90) && (chest < 100))
		{
			size = 'M';
		}
		else
		{
			size = 'L';
		}
	}
	printf("사이즈는 %c 입니다.\n", size);
}

void Q6()
{
	int a = 0;
	int b = 0;
	int cal = 0;
	char oper = 0;
	printf("사칙연산 입력(정수) : ");
	scanf("%d%c%d", &a, &oper, &b);
	switch (oper)
		{
			case '+':
				cal = a + b ;
				break;
			case '-':
				cal = a - b;
				break;
			case '*':
				cal = a * b;
				break;
			case '/':
				cal = a / b;
				break;
		}
	printf("%d%c%d=%d", a, oper, b, cal);
		
}
void Q7()
{
	int a = 1;
	int i = 0;

	for (i = 0; i < 3; i++)
	{
		a = a * 2;
	}

	printf("a : %d\n", a);
}

void Q8()
{
	int a = 0;
	do
	{
		scanf("%d", &a);

	} while (a < 0);
}

void Q9()
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("Be happy\n");
	}
	
}

void Q10()
{
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("$");
	}
}

int Q11()
{
	int a,j;
	while (1)
	{
		printf("몇단? : ");
		scanf("%d", &a);
		if (a > 0)
		{
			for (j = 1; j <= 9; j++)
			{
				printf("%d * %d = %d\n", a, j, a * j);
			}
		}
		else
		{
			printf("양의 정수를 입력하시오\n");
		}
	}
	return 0;
}

void Q12()
{
	int num, i, cnt = 0;

	printf("2 이상의 정수를 입력하세요 : ");
	scanf("%d", &num);
	
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			cnt++;
		}
	}

	if (cnt == 0) {
		printf("%d\n", num);
	}
		
}

void T()
{
	int input = 0, count1 = 0, count2 = 0;

	printf("2 이상의 정수를 입력하세요 : ");
	scanf_s("%d", &input);

	for (int i = 1; i <= input; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
				count1++;
		}

		if (count1 == 1) {
			printf("%5d\t", i);
			count2++;

			if (count2 % 5 == 0)
				printf("\n");
		}

		count1 = 0;
	}
	system("pause");
	return 0;
}

double centi_to_meter(double Height)
{
	double meter;
	meter = Height / 100;
	return meter;
}

int submain(void)
{
	double res;

	res = centi_to_meter(187);
	printf("%.2lfm\n", res);

	return 0;
}


	
	

int main()
{
	//Q1();
	//Q2();
	//Q3();
	//Q4();
	//Q5();
	//Q6();
	//Q7();
	//Q8();
	//Q9();
	//Q10();
	//Q11();
	//Q12();
	//T();
	submain();
	return 0;
}