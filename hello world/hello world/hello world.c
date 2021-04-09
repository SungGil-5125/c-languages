#include <stdio.h>
#include <time.h>
int main()
{
	/*int score;
	printf("점수 입력:");
	scanf_s("%d", &score);
	
	if (score > 100 || score < 0) {
		printf("허용구간이 아닙니다");
	}
	else{
		if (score >= 90)
			printf("a학점 입니다");

		else if (score >= 80)
			printf("b학점 입니다");

		else if (score >= 70)
			printf("c학점 입니다");

		else if (score >= 60)
			printf("d학점 입니다");

		else
			printf("f학점 입니다");
	}


*/

	/*int x, answer;
	printf("숫자 맞추기 게임\n\n");

	srand(time(NULL));
	answer = rand() % 10 + 1;

	printf("1부터 10까지의 숫자를 입력하세요");
	scanf_s("%d",&x);

	if (x == answer) {
		printf("정답입니다\n");
	}
	else {
		printf("오답입니다 정답은 %d입니다\n", answer);
	}



	/*char ch;

	printf("문자를 입력하세요:");
	scanf_s("%c", &ch,sizeof(ch));

	
	if (ch >= 65 && ch <= 90)
		printf("%c는 대문자", ch);

	else if (ch >= 97 && ch <= 122)
		printf("%c는 소문자", ch);

	else if (ch >= 48 && ch <= 57)
		printf("%c는 숫자입니다", ch);

	else if (ch >= 33 && ch <= 47)
		printf("%c는 가타문자 입니다", ch);*/




	/*int num1, num2;
	char ch;
	printf("수식을 입력하세요(예: 2 + 5):");
	scanf_s("%d", &num1);
	scanf_s("%c", &ch, sizeof(ch));
	scanf_s("%d", &num2);

	if (ch == '+')
		printf("%d + %d = %d", num1, num2, num1 + num2);
	else if (ch == '-')
		printf("%d - %d = %d", num1, num2, num1 - num2);
	else if (ch == '*')
		printf("%d * %d = %d", num1, num2, num1 * num2);
	else if (ch == '/')
		printf("%d / %d = %d", num1, num2, num1 / num2);
	else if (ch == '%')
		printf("%d % %d = %d", num1, num2, num1 % num2);
	else
		printf("지원되지 않는 연산자 입니다");*/
	



	/*char a, b;
	printf("문자를 입력하세요");
	scanf_s("%c", &a, sizeof(a));

	printf("문자를 입력하세요");
	scanf_s("%c", &b, sizeof(b));
	
	printf("%c %c", a, b);*/

	/*int answer, user;

	srand(time(NULL));
	answer = rand() % 3 + 1;

	printf("3가지 중 선택하세요\n(1.가위_2.바위_3.보)\n");
	printf("사용자 입력");
	scanf_s("%d", &user);

	if (user == answer)
		printf("비겼습니다! 컴퓨터는 %d를 냈습니다",answer);
	else if (user == 1 && answer == 3)
		printf("이겼습니다! 컴퓨터는 %d을 냈습니다",answer);
	else if (user == 2 && answer == 3)
		printf("졌습니다. 컴퓨터는 %d을 냈습니다",answer);
	
	*/



	/*int user, answer, win=0, lose=0, same=0, pan=0;
	
	while (1)
	{
		printf("4가지 중 선택하세요.\n(1.가위_2.바위_3.보_0.종료)\n");
		printf("사용자 입력:");
		scanf_s("%d", &user);
	
		srand(time(NULL));
		answer = rand() % 3 + 1;


		if (user == answer) {
			printf("비겼습니다! 컴퓨터는 %d를 냈습니다\n", answer);
			same++;
			pan++;
		}
		else if (user == 1 && answer == 3 || user == 3 && answer == 2) {
			printf("이겼습니다! 컴퓨터는 %d을 냈습니다\n", answer);
			win++;
			pan++;
		}
		else if (user == 2 && answer == 3 || user == 1 && answer == 2) {
			printf("졌습니다. 컴퓨터는 %d을 냈습니다\n", answer);
			lose++;
			pan++;
		}
		else if (user == 0)
			break;
		
	}

	printf("게임을 종료합니다. %d판 %d승 %d패 %d무 하셨습니다.", pan, win, lose, same);
	*/
	
	/*int num1;

	printf("정수 입력:");
	scanf_s("%d", &num1);

	switch (num1)
	{
	case 0:
		printf("%d는 3의 배수가 아닙니다", num1);
		break;
	case 1:
		printf("%d는 3의 배수가 아닙니다", num1);
		break;
	case 2:
		printf("%d는 3의 배수가 아닙니다", num1);
		break;
	case 3: 
		printf("%d는 3의 배수입니다", num1);
		break;
	
	
	}*/

	/*int moon;

	printf("달 입력:");
	scanf_s("%d", &moon);

	switch (moon) {
		
	case 2: printf("%d월의 일수는 28일 입니다", moon);
		break;
	case 4:
	case 6:
	case 8:
	case 10:
	case 12:printf("%d월의 일수는 30일 입니다", moon);
		break;

	case 1:
	case 3:
	case 5:
	case 7:
	case 9:
	case 11:
		printf("%d월의 일수는 30일 입니다", moon);
		break;
	}
	*/

	/*int  num1, num2;
	char ch;
	printf("수식을 입력하세요:");
	scanf_s("%d", &num1);
	scanf_s("%c", &ch,sizeof(ch));
	scanf_s("%d", &num2);

	switch(ch){
	case '*':
		printf("%d * %d = %d", num1, num2, num1 * num2);
		break;
	case '+':
		printf("%d * %d = %d", num1, num2, num1 + num2);
		break;
	case '-':
		printf("%d * %d = %d", num1, num2, num1 - num2);
		break;
	case '/':
		printf("%d * %d = %d", num1, num2, num1 / num2);
		break;
	case '%':
		printf("%d * %d = %d", num1, num2, num1 % num2);
		break;
	default:
		printf("지원되지 않는 연산자 입니다.");
		break;
	}*/

	/*int score;
	
	printf("성적을 입력하세요:");
	scanf_s("%d", &score);
	
		if (score <= 0&&score>=100)
		{
			switch (score / 10)
			{

			case 9:
				printf("A학점");
				break;
			case 8:
				printf("B학점");
				break;
			case 7:
				printf("C학점");
				break;
			case 6:
				printf("D학점");
				break;
			default:
				printf("f학점");
				break;
			}
		} 
		else
			printf("점수 허용 구간이 아닙니다.다시 시작하세요");*/


	/*int car,num1,num2;
	char chose;

	printf("자동차 모델을 선택하시겠습니까?(Y/N):");
	scanf_s("%c", &chose,sizwof(car));
	
	switch(chose) 
	{
		case 'y':
			printf("자동차 예약 현왕: 0  0  0\n");
			printf("자동차 모델 선택(1 ~ 3번 중 선택):");
			scanf_s("%d", &car);
			break;
		case 'n':
			printf("자동차 예약 프로그램을 종료합니다");
			break;
		case 'Y':
			printf("자동차 예약 현왕: 0  0  0\n");
			printf("자동차 모델 선택(1 ~ 3번 중 선택):");
			scanf_s("%d", &car);
			break;
		case 'N':
			printf("자동차 예약 프로그램을 종료합니다\n");
			break;
		default:
			printf("알파벳 입력오류\n");
			break;
	}

	if (car == 1) {
		printf("예약 완료되었습니다.\n");
		printf("자동차 예약 현황 : 1  0  0\n");
	}
	if (car == 2) {
		printf("예약 완료되었습니다.\n");
		printf("자동차 예약 현황 : 0  1  0\n");
	}if (car == 3) {
		printf("예약 완료되었습니다.\n");
		printf("자동차 예약 현황 : 0  0  1\n");
	}
	*/	
	
	int num,num2,num3;
	int i, n, p;
	char chose;

	printf("자동차 모델을 선택하시겠습니까?");
	scanf_s("%c", &chose);

	switch (chose) {

	case 'y':
		printf("자동차 모델 번호: 1  2  3\n");
		printf("자동차 예약 현황: %d %d  %d\n",i,n,p);
	case 'Y':
		printf("자동차 모델 번호: 1  2  3\n");
		printf("자동차 예약 현황: %d %d  %d\n", i, n, p);
	case 'N':
		printf("자동차 모델 No.[%d][%d] 예약 완료 후 프로그램 종료");
	case 'n':
		printf("자동차 모델 No.[%d][%d] 예약 완료 후 프로그램 종료");
	default:
		printf("알파벳 입력 오류입니다\n");
		printf("알파벳은 대소문자 구별\n");
		printf("알파벳 입력 오류입니다\n");

	}


	return 0;
}