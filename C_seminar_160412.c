#include<stdio.h>
int main()
{
	int x, y;
	printf("�� ������ �Է��ϼ��� :");
	scanf("%d %d", &x, &y);

	if (x >= y)
		printf("%d - %d = %d �Դϴ�.\n", x, y, x - y);
	else
		printf("%d - %d = %d �Դϴ�.\n", y, x, y - x);
		return 0;
}




