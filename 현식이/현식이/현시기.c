#include<stdio.h>
int main() 
{
	/*
	int i = 0;

	while (i < 5) {
		printf("hello world\n");
		i++;
	}*/

	/*int dan, i = 1;

	printf("단 입력:");
	scanf_s("%d", &dan);

	while (i <= 9) {
		printf("%3d * %3d = %3d\n", dan, i, dan * i);
		i++;
	}*/

	/*int i = 1;

	while (i <= 9) {
		printf("%d %d\n", i, i * i);
		i++;
	}*/

	/*int n,i=0,c=0;

	printf("입력:");
	scanf_s("%d", &n);

	while (n >= i) {
		c += i;
		i++;
	}
	printf("%d",c);*/

	/*int n, i = 0, c = 0;

	printf("입력:");
	scanf_s("%d", &n);

	while (n >= i) {
		c += i;
		i+=2;
	}
	printf("%d", c);*/
	
	int num=0, age=0,sum=0,i;

	while (1) {
		printf("성적을 입력하세요:");
		scanf_s(" %d", &i);

		if (i < 0)
			break;
		sum += i;
		num++;
	}
		
		age = sum / num;
		printf("성적의 평균은 %d",age);

	/*int num1, num2;
	char ch;

	while(num)

		printf("정수를 입력하세요:");
		scanf_s("%d", &num1); */
	

	


	

}