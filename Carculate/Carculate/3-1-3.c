#include <stdio.h>

void sum()
{
	int kor = 70;
	int eng = 80;
	int mat = 90;

	int sum = (kor + eng + mat);
	printf("국어 : %d, 영어 : %d, 수학 : %d\n", kor, eng, mat);
	printf("총점 : %d", sum);
}

int main()
{
	sum();
	return 0;
}