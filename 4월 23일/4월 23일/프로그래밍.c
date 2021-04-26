#include<stdio.h>
int main() {

	for (int i = 1; i <= 5; i++) {

		for (int j = 1; j <= i-1; j++) {
			printf(" ");

			for (int j = 1; j <= 2 *(6 - i) - 1; j++) {
				printf("*");
			}

			printf("\n");
		}
	}
}