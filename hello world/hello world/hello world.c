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
	}*/

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
		printf("%c는 가타문자 입니다", ch);

	/*int num1, num2;
	char ch;
	printf("수식을 입력하세요(예: 2 + 5):");
	scanf_s("%d", &num1);
	scanf_s("%c", &ch);
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
		printf("지원되지 않는 연산자 입니다");
		*/
	
	

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

	int user, answer, win, lose, same;

	



	return 0;
}