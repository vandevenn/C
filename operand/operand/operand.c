#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main(void)
//{
//	int a = 5, b = 5;
//	int pre, post;
//
//	pre = (++a) * 3; //증감한걸 즉시 반영
//	post = (b++) * 3; //반영하고 증감함
//
//	printf("이전값 : %d,%d", a, b);
//	printf("전위 :%d, 후위 : %d", pre, post);
//	return 0;
//}

//int main(void)
//{
//	double a = 4.0, b = 1.2;
//
//	printf("%.1lf + %.1lf = %.1lf \n", a, b, a + b);
//	printf("%.1lf - %.1lf = %.1lf \n", a, b, a - b);
//	printf("%.1lf * %.1lf = %.1lf \n", a, b, a * b);
//	printf("%.1lf / %.1lf = %.1lf \n", a, b, a / b);
//
//	return 0;
//}

//int main(void)
//{
//	int a, b, tot;
//	double avg;
//
//	printf("두 과목의 점수 :");
//	scanf("%d %d", &a, &b);
//	tot = a + b;
//	avg = tot / 2.0;
//
//	printf("평균 : %.1lf\n", avg);
//
//	return 0;
//}

int main(void)
{
	int kor = 3;
	int eng = 5;
	int mat = 4;

	int credits;
	int res;

	double kscore = 3.8;
	double escore = 4.4;
	double mscore = 3.9;

	double grade;
	
	credits = kor + eng + mat;
	grade = (kscore + escore + mscore) / 3;

	res = ((credits >= 10) && (grade > 4.0));
	printf("변수값 대입 방식 : %d\n", res);

	if ((credits >= 10) && (grade > 4.0))
		{
			printf("조건문 방식 : 1");
		}
	else
		{
			printf("조건문 방식 : 0");
		}

	return 0;
}
