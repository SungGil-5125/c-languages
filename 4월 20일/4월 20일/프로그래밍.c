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
			printf("1부터 100까지 수 중에서 정답을 추측해보세요:");
			scanf_s(" %d", &user);


			if (random > user) {
				printf("제시한 정수가 정답보다 낮습니다\n");
				cnt++;
			}

			else if (random < user) {
				printf("제시한 정수가 정답보다 높습니다\n");
				cnt++;
			}

			else if (random == user) {
				printf("제시한 정수가 정답입니다.\n");
				cnt++;
				break;
			}

		}
		printf("시도 횟수:%d\n", cnt);*/

		/*int num=0, cnt = 1, sum=0;
		char ch;

		do {

			printf("프로그램을 입력하시겠습니까? (y/n) : ");
			scanf_s("%c", &ch, 1);
			getchar();

			if (ch == 'y' || ch == 'Y') {

				printf("점수 입력:");
				scanf_s("%d", &num);

				if (num >= 0 && num <= 100) {
						++cnt;
						sum += num;

					if (num >= 90 && num <= 100) {
						printf("A학점\n");
					}

					else if (num >= 80 && num < 90) {
						printf("B학점\n");
					}

					else if (num >= 70 && num < 80) {
						printf("C학점\n");
					}

					else if (num >= 60 && num < 70) {
						printf("D학점\n");
					}
					else {
						printf("F학점\n");
					}
				}
			}


			else if (ch == 'n' || ch == 'N') {

				break;
			}

		}while (1);

		printf("횟수 : %d\n", cnt);
		printf("합계 : %d\n", sum);
		printf("평균 : %.2lf\n", (double)sum / cnt);
	int num=0, cnt = 1, sum=0;
		char ch;

		do {

			printf("프로그램을 입력하시겠습니까? (y/n) : ");
			scanf_s("%c", &ch, 1);
			getchar();

			if (ch == 'y' || ch == 'Y') {

				printf("점수 입력:");
				scanf_s("%d", &num);

				if (num >= 0 && num <= 100) {
						++cnt;
						sum += num;

					if (num >= 90 && num <= 100) {
						printf("A학점\n");
					}

					else if (num >= 80 && num < 90) {
						printf("B학점\n");
					}

					else if (num >= 70 && num < 80) {
						printf("C학점\n");
					}

					else if (num >= 60 && num < 70) {
						printf("D학점\n");
					}
					else {
						printf("F학점\n");
					}
				}
			}


			else if (ch == 'n' || ch == 'N') {

				break;
			}

		}while (1);

		printf("횟수 : %d\n", cnt);
		printf("합계 : %d\n", sum);
		printf("평균 : %.2lf\n", (double)sum / cnt);


	}

	}*/


	//int num = 0, cnt = 1, sum = 0;
	//char ch;
	//
	//do {
	//
	//	printf("프로그램을 입력하시겠습니까? (y/n) : ");
	//	scanf_s("%c", &ch, 1);
	//	getchar();
	//
	//	if (ch == 'y' || ch == 'Y') {
	//
	//		printf("점수 입력:");
	//		scanf_s("%d", &num);
	//
	//		if (num >= 0 && num <= 100) {
	//			++cnt;
	//			sum += num;
	//
	//			if (num >= 90 && num <= 100) {
	//				printf("A학점\n");
	//			}
	//
	//			else if (num >= 80 && num < 90) {
	//				printf("B학점\n");
	//			}
	//
	//			else if (num >= 70 && num < 80) {
	//				printf("C학점\n");
	//			}
	//
	//			else if (num >= 60 && num < 70) {
	//				printf("D학점\n");
	//			}
	//			else {
	//				printf("F학점\n");
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
	//printf("횟수 : %d\n", cnt);
	//printf("합계 : %d\n", sum);
	//printf("평균 : %.2lf\n", (double)sum / cnt);
	//
	//
	//}



	/*int num = 0, cnt = 0, sum = 0;
	char ch;

	do {

		printf("\n\n프로그램을 입력하시겠습니까? (y/n) : ");
		scanf_s(" %c", &ch, 1);
		getchar();

		if (ch == 'y' || ch == 'Y') {

			printf("점수 입력:");

			scanf_s("%d", &num);
			sum += num;
			cnt++;
			if (num >= 90 && num <= 100)
				printf("A학점\n");
			else if (num >= 80 && num < 90)
				printf("B학점\n");
			else if (num >= 70 && num < 80)
				printf("C학점\n");
			else if (num >= 60 && num < 70)
				printf("D학점\n");
			else if (num >= 0 && num < 60)
				printf("F학점\n");
			else
				printf("입력 구간이 아닙니다.\n");
		}

		else if (ch == 'n' || ch == 'N')
			break;

		else
		{
			printf("입력한 알파벳 %c는 허용되지 않습니다. \n", ch);
			printf("알파벳을 다시 입력하세요.\n");
		}

	} while (1);


	printf("횟수 : %d\n", cnt);
	printf("합계 : %d\n", sum);
	printf("평균 : %.2f\n", (float)sum / cnt);
	*/
	/*int num,i;

	printf("단 입력:");
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

	printf("정수 입력:");
	scanf_s("%d", &num);

	while (num % i == 0) {

		if (num == i) {
			printf("소수\n");
		}
		else
			printf("소수가 아니다\n");

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

	/* 프밍 예쁘게 별찍기
		for (int i = 1; i < 6; i++) {
			for (int k = 0; k < 5 - i; k++) {
				printf(" ");
			}
			for (int j = 0; j < 2 * i - 1; j++) {
				printf("★");
			}
			printf("\n");
		}
		for (int i = 5; i > 0; i--) {
			for (int k = 0; k < 5 - i; k++) {
				printf(" ");
			}
			for (int j = 0; j < 2 * i - 1; j++) {
				printf("★");
			}
			printf("\n");
		}


		for (int i = 1; i < 6; i++) {
			for (int k = 0; k < 50 - i; k++) {
				printf(" ");
			}
			for (int j = 0; j < 2 * i - 1; j++) {
				printf("★");
			}
			printf("\n");
		}
		for (int i = 5; i > 0; i--) {
			for (int k = 0; k < 50 - i; k++) {
				printf(" ");
			}
			for (int j = 0; j < 2 * i - 1; j++) {
				printf("★");
			}
			printf("\n");
		}
		for (int i = 1; i < 6; i++) {
			for (int k = 0; k < 100 - i; k++) {
				printf(" ");
			}
			for (int j = 0; j < 2 * i - 1; j++) {
				printf("★");
			}
			printf("\n");
		}
		for (int i = 5; i > 0; i--) {
			for (int k = 0; k < 100 - i; k++) {
				printf(" ");
			}
			for (int j = 0; j < 2 * i - 1; j++) {
				printf("★");
			}
			printf("\n");
		}
		
	int sum = 0, cnt = 0, score = 0;
	char ch;


	do {

		printf("프로그램을 시작하시겠습니까? (y/n) :");
		scanf_s(" %c", &ch, 1);
		getchar();

		if (ch == 'y' || ch == 'Y')
		{

			printf("점수 입력:");

			scanf_s(" %d", &score);

			cnt++;
			sum += score;

			if (score >= 90 && score <= 100) {
				printf("A학점\n");
			}
			else if (score >= 80 && score <= 90) {
				printf("B학점\n");
			}
			else if (score >= 70 && score <= 80) {
				printf("C학점\n");
			}
			else if (score >= 60 && score <= 70) {
				printf("D학점\n");
			}
			else if (score >= 0 && score <= 60) {
				printf("F학점\n");
			}
			else
				printf("입력허용구간이 아닙니다\n");
		}

		else if (ch == 'n' || ch == 'N')
			break;
		else
			printf("입력한 %c는 허용되지 않습니다\n알파벳을 다시 입력하세요.\n", ch);

	} while (1);
	printf("횟수 : %d\n", cnt);
	printf("총합 : %d\n", sum);
	printf("평균 : %.2f\n", (float)sum / cnt);
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