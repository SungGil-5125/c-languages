#include<stdio.h>
int main() 
{
	int num, sum = 0;
	do 
	{
		printf("정수를 입력하세요:");
		scanf_s("%d", &num);
		sum += num;
	} while (num != 0);
		printf("sum=%d", sum);
}