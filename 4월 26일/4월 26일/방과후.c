#include<stdio.h>
int main() {
	/*
	int cnt = 0;
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			++cnt;
				printf("%3d",cnt);
			}
			printf("\n");
		
	}
	char ch='a';
	for (int i = 1; i <= 5; i++) {
		for (int j = 5; j > i; j--)
		printf("%3c", ch++);
		printf("\n");
	}*/

	for (int i = 2; i <= 9; i++) {
		for (int j = 2; j < 5; j++) 
			
			printf("%3d  *  %3d  =  %3d", j, i, i * j);
			printf("\n");		
	}
}