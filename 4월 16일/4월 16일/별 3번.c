#include<stdio.h>
int main() {

	int x, y;

	for (x = 0; x < 5; x++) {
		for (y = 5; y > x; y--) {
			printf("*");
		}
		printf("\n");
	}
}