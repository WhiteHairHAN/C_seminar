#include<stdio.h>
int main()
{
	int x, y, k;
	printf("출력할 단을 입력해주세요 :");
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
		printf("1~9 사이의 숫자로 다시 입력해주세요.\n");
	}
	return 0;
}