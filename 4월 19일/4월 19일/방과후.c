#include<stdio.h>
int main() {

	/*int cnt = 0;
	char ch;

	while ((ch=getchar)!='q') {

		if (ch == 'a') {
			cnt += 1;
	}
	printf(" %d\n", cnt);*/

	/*int num,i=1;

	scanf_s("%d", &num);

	while (i<=num) {
		if (num % i == 0) {
			printf("%3d", i);
		}
			i++;
	}
	*/
	
	/*int num,sum=0,cnt=0;

	scanf_s("%d", &num);

	while (num) {
		sum = sum + num % 10;
		num = num / 10;
	}
	if (cnt == 0)
		cnt = 1;
	printf("%d %d\n", sum, cnt);*/

	/*int num, i = 1, sum = 0;

	scanf_s("%d", &num);
	
		while (i < num) {

			if (num % i == 0)
				sum += i;
			i++;
		}
		if (num == sum)
			printf("완전수");
		else
			printf("완전수가 아니다");
	}*/

	/*int num, sum = 0, r, temp;
	scanf_s("%d", &num);
	temp = num;
	while (num) {
		r = num % 10;
		num = num / 10;
		sum = sum*10 + r;
	}
	if (sum == temp)
		printf("회문 숫자\n");
	else
		printf("아니다.");*/
	
	/*int num, sum = 0, r, temp;
	scanf_s("%d", &num);
	temp = num;
	while (num) {
		r = num % 10;
		num = num / 10;
		sum = sum * 10 + r;
	}
	if (sum == temp)
		printf("회문 숫자\n");
	else
		printf("아니다.");*/

	/*int num, r, reverse = 0;
	scanf_s("%d", &num);

	while (num) {
		r = num % 10;
		num = num / 10;
		reverse = reverse * 10 + r;
	}
	printf("%d", reverse);*/

	/*int num, r, sum=0;
	scanf_s("%d", &num);
	int temp = num;
	while (num) {
		r = num % 10;
		num = num / 10;
		sum = sum + r * r * r;
	}
	if (sum == temp)
		printf("%d", sum);
	else
		printf("아니다");*/

	/*int sum = 0, num, cnt = -1;
	float avg = 0;

	while (1) {

		printf("input number >> ");
		scanf_s("%d", &num);
		cnt++;
		sum = sum + num;

		if (num == 0)
			break;
	}
	printf("cnt=%d\n", cnt);
	printf("sum=%d\n", sum);
	printf("avg=%d\n", sum/cnt);*/

	/*int num, sum = 0, cnt = 0;

	while (1) {
		printf("input number >>");
		scanf_s("%d", &num);

		if (num % 2 == 1) {
			sum += num;
			cnt++;
		}
		else if (num == 0)
			break;
	}
	printf("홀수 합 : %d\n", sum);
	printf("홀수 평균 : %d\n", sum / cnt);*/

}lfjfkldfglkjgfdlsjldfljfgljfdgjldf