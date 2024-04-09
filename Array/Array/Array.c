#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void array()
{
	int ary[5];

	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	scanf("%d", &ary[3]);

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);
}

void array2()
{
	int score[5];
	int i;
	int total = 0;
	double avg;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
	}

	for (i = 0; i < 5; i++)
	{
		total += score[i];
	}
	avg = total / 5.0;
	for (i = 0; i < 5; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");
	printf("평균 : %.1lf\n", avg);

}

void sizeof0()
{
	int score[5];
	int i;
	int total = 0;
	double avg;
	int count;

	count = sizeof(score) / sizeof(score[0]);

	for (i = 0; i < count; i++)
	{
		scanf("%d", &score[i]);
	}

	for (i = 0; i < count; i++)
	{
		total += score[i];
	}

	avg = total / (double)count;
	
	for (i = 0; i < count; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n평균 : %.1lf\n", avg);
}

void Q247()
{
	int A[3] = {1, 2, 3};
	int B[10];
	int i;

	for (i = 0; i < 10; i++)
	{
		B[i] = A[i % 3];
	}

	for (i = 0; i < 10; i++)
	{
		printf("%5d", B[i]);
	}
}
void Q249()
{
	char str[80] = "applejam";

	printf("최초 문자열 : %s\n", str);
	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("입력 후 문자열 : %s\n", str);
 }

void Q252()
{
	char	str1[80] = "cat";
	char	str2[80];

	strcpy(str1, "tiger");
	strcpy(str2, str1);
	printf("%s, %s\n", str1, str2);
}

void Q254()
{
	char str[80];

	printf("문자열 입력 : ");
	gets(str);
	printf("입력된 문자열 : ");
	puts(str);
}

void Q259()
{
	char str1[80], str2[80];
	char temp[80];

	printf("두 문자열 입력 :");
	scanf("%s %s", str1, str2);
	printf("바뀌기 전 : %s, %s\n", str1, str2);
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	printf("바꾼 후: %s, %s\n", str1, str2);
}

void Q260()
{
	char str1[80], str2[80];
	char temp[80] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','W','X','Y','Z'};
	int size1 = sizeof(str1) / sizeof(str1[0]);
	int A;

	printf("문장 입력 : ");
	scanf("%s %s", str1, str2);
	
	for (int i = 0; i < size1; i++)
	{
		if (str1[i] == temp)
		{
			
		}
	}
	printf("바뀐 문장 : %s, %s\n", str1, str2);
	printf("바뀐 문자 수 : %d\n", A);
}
int main()
{
	//array();
	//array2();
	//sizeof0();
	//Q247();
	//Q249();
	//Q252();
	//Q254();
	Q259();
	return 0;
}