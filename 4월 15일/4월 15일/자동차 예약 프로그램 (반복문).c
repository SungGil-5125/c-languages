#include<stdio.h>
int main() {

	int car;
	int i = 0, j = 0, k = 0;
	char ch;

	while (1) {

		printf("�ڵ��� ���� �����Ͻðڽ��ϱ�? (Y/N) :");
		scanf_s(" %c", &ch, sizeof(ch));


		while (ch == 'y' || ch == 'Y') {
			printf("�ڵ��� ���� ��ȣ:  1  2  3\n");
			printf("�ڵ��� ���� ��Ȳ:  %d  %d  %d\n", i, j, k);

			printf("�ڵ��� �� ����(1 ~ 3�� �� ����) :");
			scanf_s("%d", &car);

			if (car == 1 || car == 2 || car == 3) {

				printf("���� �Ϸ� �Ǿ����ϴ�.\n");

				if (car == 1) {
					++i;
				}
				else if (car == 2) {
					++j;
				}
				else if (car == 3) {
					++k;
				}

				else
					printf("�߸� �Է��߽��ϴ�. �𵨹�ȣ�� �ٽ� �Է��ϼ���.\n");
				break;
			}
			 
	else if (ch == 'n' || ch == 'N') {
		break;
			}

			printf("����ȣ");
		}
	}
}