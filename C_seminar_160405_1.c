#include <stdio.h>
int main(void)   // 함수
{
	int x;
	int y;
	int z;
	
	printf("세 정수를 입력하세요!\n\n");					  // 세정수를 입력하라는 텍스트 호출
	printf("첫번째 정수를 입력하세요 : ");					  // 첫번째 정수를 입력하라는 텍스트 호출
	scanf("%d", &x);												      // 첫번째 정수를 입력받아 x에 저장
	printf("두번째 정수를 입력하세요 : ");				      // 두번째 정수를 입력하라는 텍스트 호출
	scanf("%d", &y);													  // 두번째 정수를 입력 받아 y에 저장
	printf("세번째 정수를 입력하세요 : ");				      // 세번째 정수를 입력하라는 텍스트 호출
	scanf("%d", &z);													  // 세번째 정수를 입력받아 z에 저장
	
	printf("세 수의 값은 %d*%d+%d = %d\n\n", x, y, z, x*y + z);   // 세수의 연산을 출력하고 텍스트를 띄움
}