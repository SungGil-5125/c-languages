#include<stdio.h>
int main()
{
	int j, mod = 1, i;

	printf("������ �Է��ϼ���:");
	scanf_s("%d", &i);

	for (j = 1; j < i; j++) {
		mod *= j;
	}
	printf("%d!�� %d�Դϴ�.", i, mod);


}