#include <stdio.h>

int main(void) {

	/*int num = 1;
	while (num <= 10) {
		printf("%3d", num);
		num++;

	}*/

	/*int fac = 1, i = 1;
	while(i<=10){
		fac *= i;
		printf("%d : %d\n", i, fac);
		i++;
	}*/

	/*int dan,num=1;
	scanf_s("%d",&dan);

	while (num <= 9) {
		printf("%d * %d = %d\n", dan, num, dan * num);
		num++;
	}*/

	/*int dan=2, num;

	while (dan < 10) {
		num = 1;
		printf("----%d단----\n", dan);
		while (num < 10) {
			printf("%d * %d = %d\n", dan, num,dan*num);
			num++;
		}
		dan++;
	}*/


	/*int num;

	while (1) {
		printf("정수 입력:");
		scanf_s("%d", &num);
		printf("%d\n", num);

	if(num == 0)
		break;
	}*/

	int i = 0, num;

	printf("정수를 입력하세요:");
	scanf_s("%d", &num);

	while (num <= i) {
	
		if (num % i==0)
			printf("%d", i);

	}



}
