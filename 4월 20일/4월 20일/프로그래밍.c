#include<stdio.h>
#include<stdlib.h>
int main() {
	/*int i = 0;

	while (i < 30) {
		++i;
		printf("%3d", i);


		if (i % 5 == 0) {
			printf("\n");
		}
	}*/

	/*int user,cnt=0;

	int random = rand() % 100 + 1;

		while (1) {
			printf("1���� 100���� �� �߿��� ������ �����غ�����:");
			scanf_s(" %d", &user);


			if (random > user) {
				printf("������ ������ ���亸�� �����ϴ�\n");
				cnt++;
			}

			else if (random < user) {
				printf("������ ������ ���亸�� �����ϴ�\n");
				cnt++;
			}

			else if (random == user) {
				printf("������ ������ �����Դϴ�.\n");
				cnt++;
				break;
			}

		}
		printf("�õ� Ƚ��:%d\n", cnt);*/

		/*int num=0, cnt = 1, sum=0;
		char ch;

		do {

			printf("���α׷��� �Է��Ͻðڽ��ϱ�? (y/n) : ");
			scanf_s("%c", &ch, 1);
			getchar();

			if (ch == 'y' || ch == 'Y') {

				printf("���� �Է�:");
				scanf_s("%d", &num);

				if (num >= 0 && num <= 100) {
						++cnt;
						sum += num;

					if (num >= 90 && num <= 100) {
						printf("A����\n");
					}

					else if (num >= 80 && num < 90) {
						printf("B����\n");
					}

					else if (num >= 70 && num < 80) {
						printf("C����\n");
					}

					else if (num >= 60 && num < 70) {
						printf("D����\n");
					}
					else {
						printf("F����\n");
					}
				}
			}


			else if (ch == 'n' || ch == 'N') {

				break;
			}

		}while (1);

		printf("Ƚ�� : %d\n", cnt);
		printf("�հ� : %d\n", sum);
		printf("��� : %.2lf\n", (double)sum / cnt);
	int num=0, cnt = 1, sum=0;
		char ch;

		do {

			printf("���α׷��� �Է��Ͻðڽ��ϱ�? (y/n) : ");
			scanf_s("%c", &ch, 1);
			getchar();

			if (ch == 'y' || ch == 'Y') {

				printf("���� �Է�:");
				scanf_s("%d", &num);

				if (num >= 0 && num <= 100) {
						++cnt;
						sum += num;

					if (num >= 90 && num <= 100) {
						printf("A����\n");
					}

					else if (num >= 80 && num < 90) {
						printf("B����\n");
					}

					else if (num >= 70 && num < 80) {
						printf("C����\n");
					}

					else if (num >= 60 && num < 70) {
						printf("D����\n");
					}
					else {
						printf("F����\n");
					}
				}
			}


			else if (ch == 'n' || ch == 'N') {

				break;
			}

		}while (1);

		printf("Ƚ�� : %d\n", cnt);
		printf("�հ� : %d\n", sum);
		printf("��� : %.2lf\n", (double)sum / cnt);


	}

	}*/


	//int num = 0, cnt = 1, sum = 0;
	//char ch;
	//
	//do {
	//
	//	printf("���α׷��� �Է��Ͻðڽ��ϱ�? (y/n) : ");
	//	scanf_s("%c", &ch, 1);
	//	getchar();
	//
	//	if (ch == 'y' || ch == 'Y') {
	//
	//		printf("���� �Է�:");
	//		scanf_s("%d", &num);
	//
	//		if (num >= 0 && num <= 100) {
	//			++cnt;
	//			sum += num;
	//
	//			if (num >= 90 && num <= 100) {
	//				printf("A����\n");
	//			}
	//
	//			else if (num >= 80 && num < 90) {
	//				printf("B����\n");
	//			}
	//
	//			else if (num >= 70 && num < 80) {
	//				printf("C����\n");
	//			}
	//
	//			else if (num >= 60 && num < 70) {
	//				printf("D����\n");
	//			}
	//			else {
	//				printf("F����\n");
	//			}
	//		}
	//	}
	//
	//
	//	else if (ch == 'n' || ch == 'N') {
	//
	//		break;
	//	}
	//
	//} while (1);
	//
	//printf("Ƚ�� : %d\n", cnt);
	//printf("�հ� : %d\n", sum);
	//printf("��� : %.2lf\n", (double)sum / cnt);
	//
	//
	//}



	/*int num = 0, cnt = 0, sum = 0;
	char ch;

	do {

		printf("\n\n���α׷��� �Է��Ͻðڽ��ϱ�? (y/n) : ");
		scanf_s(" %c", &ch, 1);
		getchar();

		if (ch == 'y' || ch == 'Y') {

			printf("���� �Է�:");

			scanf_s("%d", &num);
			sum += num;
			cnt++;
			if (num >= 90 && num <= 100)
				printf("A����\n");
			else if (num >= 80 && num < 90)
				printf("B����\n");
			else if (num >= 70 && num < 80)
				printf("C����\n");
			else if (num >= 60 && num < 70)
				printf("D����\n");
			else if (num >= 0 && num < 60)
				printf("F����\n");
			else
				printf("�Է� ������ �ƴմϴ�.\n");
		}

		else if (ch == 'n' || ch == 'N')
			break;

		else
		{
			printf("�Է��� ���ĺ� %c�� ������ �ʽ��ϴ�. \n", ch);
			printf("���ĺ��� �ٽ� �Է��ϼ���.\n");
		}

	} while (1);


	printf("Ƚ�� : %d\n", cnt);
	printf("�հ� : %d\n", sum);
	printf("��� : %.2f\n", (float)sum / cnt);
	*/
	/*int num,i;

	printf("�� �Է�:");
	scanf_s("%d",&num);

	for (i = 1; i <= 9; i++) {
		printf("%3d * %3d = %3d\n",num,i,num*i);
	}*/

	/*int i, j;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			printf("%3d   *   %3d = %3d\n", i, j, i * j);
		}
}*/

/*for (int i = 1; i <= 5; i++) {
	for (int j = 1; j <= 5; j++) {
		printf("*");
	}
	printf("\n");
}

for (int i = 1; i <= 5; i++) {
	for (int j = 1; j <= i; j++) {
		printf("*");
	}
	printf("\n");
}

for (int i = 5; i > 0; i--) {
	for (int j = 0; j < i; j++) {
		printf("*");
	}
	printf("\n");
}

	for (int i = 1; i <= 5; i++) {
		for (int k = 0; k < 5 - i; k++) {
			printf(" ");
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 5; i > 0; i--) {
		for (int k = 0; k < 5 - i; k++) {
			printf(" ");
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	/*int num, i=2;

	printf("���� �Է�:");
	scanf_s("%d", &num);

	while (num % i == 0) {

		if (num == i) {
			printf("�Ҽ�\n");
		}
		else
			printf("�Ҽ��� �ƴϴ�\n");

	}

for (int i = 1; i <6; i++) {
	for (int j = 1; j <= i; j++) {
		printf("*");
	}
		printf("\n");
	}

for (int i = 1; i < 6; i++) {
	for (int j = 1; j <= 6 - i; j++) {
		printf("*");
	}
	printf("\n");
}*/

/*for (int i = 1; i <= 5; i++) {
	for (int j = 1; j <= 5-i; j++) {
	printf(" ");
	}
	for (int j = 1; j <= 2 * i - 1; j++) {
		printf("*");
	}
	printf("\n");
	}*/

	/* ���� ���ڰ� �����
		for (int i = 1; i < 6; i++) {
			for (int k = 0; k < 5 - i; k++) {
				printf(" ");
			}
			for (int j = 0; j < 2 * i - 1; j++) {
				printf("��");
			}
			printf("\n");
		}
		for (int i = 5; i > 0; i--) {
			for (int k = 0; k < 5 - i; k++) {
				printf(" ");
			}
			for (int j = 0; j < 2 * i - 1; j++) {
				printf("��");
			}
			printf("\n");
		}


		for (int i = 1; i < 6; i++) {
			for (int k = 0; k < 50 - i; k++) {
				printf(" ");
			}
			for (int j = 0; j < 2 * i - 1; j++) {
				printf("��");
			}
			printf("\n");
		}
		for (int i = 5; i > 0; i--) {
			for (int k = 0; k < 50 - i; k++) {
				printf(" ");
			}
			for (int j = 0; j < 2 * i - 1; j++) {
				printf("��");
			}
			printf("\n");
		}
		for (int i = 1; i < 6; i++) {
			for (int k = 0; k < 100 - i; k++) {
				printf(" ");
			}
			for (int j = 0; j < 2 * i - 1; j++) {
				printf("��");
			}
			printf("\n");
		}
		for (int i = 5; i > 0; i--) {
			for (int k = 0; k < 100 - i; k++) {
				printf(" ");
			}
			for (int j = 0; j < 2 * i - 1; j++) {
				printf("��");
			}
			printf("\n");
		}
		
	int sum = 0, cnt = 0, score = 0;
	char ch;


	do {

		printf("���α׷��� �����Ͻðڽ��ϱ�? (y/n) :");
		scanf_s(" %c", &ch, 1);
		getchar();

		if (ch == 'y' || ch == 'Y')
		{

			printf("���� �Է�:");

			scanf_s(" %d", &score);

			cnt++;
			sum += score;

			if (score >= 90 && score <= 100) {
				printf("A����\n");
			}
			else if (score >= 80 && score <= 90) {
				printf("B����\n");
			}
			else if (score >= 70 && score <= 80) {
				printf("C����\n");
			}
			else if (score >= 60 && score <= 70) {
				printf("D����\n");
			}
			else if (score >= 0 && score <= 60) {
				printf("F����\n");
			}
			else
				printf("�Է���뱸���� �ƴմϴ�\n");
		}

		else if (ch == 'n' || ch == 'N')
			break;
		else
			printf("�Է��� %c�� ������ �ʽ��ϴ�\n���ĺ��� �ٽ� �Է��ϼ���.\n", ch);

	} while (1);
	printf("Ƚ�� : %d\n", cnt);
	printf("���� : %d\n", sum);
	printf("��� : %.2f\n", (float)sum / cnt);
	*/
	
for (int a = 0; a < 10; a++) 
{
	if (a > 2)
		break;
	if (a > 5)
		continue;
	printf("have a good time\n");
	
}



}