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
	
	printf("�����ѷ� : ");
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
	printf("����� ������� : %c", size);
}

void Q3()
{
	double height = 0;
	double weight = 0;

	printf("Ű,������ : ");
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
	printf("���� �Է� : ");
	scanf("%d", &n);
	switch (n % 3)
	{
		case 0:
			printf("����");
			break;
		case 1:
			printf("��");
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
	printf("������� %c �Դϴ�.\n", size);
}

void Q6()
{
	int a = 0;
	int b = 0;
	int cal = 0;
	char oper = 0;
	printf("��Ģ���� �Է�(����) : ");
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

int main()
{
	//Q1();
	//Q2();
	//Q3();
	//Q4();
	//Q5();
	Q6();
	return 0;
}