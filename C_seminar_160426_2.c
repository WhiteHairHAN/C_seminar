#include<stdio.h>
int main()
{
	int n, i;
	int sum = 1;
	printf("계승을 입력하세요. : ");
	scanf("%d", &n);
	
	for (i = 1; i < n + 1; i++)
	{
		sum *= i;
	}
	printf("%d ! = %d 입니다.", n, sum);
}