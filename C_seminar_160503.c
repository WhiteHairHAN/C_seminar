#include<stdio.h>
int main()
{
	int x, y, k;
	printf("����� ���� �Է����ּ��� :");
	scanf("%d", &k);
	
	if (0 < k && k < 10)
	{
		for (y=1; y <=9 ; y++)
		{
			for (x=0; x<=y+k-2; x++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else
	{
		printf("1~9 ������ ���ڷ� �ٽ� �Է����ּ���.\n");
	}
	return 0;
}