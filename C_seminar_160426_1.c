#include<stdio.h>
int main()
{
	int score;
	printf("점수를 입력하시오.");
	scanf("%d", &score);
	
	switch (score / 10)
	{
	case 10:
		printf("학점 A\n"); 
		break;
	case 9:
		printf("학점 A\n");
		break;
	case 8:
		printf("학점 B\n"); 
		break;
	case 7:
		printf("학점 C\n"); 
		break;
	case 6:
		printf("학점 D\n"); 
		break;
	default:
		printf("학점 F\n");
	}
}