#include <stdio.h>

//int main()
//{
//	int a;
//	a = 10;
//	printf("a �� ���� : %d \n", a);
//	return 0;
//} //a�� ���� 10 ���

//int main()
//{
//	int a;
//	a = 127;
//	printf("a �� ���� %d ������ %o �Դϴ�. \n", 8, a);
//	printf("a �� ���� %d ������ %d �Դϴ�. \n", 10, a);
//	printf("a �� ���� %d ������ %x �Դϴ�. \n", 16, a);
//	return 0;
//} // 8����, 10����, 16���� ���

//int main()
//{
//	float a = 3.141592f;
//	double b = 3.141592;
//	printf("a : %f \n", a);
//	printf("b : %f \n", b);
//	return 0;
//} // �Ǽ��� ���

int main()
{
	float a = 3.141592f;
	double b = 3.141592;
	int c = 123;
	printf("a : %.2f \n", a); //�Ҽ��� 2° �ڸ����� ���
	printf("c : %5d \n", c);	//�ڸ����� 5�ڸ��� ���߾��
	printf("b : %6.3f \n", b);	//6�ڸ��� ���ߵ� �Ҽ��� 3° �ڸ����� ���
	return 0;
} // printf ����