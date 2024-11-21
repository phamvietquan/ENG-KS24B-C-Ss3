#include <stdio.h>

int main(){
	int so;
	printf(" Moi ban nhap vao so nguyen co 4 chu so ");
	scanf("%d", &so);
	int a = (so/1000)%10;
	int b = (so/100)%10;
	int c = (so/10)%10;
	int d = so%10;
	int tong = a + b + c + d;
	printf(" tong cua 4 chu so ban da nhap la: %d", tong);
	return 0;
}
