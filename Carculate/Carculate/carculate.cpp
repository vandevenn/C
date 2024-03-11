#include <stdio.h>

//int main()
//{
//	int a, b;
//	a = 10;
//	b = 3;
//	printf("a + b는 : %d \n", a + b);
//	printf("a - b는 : %d \n", a - b);
//	printf("a * b는 : %d \n", a * b);
//	printf("a / b는 : %d \n", a / b);
//	printf("a %% b는 : %d \n", a % b); //나머지
//	return 0;
//}

//int main()
//{
//	int a = 1;
//
//	printf("++a : %d \n", ++a);	//전위형 더한값 바로 반영
//
//	a = 1;
//
//	printf("a++ : %d \n", a++);	//후위형 더한값 다음부터 반영
//	printf("a : %d \n", a);
//
//	return 0;
//}

int main()
{
	int a = 0xAF; // 10101111
	int b = 0xB5; // 10110101

	printf("%x \n", a & b); //and 계산 = 10100101
	printf("%x \n", a | b); //or 계산 = 10111111
	printf("%x \n", a ^ b); //xor 계산 = 00011010
	printf("%x \n", ~a); // not 계산 = 1 ... 01010000
	printf("%x \n", a << 2); //왼쪽 쉬프트 계산 = 10 10111100
	printf("%x \n", b >> 3); //오른쪽 쉬프트 계산 = 00010110

	return 0;
}