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
		printf("���� ���߱� ���ӿ� ���Ű��� ȯ���մϴ�.\n");
		printf("1~10������ ���ڸ� �Է��غ�����.\n");
		printf("���ӽ��� ==>> 1 \n");
		printf("�������� ==>> 0 \n");
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
			printf("\n������ �����մϴ�.\n");
			printf("���α׷��� �����Ϸ��� 0�� �Է��ϼ���.\n");
			printf("\n============================================\n");
			while (1)
			{
				printf("\nNumber? :");
				scanf("%d", &input_number);

				if (input_number > 0 && input_number < 11)
				{
					if (input_number > random_number)
					{
						printf("%d ���� ���� �� �Դϴ�.\n",input_number);
						count++;
					}
					if (input_number < random_number)
					{
						printf("%d ���� ū �� �Դϴ�..\n",input_number);
						count++;
					}
					if (input_number == random_number)
					{
						printf("���ڸ� ���߼̽��ϴ�.\n");
						printf("�õ��� Ƚ�� : %d\n\n", count);
						printf("============================================\n");
						printf("\n������ ����Ͻðڽ��ϱ�?\n");
						printf("��     ==> 1\n");
						printf("�ƴϿ� ==> 0\n");
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
							printf("�ٽ� �Է��ϼ���.\n\n");
							goto position2;
					}
				}
				if (input_number == 0)
				{
					break;
				}
				else
				{
					printf("���ڸ� �ٽ� �Է����ּ���.\n");
				}
			}
		case 0 :
			printf("\n============================================\n");
			printf("\n���α׷��� �����մϴ�.\n");
			printf("\n============================================\n\n");
			break;
		default :
			printf("�ٽ� �Է��ϼ���.\n\n");
			goto original_position;
		}
	return 0;
}