#include<stdio.h>
int main() {

	int x, y, r;

	printf("�ΰ��� ������ �Է��Ͻÿ�(ū��, ������):");
	scanf_s("%d %d", &x, &y);

	while(y!=0){
		r = x % y;
		x = y;
		y = r;
	
	}
		printf("�ִ� ������� %d�Դϴ�.\n",x);
}