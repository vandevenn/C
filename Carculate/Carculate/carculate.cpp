#include <stdio.h>

//int main()
//{
//	int a, b;
//	a = 10;
//	b = 3;
//	printf("a + b�� : %d \n", a + b);
//	printf("a - b�� : %d \n", a - b);
//	printf("a * b�� : %d \n", a * b);
//	printf("a / b�� : %d \n", a / b);
//	printf("a %% b�� : %d \n", a % b); //������
//	return 0;
//}

//int main()
//{
//	int a = 1;
//
//	printf("++a : %d \n", ++a);	//������ ���Ѱ� �ٷ� �ݿ�
//
//	a = 1;
//
//	printf("a++ : %d \n", a++);	//������ ���Ѱ� �������� �ݿ�
//	printf("a : %d \n", a);
//
//	return 0;
//}

int main()
{
	int a = 0xAF; // 10101111
	int b = 0xB5; // 10110101

	printf("%x \n", a & b); //and ��� = 10100101
	printf("%x \n", a | b); //or ��� = 10111111
	printf("%x \n", a ^ b); //xor ��� = 00011010
	printf("%x \n", ~a); // not ��� = 1 ... 01010000
	printf("%x \n", a << 2); //���� ����Ʈ ��� = 10 10111100
	printf("%x \n", b >> 3); //������ ����Ʈ ��� = 00010110

	return 0;
}