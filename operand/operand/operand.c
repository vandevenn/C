#include <stdio.h>

int main(void)
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;
	post = (b++) * 3;

	printf("이전값 : %d,%d", a, b);
	printf("전위 :%d, 후위 : %d", pre, post);
	return 0;
}

