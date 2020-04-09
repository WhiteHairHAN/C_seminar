#include<stdio.h>
#define SIZE 100

int main()
{
	char word[SIZE];
	int length = 0; 
	int i; 
	char max_n = 0;
	
	printf("단어를 입력하세요:");
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
	printf("아스키 코드값이 가장 큰 문자는 %c입니다.\n", max_n);
	return 0;
}