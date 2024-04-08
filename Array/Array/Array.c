#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
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
	printf("Æò±Õ : %.1lf\n", avg);

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
	printf("\nÆò±Õ : %.1lf\n", avg);
}
int main()
{
	//array();
	//array2();
	sizeof0();
	return 0;
}