#include<stdio.h>
int main() 
{
	int num, sum = 0;
	do 
	{
		printf("������ �Է��ϼ���:");
		scanf_s("%d", &num);
		sum += num;
	} while (num != 0);
		printf("sum=%d", sum);
}