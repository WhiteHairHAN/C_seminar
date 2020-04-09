#include<stdio.h>
int main()
{
	int x, y;
	printf("두 정수를 입력하세요 :");
	scanf("%d %d", &x, &y);

	if (x >= y)
		printf("%d - %d = %d 입니다.\n", x, y, x - y);
	else
		printf("%d - %d = %d 입니다.\n", y, x, y - x);
		return 0;
}




