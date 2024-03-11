#include <stdio.h>

//int main()
//{
//	int a;
//	a = 10;
//	printf("a 의 값은 : %d \n", a);
//	return 0;
//} //a의 값은 10 출력

//int main()
//{
//	int a;
//	a = 127;
//	printf("a 의 값은 %d 진수로 %o 입니다. \n", 8, a);
//	printf("a 의 값은 %d 진수로 %d 입니다. \n", 10, a);
//	printf("a 의 값은 %d 진수로 %x 입니다. \n", 16, a);
//	return 0;
//} // 8진수, 10진수, 16진수 출력

//int main()
//{
//	float a = 3.141592f;
//	double b = 3.141592;
//	printf("a : %f \n", a);
//	printf("b : %f \n", b);
//	return 0;
//} // 실수형 출력

int main()
{
	float a = 3.141592f;
	double b = 3.141592;
	int c = 123;
	printf("a : %.2f \n", a); //소수점 2째 자리까지 출력
	printf("c : %5d \n", c);	//자리수를 5자리로 맞추어라
	printf("b : %6.3f \n", b);	//6자리로 맞추되 소숫점 3째 자리까지 출력
	return 0;
} // printf 형식