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

	int num, r, sum=0;
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
		printf("아니다");
}