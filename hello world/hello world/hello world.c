#include <stdio.h>
#include <time.h>
int main()
{
	/*int score;
	printf("���� �Է�:");
	scanf_s("%d", &score);
	
	if (score > 100 || score < 0) {
		printf("��뱸���� �ƴմϴ�");
	}
	else{
		if (score >= 90)
			printf("a���� �Դϴ�");

		else if (score >= 80)
			printf("b���� �Դϴ�");

		else if (score >= 70)
			printf("c���� �Դϴ�");

		else if (score >= 60)
			printf("d���� �Դϴ�");

		else
			printf("f���� �Դϴ�");
	}


*/

	/*int x, answer;
	printf("���� ���߱� ����\n\n");

	srand(time(NULL));
	answer = rand() % 10 + 1;

	printf("1���� 10������ ���ڸ� �Է��ϼ���");
	scanf_s("%d",&x);

	if (x == answer) {
		printf("�����Դϴ�\n");
	}
	else {
		printf("�����Դϴ� ������ %d�Դϴ�\n", answer);
	}



	/*char ch;

	printf("���ڸ� �Է��ϼ���:");
	scanf_s("%c", &ch,sizeof(ch));

	
	if (ch >= 65 && ch <= 90)
		printf("%c�� �빮��", ch);

	else if (ch >= 97 && ch <= 122)
		printf("%c�� �ҹ���", ch);

	else if (ch >= 48 && ch <= 57)
		printf("%c�� �����Դϴ�", ch);

	else if (ch >= 33 && ch <= 47)
		printf("%c�� ��Ÿ���� �Դϴ�", ch);*/




	/*int num1, num2;
	char ch;
	printf("������ �Է��ϼ���(��: 2 + 5):");
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
		printf("�������� �ʴ� ������ �Դϴ�");*/
	



	/*char a, b;
	printf("���ڸ� �Է��ϼ���");
	scanf_s("%c", &a, sizeof(a));

	printf("���ڸ� �Է��ϼ���");
	scanf_s("%c", &b, sizeof(b));
	
	printf("%c %c", a, b);*/

	/*int answer, user;

	srand(time(NULL));
	answer = rand() % 3 + 1;

	printf("3���� �� �����ϼ���\n(1.����_2.����_3.��)\n");
	printf("����� �Է�");
	scanf_s("%d", &user);

	if (user == answer)
		printf("�����ϴ�! ��ǻ�ʹ� %d�� �½��ϴ�",answer);
	else if (user == 1 && answer == 3)
		printf("�̰���ϴ�! ��ǻ�ʹ� %d�� �½��ϴ�",answer);
	else if (user == 2 && answer == 3)
		printf("�����ϴ�. ��ǻ�ʹ� %d�� �½��ϴ�",answer);
	
	*/



	/*int user, answer, win=0, lose=0, same=0, pan=0;
	
	while (1)
	{
		printf("4���� �� �����ϼ���.\n(1.����_2.����_3.��_0.����)\n");
		printf("����� �Է�:");
		scanf_s("%d", &user);
	
		srand(time(NULL));
		answer = rand() % 3 + 1;


		if (user == answer) {
			printf("�����ϴ�! ��ǻ�ʹ� %d�� �½��ϴ�\n", answer);
			same++;
			pan++;
		}
		else if (user == 1 && answer == 3 || user == 3 && answer == 2) {
			printf("�̰���ϴ�! ��ǻ�ʹ� %d�� �½��ϴ�\n", answer);
			win++;
			pan++;
		}
		else if (user == 2 && answer == 3 || user == 1 && answer == 2) {
			printf("�����ϴ�. ��ǻ�ʹ� %d�� �½��ϴ�\n", answer);
			lose++;
			pan++;
		}
		else if (user == 0)
			break;
		
	}

	printf("������ �����մϴ�. %d�� %d�� %d�� %d�� �ϼ̽��ϴ�.", pan, win, lose, same);
	*/
	
	/*int num1;

	printf("���� �Է�:");
	scanf_s("%d", &num1);

	switch (num1)
	{
	case 0:
		printf("%d�� 3�� ����� �ƴմϴ�", num1);
		break;
	case 1:
		printf("%d�� 3�� ����� �ƴմϴ�", num1);
		break;
	case 2:
		printf("%d�� 3�� ����� �ƴմϴ�", num1);
		break;
	case 3: 
		printf("%d�� 3�� ����Դϴ�", num1);
		break;
	
	
	}*/

	/*int moon;

	printf("�� �Է�:");
	scanf_s("%d", &moon);

	switch (moon) {
		
	case 2: printf("%d���� �ϼ��� 28�� �Դϴ�", moon);
		break;
	case 4:
	case 6:
	case 8:
	case 10:
	case 12:printf("%d���� �ϼ��� 30�� �Դϴ�", moon);
		break;

	case 1:
	case 3:
	case 5:
	case 7:
	case 9:
	case 11:
		printf("%d���� �ϼ��� 30�� �Դϴ�", moon);
		break;
	}
	*/

	/*int  num1, num2;
	char ch;
	printf("������ �Է��ϼ���:");
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
		printf("�������� �ʴ� ������ �Դϴ�.");
		break;
	}*/

	/*int score;
	
	printf("������ �Է��ϼ���:");
	scanf_s("%d", &score);
	
		if (score <= 0&&score>=100)
		{
			switch (score / 10)
			{

			case 9:
				printf("A����");
				break;
			case 8:
				printf("B����");
				break;
			case 7:
				printf("C����");
				break;
			case 6:
				printf("D����");
				break;
			default:
				printf("f����");
				break;
			}
		} 
		else
			printf("���� ��� ������ �ƴմϴ�.�ٽ� �����ϼ���");*/


	/*int car,num1,num2;
	char chose;

	printf("�ڵ��� ���� �����Ͻðڽ��ϱ�?(Y/N):");
	scanf_s("%c", &chose,sizwof(car));
	
	switch(chose) 
	{
		case 'y':
			printf("�ڵ��� ���� ����: 0  0  0\n");
			printf("�ڵ��� �� ����(1 ~ 3�� �� ����):");
			scanf_s("%d", &car);
			break;
		case 'n':
			printf("�ڵ��� ���� ���α׷��� �����մϴ�");
			break;
		case 'Y':
			printf("�ڵ��� ���� ����: 0  0  0\n");
			printf("�ڵ��� �� ����(1 ~ 3�� �� ����):");
			scanf_s("%d", &car);
			break;
		case 'N':
			printf("�ڵ��� ���� ���α׷��� �����մϴ�\n");
			break;
		default:
			printf("���ĺ� �Է¿���\n");
			break;
	}

	if (car == 1) {
		printf("���� �Ϸ�Ǿ����ϴ�.\n");
		printf("�ڵ��� ���� ��Ȳ : 1  0  0\n");
	}
	if (car == 2) {
		printf("���� �Ϸ�Ǿ����ϴ�.\n");
		printf("�ڵ��� ���� ��Ȳ : 0  1  0\n");
	}if (car == 3) {
		printf("���� �Ϸ�Ǿ����ϴ�.\n");
		printf("�ڵ��� ���� ��Ȳ : 0  0  1\n");
	}
	*/	
	
	int num,num2,num3;
	int i, n, p;
	char chose;

	printf("�ڵ��� ���� �����Ͻðڽ��ϱ�?");
	scanf_s("%c", &chose);

	switch (chose) {

	case 'y':
		printf("�ڵ��� �� ��ȣ: 1  2  3\n");
		printf("�ڵ��� ���� ��Ȳ: %d %d  %d\n",i,n,p);
	case 'Y':
		printf("�ڵ��� �� ��ȣ: 1  2  3\n");
		printf("�ڵ��� ���� ��Ȳ: %d %d  %d\n", i, n, p);
	case 'N':
		printf("�ڵ��� �� No.[%d][%d] ���� �Ϸ� �� ���α׷� ����");
	case 'n':
		printf("�ڵ��� �� No.[%d][%d] ���� �Ϸ� �� ���α׷� ����");
	default:
		printf("���ĺ� �Է� �����Դϴ�\n");
		printf("���ĺ��� ��ҹ��� ����\n");
		printf("���ĺ� �Է� �����Դϴ�\n");

	}


	return 0;
}