#include<stdio.h>
#include<stdlib.h>
int main() {

	int num,i=0;
	int random;

	random = rand() % 100;

	do {

		printf("������ �����غ����� :");
		scanf_s("%d", &num);

		if (num == random) {
			printf("�����Դϴ�.\n");
			
		}
		else if (num > random) {
			printf("���õ� ������ �����ϴ�.\n");
			i+=1;
		}
		else if (num < random) {
			printf("����� ������ �����ϴ�.\n");
			i+=1;
		}
	} while (num!=random);
	printf("�����մϴ�.�õ� Ƚ��%d\n", i);
	
}