#include<stdio.h>
int main()
{
	int n, i;
	int sum = 1;
	printf("����� �Է��ϼ���. : ");
	scanf("%d", &n);
	
	for (i = 1; i < n + 1; i++)
	{
		sum *= i;
	}
	printf("%d ! = %d �Դϴ�.", n, sum);
}