#include<stdio.h>
int main()
{

	int x,y,z;
	

	for (x = 1; x < 100; x++) {
		for (y = 1; y < 100; y++) {
			for (z = 1; z < 100; z++) {
				if ((z*z)==(x*x)+(y*y)) {
					printf("%3d%3d%3d",x,y,z);
				}
			}
		}
	}
}