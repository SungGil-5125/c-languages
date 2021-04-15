#include<stdio.h>
int main()
{
	int j, mod = 1, i;

	printf("정수를 입력하세요:");
	scanf_s("%d", &i);

	for (j = 1; j < i; j++) {
		mod *= j;
	}
	printf("%d!은 %d입니다.", i, mod);


}