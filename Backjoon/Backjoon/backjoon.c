#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int A, B, res;
//	scanf("%d %d", &A, &B);
//	res = A + B;
//	printf("%d", res);
//	return 0;
//}

//int main()
//{
//	int A = 7; 
//	int B = 3;
//	int res;
//
//	printf("%d\n", A + B);
//	printf("%d\n", A - B);
//	printf("%d\n", A * B);
//	printf("%d\n", A / B);
//	printf("%d\n", A % B);
//
//	return 0;
//	
//}

//int main()
//{
//    char str[50];
//    gets(str);
//    printf("%s??!", str);
//
//}

//int main()
//{
//	int y;
//
//	scanf("%d", &y);
//	if ((y < 1000) || (y > 3000))
//	{
//		printf("1000에서 3000사이 년도를 입력해주세요.");
//	}
//	else
//	{
//		printf("%d", y - 543);
//	}
//}

//int main()
//{
//	int A = 0; 
//	int B = 0;
//	int C = 0;
//
//	scanf("%d %d %d", &A, &B, &C);
//	printf("%d\n", (A + B) % C);
//	printf("%d\n", ((A % C) + (B % C)) % C);
//	printf("%d\n", (A * B) % C);
//	printf("%d\n", ((A % C) * (B % C)) % C);
//}

//int main()
//{
//	int A = 0;
//	int B = 0;
//	scanf("%d", &A);
//	scanf("%d", &B);
//
//	printf("%d\n", A * (B % 10));
//	printf("%d\n", A * ((B % 100) / 10));
//	printf("%d\n", A * (B / 100));
//	printf("%d\n", A * B);
//
//	return 0;
//}

//int main()
//{
//	long long A = 0;
//	long long B = 0;
//	long long C = 0;
//
//	scanf("%lld %lld %lld", &A,&B,&C);
//	printf("%lld", A + B + C);
//
//	return 0;
//}

//int main()
//{
//	printf("\\    /\\\n");
//	printf(" )  ( ')\n");
//	printf("(  /  )\n");
//	printf(" \\(__)|\n");
//
//	return 0;
//}

//int main()
//{
//	printf("|\\_/|\n");
//	printf("|q p|   /}\n");
//	printf("( 0 )\"\"\"\\\n");
//	printf("|\"^\"`    |\n");
//	printf("||_/=\\\\__|\n");
//
//	return 0;
//}

//int main()
//{
//	int A = 0;
//	int B = 0;
//
//	scanf("%d %d", &A, &B);
//	if ((A < -10000) || (A > 10000))
//	{
//		printf("-10000에서 10000범위의 정수를 입력하시오");
//	}
//	else if ((B < -10000) || (B > 10000))
//	{
//		printf("-10000에서 10000범위의 정수를 입력하시오");
//	}
//	else if (A > B)
//	{
//		printf(">");
//	}
//	else if (A == B)
//	{
//		printf("==");
//	}
//	else if (A < B)
//	{
//		printf("<");
//	}
//
//	return 0;
//}

//int main()
//{
//	int A = 0;
//
//	scanf("%d", &A);
//
//	if ((A >= 90) && (A <= 100))
//	{
//		printf("A");
//	}
//	else if ((A >= 80) && (A <= 89))
//	{
//		printf("B");
//	}
//	else if ((A >= 70) && (A <= 79))
//	{
//		printf("C");
//	}
//	else if ((A >= 60) && (A <= 69))
//	{
//		printf("D");
//	}
//	else if ((A > 100) && (A < 0))
//	{
//		printf("잘못된 점수를 입력하셧습니다.");
//	}
//	else
//	{
//		printf("F");
//	}
//
//	return 0;
//}

//int main()
//{
//	int A = 0;
//
//	scanf("%d", &A);
//
//	if ((A % 4 == 0) && ((A % 100 != 0) || (A % 400 == 0)))
//	{
//		printf("1");
//	}
//	else if ((A < 1) || (A > 4000))
//	{
//		printf("입력년도는 1이상 4000이하 이어야 합니다.");
//	}
//	else
//	{
//		printf("0");
//	}
//
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	int y = 0;
//
//	scanf("%d\n%d", &x, &y);
//	if ((x < -1000) || (x > 1000) || (x == 0) || (y < -1000) || (y > 1000) || (y == 0))
//	{
//		printf("-1000 ~ 1000 범위 이내의 0이 아닌 좌표값을 입력 하시오.");
//	}
//	else if ((x > 0) && (y > 0))
//	{
//		printf("1");
//	}
//	else if ((x < 0) && (y > 0))
//	{
//		printf("2");
//	}
//	else if ((x < 0) && (y < 0))
//	{
//		printf("3");
//	}
//	else if ((x > 0) && (y < 0))
//	{
//		printf("4");
//	}
//
//	return 0;
//}

//int main()
//{
//	int H = 0;
//	int M = 0;
//
//	scanf("%d %d", &H, &M);
//	if (((H < 0) || (H > 23)) && ((M < 0) || (H > 59)))
//	{
//		printf("정확한 시간을 입력하세요");
//	}
//	M = M - 45;
//	if (M < 0)
//	{
//		H = H - 1;
//		if (H < 0)
//		{
//			H = 24 + H;
//		}
//		M = 60 + M;
//	}
//	printf("%d %d", H, M);
//
//
//}

//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	scanf("%d %d\n%d", &A, &B, &C);
//	
//	if (((A < 0) || (A > 23)) || ((B < 0) || (B > 59)) || ((C < 0) || (C > 1000)))
//	{
//		printf("정확한 시간을 입력하세요");
//	}
//	B = B + C;
//	if (B > 59)
//	{
//		A = A + (B / 60);
//		if (A > 23)
//		{
//			A = A - 24;
//		}
//		B = B % 60;
//
//	}
//	printf("%d %d", A, B);
//
//}

//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	int res = 0;
//
//	scanf("%d %d %d", &A, &B, &C);
//
//	if ((A == B) && (A == C))
//	{
//		res = 10000 + (A * 1000);
//	}
//	else if (A == B)
//	{
//		res = 1000 + A * 100;
//	}
//	else if (B == C)
//	{
//		res = 1000 + B * 100;
//	}
//	else if (A == C)
//	{
//		res = 1000 + C * 100;
//	}
//	else if ((A != B) && (A != C) && (B != C))
//	{
//		if ((A > B) && (A > C))
//		{
//			res = 100 * A;
//		}
//		else if ((B > A) && (B > C))
//		{
//			res = 100 * B;
//		}
//		else if ((C > A) && (C > B))
//		{
//			res = 100 * C;
//		}
//	}
//
//	printf("%d", res);
//
//	return 0;
//}

int main()
{
	int N = 0;
	int i;
	scanf("%d", &N);
	for (i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", N, i, N * i);
	}
	
}
