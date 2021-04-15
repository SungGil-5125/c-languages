#include<stdio.h>
#include<stdlib.h>
int main() {

	int num,i=0;
	int random;

	random = rand() % 100;

	do {

		printf("정답을 추측해보세요 :");
		scanf_s("%d", &num);

		if (num == random) {
			printf("정답입니다.\n");
			
		}
		else if (num > random) {
			printf("제시된 정수가 높습니다.\n");
			i+=1;
		}
		else if (num < random) {
			printf("제사된 정수가 낮습니다.\n");
			i+=1;
		}
	} while (num!=random);
	printf("축하합니다.시도 횟수%d\n", i);
	
}