#include <stdio.h>

int main(void) // 함수
{
	int x, y, result;                                            //첫번째 두번째 정수와 연산후 출력값 변수 선언

	printf("두개의 정수를 입력하시오 :");		 // 두개의 정수를 입력하라는 텍스트 호출
	scanf("%d %d", &x, &y);							 // 첫번째 두번째 변수를 입력받아 x,y에 저장

	result = x / y;										     // 나눗셈연산
	printf("몫은  %d 입니다\n",  result);			 // 텍스트출력후 연산후 값 출력

	result = x%y;                                              // 나머지연산
	printf("나머지는 %d 입니다\n", result);     // 텍스트출력후 연산후 값 출력

}