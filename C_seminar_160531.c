#include<stdio.h>
#define SIZE 100

int main()
{
	char word[SIZE];
	int length = 0; 
	int i; 
	char max_n = 0;
	
	printf("�ܾ �Է��ϼ���:");
	scanf("%s", &word);


	while (word[length] != '\0')
	{
		length++;
		max_n = word[0];
		for (i = 0; i < length; i++)
		{
			if (max_n < word[i])
				max_n = word[i];
		}
	}
	printf("�ƽ�Ű �ڵ尪�� ���� ū ���ڴ� %c�Դϴ�.\n", max_n);
	return 0;
}