#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int a;
//int main()
//{
//	scanf("%d", &a);
//	printf("�Է� �� : %d\n", a);
//
//	return 0;
//} //�Է°� ���


int main()
{
	int age;
	double height;
	char grade;
	char name[20];



	printf("�̸� �Է� : ");
	scanf("%s", name);

	printf("���� �Է� : ");
	scanf(" %c", &grade); //%c �տ� ������ �־� ���๮��(\n = ����)����

	printf("���̿� Ű �Է� : ");
	scanf("%d%lf", &age, &height);

	printf("%s�� ������ %c�Դϴ�.\n", name, grade);
	printf("%s�� ���̴� %d�� Ű�� %lf�Դϴ�.", name, age, height);
	return 0;
}



