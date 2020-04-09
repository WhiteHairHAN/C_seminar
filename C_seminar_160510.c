#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int random_number;
	int input_number;
	int count = 1;
	int choice_1;
	int choice_2;
		
		printf("============================================\n");
		printf("숫자 맞추기 게임에 오신것을 환영합니다.\n");
		printf("1~10사이의 숫자를 입력해보세요.\n");
		printf("게임시작 ==>> 1 \n");
		printf("게임종료 ==>> 0 \n");
		printf("============================================\n");
		original_position:
		printf("choice = ");
		scanf("%d", &choice_1);
		
		switch (choice_1)
		{
		case 1:
			position:
			srand((unsigned int)time(NULL));
			random_number = rand() % (10) + 1 ;
			printf("\n============================================\n");
			printf("\n게임을 시작합니다.\n");
			printf("프로그램을 종료하려면 0을 입력하세요.\n");
			printf("\n============================================\n");
			while (1)
			{
				printf("\nNumber? :");
				scanf("%d", &input_number);

				if (input_number > 0 && input_number < 11)
				{
					if (input_number > random_number)
					{
						printf("%d 보다 작은 수 입니다.\n",input_number);
						count++;
					}
					if (input_number < random_number)
					{
						printf("%d 보다 큰 수 입니다..\n",input_number);
						count++;
					}
					if (input_number == random_number)
					{
						printf("숫자를 맞추셨습니다.\n");
						printf("시도한 횟수 : %d\n\n", count);
						printf("============================================\n");
						printf("\n게임을 계속하시겠습니까?\n");
						printf("예     ==> 1\n");
						printf("아니오 ==> 0\n");
						printf("\n============================================\n");
						position2:
						printf("choice = ");
						scanf("%d", &choice_2);
						if (choice_2 == 1) 
						{
							count = 1;
							goto position;
						}
						if (choice_2 == 0)
						{
							break;
						}
						else
							printf("다시 입력하세요.\n\n");
							goto position2;
					}
				}
				if (input_number == 0)
				{
					break;
				}
				else
				{
					printf("숫자를 다시 입력해주세요.\n");
				}
			}
		case 0 :
			printf("\n============================================\n");
			printf("\n프로그램을 종료합니다.\n");
			printf("\n============================================\n\n");
			break;
		default :
			printf("다시 입력하세요.\n\n");
			goto original_position;
		}
	return 0;
}