#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main(void)
//{
//	int a = 5, b = 5;
//	int pre, post;
//
//	pre = (++a) * 3; //�����Ѱ� ��� �ݿ�
//	post = (b++) * 3; //�ݿ��ϰ� ������
//
//	printf("������ : %d,%d", a, b);
//	printf("���� :%d, ���� : %d", pre, post);
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
//	printf("�� ������ ���� :");
//	scanf("%d %d", &a, &b);
//	tot = a + b;
//	avg = tot / 2.0;
//
//	printf("��� : %.1lf\n", avg);
//
//	return 0;
//}

//int main(void)
//{
//	int kor = 3;
//	int eng = 5;
//	int mat = 4;
//
//	int credits;
//	int res;
//
//	double kscore = 3.8;
//	double escore = 4.4;
//	double mscore = 3.9;
//
//	double grade;
//	
//	credits = kor + eng + mat;
//	grade = (kscore + escore + mscore) / 3;
//
//	res = ((credits >= 10) && (grade > 4.0));
//	printf("������ ���� ��� : %d\n", res);
//
//	if ((credits >= 10) && (grade > 4.0))
//		{
//			printf("���ǹ� ��� : 1");
//		}
//	else
//		{
//			printf("���ǹ� ��� : 0");
//		}
//
//	return 0;
//}

//int main()
//{
//	int res;
//	
//	res = (sizeof(short) > sizeof(long));
//
//	if (res)
//	{
//		printf("short");
//	}
//	else
//	{
//		printf("long");
//	}
//	
//	return 0;
//}

void audience() //����� ��� �Լ�
{
	int seat = 70;
	int audience = 65;
	double rate;

	rate = (double)audience / (double)seat * 100;

	printf("����� : %.1lf%%", rate); //
}

void trans()
{
	int hour, min, sec;
	double time = 3.76;

	hour = (int)time; // = 3
	min = (time - hour) * 60; // = 45
	sec = (((time - hour) * 60) - min) * 60 ;

	printf("%0.2lf �ð��� %d�ð� %d�� %d���Դϴ�.", time, hour, min, sec);

}

int main()
{
	//audience();
	trans();
	
	return 0;
}

