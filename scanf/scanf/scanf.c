#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int a;
//int main()
//{
//	scanf("%d", &a);
//	printf("입력 값 : %d\n", a);
//
//	return 0;
//} //입력값 출력


int main()
{
	int age;
	double height;
	char grade;
	char name[20];



	printf("이름 입력 : ");
	scanf("%s", name);

	printf("학점 입력 : ");
	scanf(" %c", &grade); //%c 앞에 공백을 넣어 개행문자(\n = 엔터)무시

	printf("나이와 키 입력 : ");
	scanf("%d%lf", &age, &height);

	printf("%s의 학점은 %c입니다.\n", name, grade);
	printf("%s의 나이는 %d살 키는 %lf입니다.", name, age, height);
	return 0;
}



