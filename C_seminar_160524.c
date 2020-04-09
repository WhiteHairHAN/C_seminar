#include<stdio.h>
#define SIZE 5

int main(void)
{
	int num[SIZE] = { 0 };
	int i, max, min;

	printf("임의의 5개 정수를 입력하시오.\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("NUMBER [%d] : ",i + 1);
		scanf("%d", &num[i]);
	}

	max = num[0];
	min = num[0];
	for (i = 1; i < SIZE; i++)
	{
		if (max<num[i])
			max = num[i];
	
		if (min>num[i])
			min = num[i];
	}
	printf("최솟값은 %d 입니다.\n", min);
	printf("최댓값은 %d 입니다.\n", max);
}