#include<stdio.h>
int main() {
	
	int x, y;

	for (x = 1; x < 6; x++) {

		for (y = 0; y < x; y++) {
			printf("*");
		}
		printf("\n");
	}
}