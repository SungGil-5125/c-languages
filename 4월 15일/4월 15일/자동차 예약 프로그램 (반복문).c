#include<stdio.h>
int main() {

	int car;
	int i = 0, j = 0, k = 0;
	char ch;

	while (1) {

		printf("자동차 모델을 선택하시겠습니까? (Y/N) :");
		scanf_s(" %c", &ch, sizeof(ch));


		while (ch == 'y' || ch == 'Y') {
			printf("자동차 예약 번호:  1  2  3\n");
			printf("자동차 예약 현황:  %d  %d  %d\n", i, j, k);

			printf("자동차 모델 선택(1 ~ 3번 중 선택) :");
			scanf_s("%d", &car);

			if (car == 1 || car == 2 || car == 3) {

				printf("예약 완료 되었습니다.\n");

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
					printf("잘못 입력했습니다. 모델번호를 다시 입력하세요.\n");
				break;
			}
			 
	else if (ch == 'n' || ch == 'N') {
		break;
			}

			printf("무야호");
		}
	}
}