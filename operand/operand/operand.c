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

int main(void)
{
	int a, b, tot;
	double avg;

	printf("�� ������ ���� :");
	scanf("%d %d", &a, &b);
	tot = a + b;
	avg = tot / 2.0;

	printf("��� : %.1lf\n", avg);

	return 0;
}


