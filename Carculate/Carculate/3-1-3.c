#include <stdio.h>

void sum()
{
	int kor = 70;
	int eng = 80;
	int mat = 90;

	int sum = (kor + eng + mat);
	printf("���� : %d, ���� : %d, ���� : %d\n", kor, eng, mat);
	printf("���� : %d", sum);
}

int main()
{
	sum();
	return 0;
}